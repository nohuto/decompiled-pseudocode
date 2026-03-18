/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1406EAC04
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14065EAFC (CmpReorganizeHive.c)
 *     HvHiveStartFileBacked @ 0x14066102C (HvHiveStartFileBacked.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     CmCompressKey @ 0x140827DAC (CmCompressKey.c)
 *     CmFreezeRegistry @ 0x14082E618 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140007890 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1406EAC74 (CmpIssueNewDirtyCallback.c)
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
