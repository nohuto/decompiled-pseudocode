/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18005031C
 * Callers:
 *     _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch$125 @ 0x18003C1E0 (_InputSiteManager--GetInputSiteListFromDITCallbackStruct_--_1_--catch$125.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180050F94 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180055BA8 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     _lambda_c7e76fd1f039da0c9fddfb2989c999ee_::operator() @ 0x1800A5E24 (_lambda_c7e76fd1f039da0c9fddfb2989c999ee_--operator().c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D5C20 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800D6D40 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

signed int __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  signed int result; // eax

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0;
  if ( (_DWORD)this == -1073741801 )
    return -2147024882;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000;
  result = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb((int)this);
  if ( !result || result == 317 )
    return v1 | 0x10000000;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
