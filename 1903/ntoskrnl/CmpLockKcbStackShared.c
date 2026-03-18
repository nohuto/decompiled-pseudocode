/*
 * XREFs of CmpLockKcbStackShared @ 0x1405F8390
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14064CB80 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x14064F450 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmCallbackGetKeyObjectID @ 0x140825780 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140827E0C (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408280E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbStackShared(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rdi
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = ExAcquirePushLockSharedEx(v3 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 56));
  }
  return result;
}
