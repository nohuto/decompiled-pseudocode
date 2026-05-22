/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18005B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180008EA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x18005AC54 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_64a1b3f60083f412cbdb681d3efb1364_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  MPCHeadUpdateListener *v4; // rcx
  __int64 result; // rax
  void *v6; // rbx
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  try
  {
    v2 = operator new(0xC8uLL);
    memset_0(v2, 0, 0xC8uLL);
    *v2 = 1LL;
    *((_DWORD *)v2 + 2) = 0;
    v7[0] = v2 + 2;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[2] = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
              v3,
              0LL,
              0LL);
    v2[4] = 0LL;
    v2[5] = 0LL;
    v2[6] = 0LL;
    *((_DWORD *)v2 + 2) = 1065353216;
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      v2 + 1,
      8LL);
    v2[9] = 0LL;
    v2[10] = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 19), 0, 0);
    *((_WORD *)v2 + 96) = 0;
    *((_BYTE *)v2 + 194) = 0;
    *((_DWORD *)v2 + 49) = 0;
    MPCHeadUpdateListener::s_instance = (MPCHeadUpdateListener *)v2;
    MPCHeadUpdateListener::Initialize(v4);
    result = 1LL;
  }
  catch ( ... )
  {
    v6 = *a2;
    __ExceptionPtrCreate(v7);
    __ExceptionPtrCurrentException(v7);
    __ExceptionPtrAssign(v6, v7);
    __ExceptionPtrDestroy(v7);
    return 0LL;
  }
  return result;
}
