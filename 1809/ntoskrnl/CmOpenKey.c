/*
 * XREFs of CmOpenKey @ 0x1405E1EA0
 * Callers:
 *     NtOpenKey @ 0x1405E14C0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x1405E1E50 (NtOpenKeyEx.c)
 *     NtOpenKeyTransactedEx @ 0x140694CD0 (NtOpenKeyTransactedEx.c)
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFreeExtraParameter @ 0x1407ED7DC (CmpFreeExtraParameter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // r13d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v11; // si
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  POBJECT_TYPE *v17; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v19; // ebx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rcx
  bool v24; // zf
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  HANDLE Handle[2]; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v31; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v32; // [rsp+80h] [rbp-1C8h]
  HANDLE *v33; // [rsp+88h] [rbp-1C0h]
  __int64 v34; // [rsp+90h] [rbp-1B8h]
  PVOID Object; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-1A8h]
  LARGE_INTEGER v37[4]; // [rsp+B0h] [rbp-198h] BYREF
  _QWORD v38[38]; // [rsp+D0h] [rbp-178h] BYREF

  v33 = a1;
  v34 = a3;
  Handle[0] = 0LL;
  v31 = 0uLL;
  memset(v37, 0, sizeof(v37));
  v32 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v37, 0x20000u);
  memset(v38, 0, 0x128uLL);
  v38[19] = &v38[18];
  v38[18] = &v38[18];
  memset(&v38[27], 0, 0x50uLL);
  HIDWORD(v38[3]) = a2 & 0x300;
  v9 = a2 & 0xFFFFFCFF;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v26) = 11;
      CmpTraceRoutine(v26, v37, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
  if ( (a4 & 0x1C) != a4 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 3221225714LL;
  }
  v11 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v11 == 1 )
  {
    v12 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = 0LL;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *(_QWORD *)(a3 + 16);
    if ( v13 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v14 = *(_DWORD *)v13;
    LODWORD(v36) = v14;
    v15 = *(_QWORD *)(v13 + 8);
    *((_QWORD *)&v36 + 1) = v15;
    v31 = v36;
    if ( (_WORD)v14 )
    {
      if ( (v15 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v15 + (unsigned __int16)v14;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < v15 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v31 = *(_OWORD *)*(_QWORD *)(a3 + 16);
  }
  if ( CmpTraceRoutine
    && *(_QWORD *)(a3 + 8)
    && ObReferenceObjectByHandle(
         *(HANDLE *)(a3 + 8),
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL) >= 0 )
  {
    v32 = *((_QWORD *)Object + 1);
    ObfDereferenceObject(Object);
  }
  v38[9] = a5;
  LODWORD(v38[3]) = a4;
  v17 = CmKeyObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v19 = ObOpenObjectByNameEx(a3, v17, v11, 0LL, v9, v38, CurrentSilo, Handle);
  v20 = v19 >= 0;
  if ( v19 >= 0 )
  {
    v20 = (unsigned __int64)Handle[0];
    *a1 = Handle[0];
  }
  if ( CmpTraceRoutine )
  {
    v27 = v32;
    LOBYTE(v27) = 11;
    CmpTraceRoutine(v27, v37, (unsigned int)v19, 0LL, v32, &v31);
  }
  if ( v38[11] )
  {
    CmpLockRegistry(v20);
    CmpDereferenceKeyControlBlock(v38[11]);
    CmpUnlockRegistry(v28);
  }
  v21 = (_QWORD *)v38[18];
  v22 = *(_QWORD *)v38[18];
  if ( *(_QWORD **)(v38[18] + 8LL) != &v38[18] || *(_QWORD *)(v22 + 8) != v38[18] )
LABEL_46:
    __fastfail(3u);
  v38[18] = *(_QWORD *)v38[18];
  for ( *(_QWORD *)(v22 + 8) = &v38[18]; v21 != &v38[18]; *(_QWORD *)(v29 + 8) = &v38[18] )
  {
    CmpFreeExtraParameter(v21);
    v21 = (_QWORD *)v38[18];
    v29 = *(_QWORD *)v38[18];
    if ( *(_QWORD **)(v38[18] + 8LL) != &v38[18] || *(_QWORD *)(v29 + 8) != v38[18] )
      goto LABEL_46;
    v38[18] = *(_QWORD *)v38[18];
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable++ == -1;
  if ( v24
    && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v23);
  }
  return (unsigned int)v19;
}
