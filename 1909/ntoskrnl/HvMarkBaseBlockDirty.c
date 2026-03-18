/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1406EBEC4
 * Callers:
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     HvHiveStartFileBacked @ 0x14068CE18 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x1408274AC (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x14082E494 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14082E6E4 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140007920 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1406EBF34 (CmpIssueNewDirtyCallback.c)
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
    CmpArmLazyWriter(0, (unsigned __int64 *)&v3, 0);
  }
}
