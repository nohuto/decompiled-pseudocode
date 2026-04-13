/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002240
 * Callers:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003418 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007E7C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // eax
  int v4; // ecx

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0LL;
  if ( (_DWORD)this == -1073741801 )
    return 2147942414LL;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000u;
  v3 = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb((int)this);
  v4 = v3;
  if ( !v3 || v3 == 317 )
    return v1 | 0x10000000u;
  result = (unsigned __int16)v3 | 0x80070000;
  if ( v4 <= 0 )
    return (unsigned int)v4;
  return result;
}
