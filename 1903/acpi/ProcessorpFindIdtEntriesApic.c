/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C0099260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C00994A0 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C009983C (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0099A20 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorpValidateTargetSet @ 0x1C009A57C (ProcessorpValidateTargetSet.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009ADA8 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSet @ 0x1C009BB4C (ProcessorpSelectProcessorSet.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C009D894 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C00B66D0 (ProcessorpGetSecondaryInterruptAffinity.c)
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
  int DeviceIdtAssignment; // r14d
  int DevicePolicy; // eax
  char v13; // r14
  unsigned __int16 v14; // si
  char IsInterruptTypeSecondary; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  char v19; // al
  int v20; // r9d
  __int64 result; // rax
  __int128 v22; // xmm0
  char InterruptSteeringEnabled; // al
  int SecondaryInterruptAffinity; // ecx
  int v25; // r8d
  int v26; // r9d
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  unsigned int v29; // r13d
  int v30; // r8d
  int v31; // r9d
  _BYTE v32[4]; // [rsp+50h] [rbp-69h] BYREF
  int v33; // [rsp+54h] [rbp-65h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-61h]
  __int128 v35; // [rsp+60h] [rbp-59h] BYREF
  PDEVICE_OBJECT v36; // [rsp+78h] [rbp-41h]
  _QWORD v37[3]; // [rsp+80h] [rbp-39h] BYREF
  _OWORD v38[2]; // [rsp+98h] [rbp-21h] BYREF

  v36 = Pdo;
  v34 = a4;
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  v35 = 0uLL;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, v38);
  if ( DeviceIdtAssignment >= 0 )
  {
    v28 = v38[0];
    *(_DWORD *)(a3 + 32) = DWORD1(v38[1]);
    LOWORD(v33) = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v28;
    IrqPolicyGetDevicePolicy(Pdo, (__int64)&v33, (__int64)v32);
    *(_WORD *)(a3 + 6) = v33;
    return (unsigned int)DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(a3 + 4) )
  {
    v14 = *(_WORD *)(a3 + 6);
    v13 = *(_BYTE *)(a3 + 8);
    v35 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    DevicePolicy = IrqPolicyGetDevicePolicy(Pdo, (__int64)&v33, (__int64)v32);
    v13 = v32[0];
    if ( DevicePolicy < 0 )
    {
      v14 = IrqMachinePolicy;
      v35 = 0uLL;
    }
    else
    {
      v14 = v33;
    }
  }
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a5);
  v18 = 0;
  if ( IsInterruptTypeSecondary )
  {
    v29 = v34;
    v33 = 0;
    SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(v17, v34, &v35);
    if ( SecondaryInterruptAffinity >= 0 )
    {
      v13 = 0;
      LOBYTE(v31) = a7 & 1;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (_DWORD)v36,
                                     (unsigned int)&v35,
                                     v30,
                                     v31,
                                     v29,
                                     a5,
                                     a6,
                                     a8,
                                     (__int64)&v33);
LABEL_16:
      if ( SecondaryInterruptAffinity >= 0 )
      {
        v27 = v35;
        *(_DWORD *)(a3 + 32) = v33;
        *(_OWORD *)(a3 + 16) = v27;
        *(_WORD *)(a3 + 6) = v14;
        *(_BYTE *)(a3 + 8) = v13;
        *(_BYTE *)(a3 + 4) = 1;
      }
    }
    return (unsigned int)SecondaryInterruptAffinity;
  }
  if ( !(_QWORD)v35 )
    goto LABEL_11;
  v19 = ProcessorpValidateTargetSet(&v35, v16, 0LL);
  v18 = 0;
  if ( v19 )
  {
    LOBYTE(v20) = a7 & 1;
    result = ProcessorpFindAffinitizedIdtEntries(
               (_DWORD)v36,
               (unsigned int)&v35,
               0,
               v20,
               v34,
               a5,
               a6,
               a8,
               (__int64)&v33);
    v18 = 0;
    LODWORD(v16) = result;
    if ( (int)result >= 0 )
    {
      v22 = v35;
      *(_DWORD *)(a3 + 32) = v33;
      *(_OWORD *)(a3 + 16) = v22;
      *(_WORD *)(a3 + 6) = v14;
      *(_BYTE *)(a3 + 8) = v13;
      *(_BYTE *)(a3 + 4) = 1;
      return result;
    }
  }
  else
  {
    LODWORD(v16) = -1073741637;
  }
  if ( v14 != 4 )
  {
LABEL_11:
    if ( IrqMachinePolicy == 6 )
    {
      *(_QWORD *)&v38[1] = 0LL;
      LODWORD(v38[0]) = a5;
      DWORD1(v38[0]) = a5 + 0x100000 > 0xFFFFE;
      *(_WORD *)((char *)v38 + 5) = a6 & 1;
      *((_QWORD *)&v38[0] + 1) = KeQueryGroupAffinity(0);
      InterruptSteeringEnabled = IrqPolicyQueryInterruptSteeringEnabled(v38);
      v18 = 0;
    }
    else
    {
      InterruptSteeringEnabled = 0;
    }
    v33 = 0;
    while ( 1 )
    {
      LOBYTE(v18) = InterruptSteeringEnabled;
      LOBYTE(v16) = v13;
      SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v14, v16, v18, (unsigned int)&v35, (__int64)v37);
      if ( SecondaryInterruptAffinity < 0 )
        return (unsigned int)SecondaryInterruptAffinity;
      LOBYTE(v26) = a7 & 1;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (_DWORD)v36,
                                     (unsigned int)&v35,
                                     v25,
                                     v26,
                                     v34,
                                     a5,
                                     a6,
                                     a8,
                                     (__int64)&v33);
      InterruptSteeringEnabled = 0;
      if ( SecondaryInterruptAffinity >= 0 )
        goto LABEL_16;
    }
  }
  if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
  {
    v14 = IrqMachinePolicy;
    goto LABEL_11;
  }
  return (unsigned int)v16;
}
