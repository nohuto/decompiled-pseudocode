/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1406CAF54
 * Callers:
 *     HvHiveStartFileBacked @ 0x1405A4A3C (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405A6F70 (CmpReorganizeHive.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     CmpCreateHiveRootCell @ 0x14075BBB8 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x1407EC8D4 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x1407ED310 (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x1407F5844 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407F5A94 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14008CD54 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1406CAFC4 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 191) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4176) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 191) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4176) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0LL, (__int64)&v3, 0);
  }
}
