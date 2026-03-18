/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1405CF478
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A38 (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140805600 (CmpPromoteKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     CmpLockKcbExclusive @ 0x1405D1728 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D8AC0 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  __int16 i; // si
  __int64 v3; // rax
  __int64 KcbAtLayerHeight; // rbx

  for ( i = 0; i <= *(__int16 *)(a1 + 2) - 1; ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    ExAcquirePushLockSharedEx(KcbAtLayerHeight + 40, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(KcbAtLayerHeight + 48), 1u);
  }
  v3 = CmpGetKcbAtLayerHeight(a1);
  return CmpLockKcbExclusive(v3);
}
