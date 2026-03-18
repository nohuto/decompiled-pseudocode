/*
 * XREFs of CmRmFinalizeRecovery @ 0x14068BDE4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     LOCK_TRANSACTION_LIST @ 0x14063012C (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140630158 (UNLOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrRollback @ 0x1406E36A0 (CmpTransMgrRollback.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  LOCK_TRANSACTION_LIST();
  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v5 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v5[1] = v2;
    UNLOCK_TRANSACTION_LIST();
    CmpTransMgrRollback(v3, v8);
    CmpAttachToRegistryProcess((__int64)v9);
    CmpTransMgrFreeVolatileData((__int64)v3, 8);
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v9);
    if ( v3[7] )
      CmpTransDereferenceTransaction(v3[7]);
    v6 = (void *)v3[9];
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = (void *)v3[10];
    if ( v7 )
      ZwClose(v7);
    ExFreePoolWithTag(v3, 0x72544D43u);
    LOCK_TRANSACTION_LIST();
  }
  UNLOCK_TRANSACTION_LIST();
  return 0LL;
}
