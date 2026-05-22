/*
 * XREFs of _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch$125 @ 0x18003BCD0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18005007C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

void *__fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch_125(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL);
  if ( v2 != (unsigned int)wil::details::NtStatusToHr((wil::details *)0xC0000008LL, a2) )
    throw;
  return &loc_180046D7B;
}
