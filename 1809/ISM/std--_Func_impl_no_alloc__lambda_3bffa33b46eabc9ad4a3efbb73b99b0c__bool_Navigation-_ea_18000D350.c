/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView_____ptr64_::_Do_call @ 0x18000D350
 * Callers:
 *     <none>
 * Callees:
 *     ?FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x18000CEC4 (-FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView_____ptr64_::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  bool v4; // bl
  _QWORD v6[10]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v7; // [rsp+80h] [rbp+8h] BYREF

  v2 = *a2;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v6[0] = off_180138668;
  v6[1] = v3;
  v6[7] = v6;
  v4 = (int)ViewHelper::FindWindowW(v2, (__int64)v6, &v7) >= 0;
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
  return v4;
}
