/*
 * XREFs of CmpLockKcbStackShared @ 0x140645050
 * Callers:
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CC1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1405CC550 (CmpQueryKeySecurity.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EBE30 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407EE550 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407EE82C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
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
    result = ExAcquirePushLockSharedEx(v3 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 48));
  }
  return result;
}
