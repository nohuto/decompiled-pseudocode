/*
 * XREFs of KiFilterFiberContext @ 0x14098FB60
 * Callers:
 *     KeInitAmd64SpecificState @ 0x1409CD458 (KeInitAmd64SpecificState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExNotifyCallback @ 0x14008E480 (ExNotifyCallback.c)
 *     KeExpandKernelStackAndCallout @ 0x14013B1A0 (KeExpandKernelStackAndCallout.c)
 *     ExInitializeNPagedLookasideList @ 0x14015FA60 (ExInitializeNPagedLookasideList.c)
 *     KdDisableDebugger @ 0x140193810 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x14028C1D0 (KdEnableDebugger.c)
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     KiSwInterruptPresent @ 0x1409DF434 (KiSwInterruptPresent.c)
 *     KeKeepData @ 0x1409E03C0 (KeKeepData.c)
 */

_BOOL8 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // r12d
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int128 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r15
  NTSTATUS v12; // eax
  char v13; // di
  unsigned __int64 v14; // rax
  unsigned __int128 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int128 v18; // rax
  NTSTATUS v19; // eax
  char v20; // cl
  int v21; // eax
  int v22; // edx
  NTSTATUS v23; // eax
  char v24; // cl
  int v25; // ecx
  __int64 *v26; // rax
  __int64 v27; // rdx
  _DWORD Parameter[4]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v30; // [rsp+50h] [rbp-79h]
  int v31; // [rsp+58h] [rbp-71h]
  char v32; // [rsp+5Ch] [rbp-6Dh]
  _DWORD v33[4]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v34; // [rsp+70h] [rbp-59h]
  int v35; // [rsp+78h] [rbp-51h]
  char v36; // [rsp+7Ch] [rbp-4Dh]
  _DWORD v37[4]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v38; // [rsp+90h] [rbp-39h]
  int v39; // [rsp+98h] [rbp-31h]
  char v40; // [rsp+9Ch] [rbp-2Dh]
  __int64 v41; // [rsp+A0h] [rbp-29h]
  __int64 v42; // [rsp+A8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+130h] [rbp+67h] BYREF
  __int64 v45; // [rsp+138h] [rbp+6Fh]
  __int64 v46; // [rsp+140h] [rbp+77h]
  __int64 v47; // [rsp+148h] [rbp+7Fh]

  v2 = KdDisableDebugger();
  KeKeepData(KiFilterFiberContext);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v45 = *((_QWORD *)&v4 + 1);
  v5 = ((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) % 0xA;
  if ( !Src && !a1 && !__29 )
  {
    if ( PsIntegrityCheckEnabled )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"TV";
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0) >= 0 )
      {
        ExNotifyCallback(CallbackObject, sub_1401A1880, &__20);
        ObfDereferenceObject(CallbackObject);
        if ( __20 )
          __29 = 1;
        ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, 0LL, 0LL, 0x200u, 0xAC0uLL, 0x746E494Bu, 0);
      }
    }
  }
  v6 = __rdtsc();
  v7 = (__ROR8__(v6, 3) ^ v6) * (unsigned __int128)0x7010008004002001uLL;
  v46 = *((_QWORD *)&v7 + 1);
  v8 = v7;
  *(_QWORD *)&v7 = __rdtsc();
  v9 = v8 ^ *((_QWORD *)&v7 + 1);
  Parameter[2] = (v5 < 6) + 1;
  v30 = a1;
  v31 = 1;
  v32 = 0;
  v10 = (__ROR8__(v7, 3) ^ (unsigned __int64)v7) * (unsigned __int128)0x7010008004002001uLL;
  v47 = *((_QWORD *)&v10 + 1);
  v11 = ((unsigned __int64)v10 ^ *((_QWORD *)&v10 + 1)) % 6;
  Parameter[1] = v11;
  Parameter[0] = v9 % 0xD;
  v12 = KeExpandKernelStackAndCallout(sub_1409AB270, Parameter, 0xC000uLL);
  v13 = v32;
  if ( v12 < 0 )
    v13 = 0;
  v32 = v13;
  if ( v13 )
  {
    if ( v5 < 6 )
    {
      v14 = __rdtsc();
      v15 = (__ROR8__(v14, 3) ^ v14) * (unsigned __int128)0x7010008004002001uLL;
      v41 = *((_QWORD *)&v15 + 1);
      v16 = ((unsigned __int64)v15 ^ *((_QWORD *)&v15 + 1)) % 0xD;
      do
      {
        v17 = __rdtsc();
        v18 = (__ROR8__(v17, 3) ^ v17) * (unsigned __int128)0x7010008004002001uLL;
        v42 = *((_QWORD *)&v18 + 1);
      }
      while ( (_DWORD)v11 && ((unsigned __int64)v18 ^ *((_QWORD *)&v18 + 1)) % 6 == (_DWORD)v11 );
      v33[0] = v16;
      v33[1] = ((unsigned __int64)v18 ^ *((_QWORD *)&v18 + 1)) % 6;
      v33[2] = (v5 < 6) + 1;
      v34 = a1;
      v35 = 0;
      v36 = 0;
      v19 = KeExpandKernelStackAndCallout(sub_1409AB270, v33, 0xC000uLL);
      v20 = v36;
      if ( v19 < 0 )
        v20 = 0;
      v36 = v20;
      v13 = v20;
    }
    if ( v13 )
    {
      if ( !Src && !a1 && ((int)KiSwInterruptPresent() >= 0 || __29) )
      {
        v37[0] = 0;
        v37[1] = 7;
        v37[2] = 1;
        v38 = 0LL;
        v21 = KiSwInterruptPresent();
        v40 = 0;
        v22 = 8;
        if ( v21 >= 0 )
          v22 = 0;
        v39 = v22;
        v23 = KeExpandKernelStackAndCallout(sub_1409AB270, v37, 0xC000uLL);
        v24 = v40;
        if ( v23 < 0 )
          v24 = 0;
        v40 = v24;
        v13 = v24;
      }
      if ( v13 && !a1 )
      {
        if ( qword_140A0B590 )
          ExFreePool(qword_140A0B590);
        v25 = 24;
        v26 = &__21;
        v27 = 3LL;
        do
        {
          *v26 = 0LL;
          v25 -= 8;
          ++v26;
          --v27;
        }
        while ( v27 );
        for ( ; v25; --v25 )
        {
          *(_BYTE *)v26 = 0;
          v26 = (__int64 *)((char *)v26 + 1);
        }
        __2a = 0;
        __22 = 0;
        __23 = 0LL;
        dword_140406640 = 0;
        qword_140A0B080 = 0LL;
      }
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v13 != 0;
}
