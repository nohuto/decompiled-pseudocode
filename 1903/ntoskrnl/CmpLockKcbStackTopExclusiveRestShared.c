/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x14063A3C0
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  int v1; // edx
  __int16 v2; // si
  __int64 v4; // rax
  __int64 KcbAtLayerHeight; // rbx

  v1 = *(__int16 *)(a1 + 2);
  v2 = 0;
  if ( v1 - 1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
      ExAcquirePushLockSharedEx(KcbAtLayerHeight + 48, 0LL);
      _InterlockedAdd((volatile signed __int32 *)(KcbAtLayerHeight + 56), 1u);
      LOWORD(v1) = *(_WORD *)(a1 + 2);
      ++v2;
    }
    while ( v2 <= (__int16)v1 - 1 );
  }
  v4 = CmpGetKcbAtLayerHeight(a1, v1);
  return CmpLockKcbExclusive(v4);
}
