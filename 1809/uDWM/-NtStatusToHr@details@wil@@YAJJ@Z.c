/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002444
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180001290 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18008C4DC (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
  if ( !result )
    return v1 | 0x10000000;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
