/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C0090880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0090A90 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0090E30 (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0091000 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorpValidateTargetSet @ 0x1C0091A78 (ProcessorpValidateTargetSet.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C0092268 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSet @ 0x1C00932C8 (ProcessorpSelectProcessorSet.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C0094BD4 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C00B2C40 (ProcessorpGetSecondaryInterruptAffinity.c)
 */

__int64 __fastcall ProcessorpFindIdtEntriesApic(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        unsigned int a8)
{
  int DeviceIdtAssignment; // esi
  int DevicePolicy; // eax
  char v13; // r14
  unsigned __int16 v14; // si
  unsigned int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int64 result; // rax
  __int128 v19; // xmm0
  char v20; // al
  int SecondaryInterruptAffinity; // ecx
  int v22; // r8d
  int v23; // r9d
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  unsigned int v26; // r15d
  int v27; // r8d
  int v28; // r9d
  _BYTE v29[4]; // [rsp+50h] [rbp-59h] BYREF
  int v30; // [rsp+54h] [rbp-55h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-51h]
  __int128 v32; // [rsp+60h] [rbp-49h] BYREF
  PDEVICE_OBJECT v33; // [rsp+78h] [rbp-31h]
  __int128 v34; // [rsp+80h] [rbp-29h] BYREF
  __int64 v35; // [rsp+90h] [rbp-19h]

  v31 = a4;
  v33 = Pdo;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v34);
  if ( DeviceIdtAssignment >= 0 )
  {
    v25 = v34;
    *(_DWORD *)(a3 + 32) = HIDWORD(v35);
    LOWORD(v30) = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v25;
    IrqPolicyGetDevicePolicy(Pdo, (__int64)&v30, (__int64)v29);
    *(_WORD *)(a3 + 6) = v30;
    return (unsigned int)DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(a3 + 4) )
  {
    v14 = *(_WORD *)(a3 + 6);
    v13 = *(_BYTE *)(a3 + 8);
    v32 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    DevicePolicy = IrqPolicyGetDevicePolicy(Pdo, (__int64)&v30, (__int64)v29);
    v13 = v29[0];
    if ( DevicePolicy < 0 )
    {
      v14 = IrqMachinePolicy;
      v32 = 0uLL;
    }
    else
    {
      v14 = v30;
    }
  }
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
  {
    v26 = v31;
    v30 = 0;
    SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(0LL, v31, &v32);
    if ( SecondaryInterruptAffinity >= 0 )
    {
      v13 = 0;
      LOBYTE(v28) = a7 & 1;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (_DWORD)Pdo,
                                     (unsigned int)&v32,
                                     v27,
                                     v28,
                                     v26,
                                     a5,
                                     a6,
                                     a8,
                                     (__int64)&v30);
LABEL_16:
      if ( SecondaryInterruptAffinity >= 0 )
      {
        v24 = v32;
        *(_DWORD *)(a3 + 32) = v30;
        *(_OWORD *)(a3 + 16) = v24;
        *(_WORD *)(a3 + 6) = v14;
        *(_BYTE *)(a3 + 8) = v13;
        *(_BYTE *)(a3 + 4) = 1;
      }
    }
    return (unsigned int)SecondaryInterruptAffinity;
  }
  if ( !(_QWORD)v32 )
    goto LABEL_11;
  if ( (unsigned __int8)ProcessorpValidateTargetSet(&v32) )
  {
    LOBYTE(v17) = a7 & 1;
    result = ProcessorpFindAffinitizedIdtEntries(
               (_DWORD)v33,
               (unsigned int)&v32,
               v16,
               v17,
               v31,
               a5,
               a6,
               a8,
               (__int64)&v30);
    v15 = result;
    if ( (int)result >= 0 )
    {
      v19 = v32;
      *(_DWORD *)(a3 + 32) = v30;
      *(_OWORD *)(a3 + 16) = v19;
      *(_WORD *)(a3 + 6) = v14;
      *(_BYTE *)(a3 + 8) = v13;
      *(_BYTE *)(a3 + 4) = 1;
      return result;
    }
  }
  else
  {
    v15 = -1073741637;
  }
  if ( v14 != 4 )
  {
LABEL_11:
    if ( IrqMachinePolicy == 6 )
    {
      v35 = 0LL;
      LODWORD(v34) = a5;
      BYTE4(v34) = a5 + 0x100000 > 0xFFFFE;
      WORD3(v34) = 1;
      BYTE5(v34) = a6 & 1;
      *((_QWORD *)&v34 + 1) = KeQueryGroupAffinity(0);
      v20 = IrqPolicyQueryInterruptSteeringEnabled(&v34);
    }
    else
    {
      v20 = 0;
    }
    LOBYTE(v34) = 0;
    v30 = 0;
    while ( 1 )
    {
      LOBYTE(v16) = v20;
      LOBYTE(v15) = v13;
      SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v14, v15, v16, (unsigned int)&v32, (__int64)&v34);
      if ( SecondaryInterruptAffinity < 0 )
        return (unsigned int)SecondaryInterruptAffinity;
      LOBYTE(v23) = a7 & 1;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (_DWORD)v33,
                                     (unsigned int)&v32,
                                     v22,
                                     v23,
                                     v31,
                                     a5,
                                     a6,
                                     a8,
                                     (__int64)&v30);
      v20 = 0;
      if ( SecondaryInterruptAffinity >= 0 )
        goto LABEL_16;
    }
  }
  if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
  {
    v14 = IrqMachinePolicy;
    goto LABEL_11;
  }
  return v15;
}
