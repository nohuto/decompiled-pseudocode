/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x1407F4998
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x140121020 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14031BCF8 (ExTryConvertSharedToExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407F380C (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x1407F3A50 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x1407F4688 (CmpGetVirtualStoreRoot.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, unsigned __int64 *a4)
{
  ULONG_PTR v7; // r14
  char v8; // r15
  int VirtualStoreRoot; // ebx
  UNICODE_STRING *v10; // rcx
  _DWORD *v11; // rsi
  ULONG_PTR v12; // rcx
  unsigned __int64 v13; // r8
  unsigned int v14; // edx
  UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v17; // [rsp+40h] [rbp-39h] BYREF
  PVOID P; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  ULONG_PTR v21; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 *v22; // [rsp+70h] [rbp-9h]
  LARGE_INTEGER v23[4]; // [rsp+78h] [rbp-1h] BYREF

  v22 = a4;
  memset(v23, 0, sizeof(v23));
  v7 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v23, 0x20000u);
  v20 = 0LL;
  P = 0LL;
  v17 = 0;
  v8 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v21 = 0LL;
  if ( CmpTraceRoutine && BugCheckParameter2 )
    v7 = BugCheckParameter2;
  if ( !a3 )
  {
    v8 = ExTryConvertSharedToExclusiveLite();
    if ( !v8 )
    {
      VirtualStoreRoot = -1073741739;
LABEL_22:
      if ( CmpTraceRoutine )
      {
        p_DestinationString = &DestinationString;
        LOBYTE(p_DestinationString) = 26;
        CmpTraceRoutine(p_DestinationString, v23, (unsigned int)VirtualStoreRoot, 0LL, v7, &DestinationString);
      }
      if ( DestinationString.Buffer )
        RtlFreeAnsiString(&DestinationString);
      return (unsigned int)VirtualStoreRoot;
    }
  }
  CmpUnlockKcb(BugCheckParameter2);
  VirtualStoreRoot = CmRealKCBToVirtualPath(BugCheckParameter2, 0LL, a2, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(BugCheckParameter2, (__int64)&DestinationString, &v17, &P) >= 0 )
    {
      v11 = P;
      if ( v17 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(a2, (__int64 *)&v20, (int *)&P, &v21);
        if ( VirtualStoreRoot >= 0 )
        {
          v12 = v21;
          v13 = v20;
          v14 = v17;
          *v22 = v20;
          v11[8] = *(_DWORD *)(v12 + 32);
          *((_QWORD *)v11 + 2) = v12;
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v11, v14, v13, BugCheckParameter2, a2);
        }
      }
      else
      {
        VirtualStoreRoot = -1073741811;
      }
      if ( v11 )
      {
        CmpDestroyVirtualStack((__int64)v11, v17);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      VirtualStoreRoot = -1073741670;
    }
    CmpLockKcbExclusive(BugCheckParameter2);
    if ( v8 )
      ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
    goto LABEL_22;
  }
  if ( CmpTraceRoutine )
  {
    v10 = &DestinationString;
    LOBYTE(v10) = 26;
    CmpTraceRoutine(v10, v23, (unsigned int)VirtualStoreRoot, 0LL, v7, &DestinationString);
  }
  return (unsigned int)VirtualStoreRoot;
}
