/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000AC40
 * Callers:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18000AC98 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18002D9D4 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x180069D00 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800A0CF0 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 *     ?GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800A0E60 (-GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 *     _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch$2 @ 0x18012E94D (_InputSiteManager--GetInputSiteListFromDITCallbackStruct_--_1_--catch$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  __int64 result; // rax
  int v3; // ecx

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0LL;
  if ( (_DWORD)this == -1073741801 )
    return 2147942414LL;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000u;
  v3 = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb((int)this);
  if ( !v3 )
    return v1 | 0x10000000u;
  result = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    return (unsigned int)v3;
  return result;
}
