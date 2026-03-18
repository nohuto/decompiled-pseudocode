/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011AC40 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140672858 (SmProcessCreateRequest.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     SmAcquireReleaseCharges @ 0x1400D7A30 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCleanup @ 0x14011B218 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14011B2E4 (SmKmStoreHelperCheckWaitCommand.c)
 *     SmFpCleanup @ 0x14011B304 (SmFpCleanup.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B358 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B868 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011CA34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     SmKmFileInfoCleanup @ 0x1408E916C (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  char v4; // al
  struct _KPROCESS *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v7; // al
  struct _PRIVILEGE_SET *v8; // rdi
  struct _PRIVILEGE_SET *v9; // rcx
  __int64 result; // rax
  struct _PRIVILEGE_SET *v11; // rdi
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = *(_QWORD *)(a1 + 6200);
  *(_BYTE *)(a1 + 6021) |= 1u;
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v3 = *(void **)(a1 + 6200);
    if ( v3 )
      ObfDereferenceObject(v3);
  }
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
  v4 = *(_BYTE *)(a1 + 6021);
  if ( (v4 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6472) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6480), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6472), Executive, 0, 0, 0LL);
      ObfDereferenceObject(*(PVOID *)(a1 + 6472));
      v4 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v4 & 4) != 0 )
    {
      v5 = *(struct _KPROCESS **)(a1 + 6568);
      if ( v5 )
      {
        KeStackAttachProcess(v5, &ApcState);
        v4 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v4 & 4) != 0 && *(_QWORD *)(a1 + 6552) )
      {
        v11 = *(struct _PRIVILEGE_SET **)(a1 + 6552);
        if ( *(_QWORD *)&v11->PrivilegeCount )
          RtlpSysVolFree();
        CmSiFreeMemory(v11);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
  KeLeaveCriticalRegion();
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 && *(_QWORD *)(a1 + 6568) )
    KeUnstackDetachProcess(&ApcState);
  v7 = *(_BYTE *)(a1 + 6020);
  if ( v7 )
  {
    if ( v7 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v8 = *(struct _PRIVILEGE_SET **)(a1 + 6216);
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      v9 = *(struct _PRIVILEGE_SET **)(a1 + 6224);
      if ( v9 )
        CmSiFreeMemory(v9);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6352);
    }
    if ( v8 )
      CmSiFreeMemory(v8);
  }
  result = SmFpCleanup(a1 + 6592);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 1);
  return result;
}
