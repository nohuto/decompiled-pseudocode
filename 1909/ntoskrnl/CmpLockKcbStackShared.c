/*
 * XREFs of CmpLockKcbStackShared @ 0x1405F93E0
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406608E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x140662610 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmCallbackGetKeyObjectID @ 0x140824E80 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14082750C (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408277E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
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
