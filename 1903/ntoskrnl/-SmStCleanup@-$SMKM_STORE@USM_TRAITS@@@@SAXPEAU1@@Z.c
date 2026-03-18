/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140106174
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1401045B0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1406B3984 (SmProcessCreateRequest.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105264 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105628 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105F14 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x140106120 (SmFpCleanup.c)
 *     SmKmStoreHelperCleanup @ 0x140106378 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x140106444 (SmKmStoreHelperCheckWaitCommand.c)
 *     SmAcquireReleaseCharges @ 0x140107B54 (SmAcquireReleaseCharges.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 *     SmKmFileInfoCleanup @ 0x1408E9864 (SmKmFileInfoCleanup.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  char v4; // al
  struct _KPROCESS *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v7; // al
  struct _PRIVILEGE_SET *v8; // rdi
  struct _PRIVILEGE_SET *v9; // rcx
  struct _PRIVILEGE_SET *v10; // rdi
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
        v10 = *(struct _PRIVILEGE_SET **)(a1 + 6552);
        if ( *(_QWORD *)&v10->PrivilegeCount )
          RtlpSysVolFree();
        CmSiFreeMemory(v10);
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
  SmFpCleanup(a1 + 6592);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1LL, 1LL);
}
