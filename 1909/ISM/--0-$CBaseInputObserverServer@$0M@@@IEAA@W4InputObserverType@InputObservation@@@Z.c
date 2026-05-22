/*
 * XREFs of ??0?$CBaseInputObserverServer@$0M@@@IEAA@W4InputObserverType@InputObservation@@@Z @ 0x18001B574
 * Callers:
 *     ??0CInputObserverManager@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800227C8 (--0CInputObserverManager@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18001152C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$allo.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180015168 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z@std@@@Z @ 0x18001B670 (-Initialize@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBaseInputObserverServer<12>::CBaseInputObserverServer<12>(__int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // eax
  _QWORD v5[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v7; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v8; // [rsp+B8h] [rbp+48h]

  *(_QWORD *)a1 = &CBaseInputObserverServer<12>::`vftable';
  *(_DWORD *)(a1 + 8) = 12;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v2 = (_QWORD *)(a1 + 144);
  v8 = a1 + 144;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 152) = std::_List_alloc<std::_List_base_types<std::pair<CursorId const,DWMCursor *>>>::_Buynode0(
                            a1,
                            0LL,
                            0LL);
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v2,
    8LL);
  *(_QWORD *)(a1 + 208) = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v7);
  v3 = CoreUICreate(&v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\baseinputobserverserver.cpp",
      (const char *)(unsigned int)v3,
      -2);
    JUMPOUT(0x180048304LL);
  }
  v5[7] = v5;
  KernelInputConnection<_MIT_BASE_INPUT_OBSERVER_PACKET>::Initialize(
    a1 + 16,
    &v7,
    *(unsigned int *)(a1 + 8),
    v5,
    -2LL,
    off_180173130,
    a1);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v7);
  return a1;
}
