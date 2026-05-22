/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView___::_Do_call @ 0x180058B70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x180058058 (-FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD v5[10]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v6; // [rsp+80h] [rbp+8h] BYREF

  v2 = *a2;
  v6 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v5[0] = off_180173670;
  v5[1] = v3;
  v5[7] = v5;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v6);
  LOBYTE(v2) = (int)ViewHelper::FindWindowW(v2, (__int64)v5, &v6) >= 0;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v6);
  return v2;
}
