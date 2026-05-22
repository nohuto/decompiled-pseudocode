/*
 * XREFs of ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800BCF24
 * Callers:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x1800BBA40 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800BD010 (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800BD1B8 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@_N@Z @ 0x1800BD3C4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x1800BDB50 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BDF54 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x1800BE2E0 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEBA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@V12@@2@AEBUCursorId@@@Z @ 0x180012028 (-equal_range@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Win32kInterop::IsDeviceAttached(Win32kInterop *this, unsigned int a2, char a3)
{
  __int64 *v6; // rax
  __int64 v7; // r9
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 *v12[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+28h] BYREF
  char v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = a2;
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::equal_range(
    (_QWORD *)this + 8,
    v12,
    (unsigned __int8 *)&v15);
  v6 = v12[0];
  v7 = 0LL;
  while ( v6 != v12[1] )
  {
    ++v7;
    v6 = (__int64 *)*v6;
  }
  if ( !v7 )
  {
    if ( !a3 )
      return 0;
    v14 = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
    v9 = **v8;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v14);
    v10 = v9(v8, &GUID_b9402cea_5976_45e1_baa3_22754843b1af, &v14);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        281LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 24LL))(v14, a2, &v16) < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v14);
      return 0;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v14);
  }
  return 1;
}
