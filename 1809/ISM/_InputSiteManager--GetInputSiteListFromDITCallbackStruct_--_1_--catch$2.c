/*
 * XREFs of _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch$2 @ 0x18012E94D
 * Callers:
 *     <none>
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000AC40 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void *__fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch_2(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL);
  if ( v2 != (unsigned int)wil::details::NtStatusToHr((wil::details *)0xC0000008LL) )
    throw;
  return &loc_18001DC0D;
}
