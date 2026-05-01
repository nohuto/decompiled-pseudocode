/*
 * XREFs of _lambda_85dc0b02ea67790b24aa07b0e8892dc0_::operator() @ 0x1801A7704
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_85dc0b02ea67790b24aa07b0e8892dc0__bool_HMONITOR_____::_Do_call @ 0x1801AAFD0 (std--_Func_impl_no_alloc__lambda_85dc0b02ea67790b24aa07b0e8892dc0__bool_HMONITOR_____--_Do_call.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 */

bool __fastcall lambda_85dc0b02ea67790b24aa07b0e8892dc0_::operator()(__int64 a1, HMONITOR a2)
{
  BOOL MonitorInfoW; // eax
  char v5; // bl
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-88h] BYREF
  WCHAR String1[36]; // [rsp+58h] [rbp-60h] BYREF

  memset_0(&mi, 0, 0x68uLL);
  mi.cbSize = 104;
  MonitorInfoW = GetMonitorInfoW(a2, &mi);
  v5 = 0;
  if ( MonitorInfoW )
    return CompareStringOrdinal(String1, 32, (LPCWCH)(*(_QWORD *)a1 + 4LL), 32, 0) == 2;
  return v5;
}
