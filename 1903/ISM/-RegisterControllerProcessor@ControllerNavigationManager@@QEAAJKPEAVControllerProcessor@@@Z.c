/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x1800738B8
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18007615C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005C40 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Micro.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@AEBW4GamepadButtons@Input@Gaming@Windows@@@Z @ 0x1800064C0 (-lower_bound@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W.c)
 *     ??$emplace@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@Z @ 0x18001130C (--$emplace@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@-$_Hash@V-$_Umap_traits@W4GamepadButto.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEAKAEAPEAVControllerProcessor@@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAPEAVControllerProcessor@@@Z @ 0x1800720CC (--$emplace@AEAKAEAPEAVControllerProcessor@@@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800767BC (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x180076824 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078AFC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  bool v4; // r15
  __int64 v5; // rcx
  __int16 v6; // bx
  int v7; // ecx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct tagRECT v10; // xmm6
  struct tagPOINT *v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rsi
  unsigned int v14; // edi
  struct tagRECT v15; // xmm6
  struct tagPOINT *v16; // rax
  struct tagRECT v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int64 *v20; // [rsp+90h] [rbp+30h] BYREF
  int v21; // [rsp+98h] [rbp+38h] BYREF
  ControllerProcessor *v22; // [rsp+A0h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+48h] BYREF

  v22 = a3;
  v21 = a2;
  v19 = -2LL;
  v4 = *((_QWORD *)this + 10) == 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::emplace<unsigned long &,ControllerProcessor * &>(
    (__int64)this + 64,
    (__int64)&v18,
    &v21,
    &v22);
  v23 = 8;
  v6 = 196;
  if ( !*((_BYTE *)this + 228) )
    v6 = 27;
  LOWORD(v20) = v6;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::lower_bound(
    v5,
    (__int64 **)&v18,
    (unsigned __int8 *)&v23);
  if ( *(_QWORD *)&v18.left == qword_1801E1508 )
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::emplace<enum Windows::Gaming::Input::GamepadButtons const &,unsigned short &>(
      v7,
      (__int64)&v18,
      (int)&v23,
      (__int64)&v20);
  else
    *(_WORD *)(*(_QWORD *)&v18.left + 20LL) = v6;
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 32LL))(v8 + 8) )
    {
      ControllerProcessor::UpdateNavigationState(v22, 1LL, 0LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 40LL))(*((_QWORD *)this + 24) + 8LL);
      v10 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 48LL))(*((_QWORD *)this + 24) + 8LL);
      v11 = (struct tagPOINT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 56LL))(*((_QWORD *)this + 24) + 8LL);
      v18 = v10;
      ControllerProcessor::NavigationResume(v22, v9, &v18, *v11);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::lower_bound(
    (_QWORD *)this + 16,
    &v20,
    (unsigned __int8 *)this + 224);
  if ( v20 != *((__int64 **)this + 17) )
  {
    v20 = (__int64 *)v20[3];
    v12 = v20;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v20);
    v13 = v12 + 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v12[1] + 32))(v12 + 1) )
    {
      v14 = (*(__int64 (__fastcall **)(__int64 *))(*v13 + 40))(v12 + 1);
      v15 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64 *))(*v13 + 48))(v12 + 1);
      v16 = (struct tagPOINT *)(*(__int64 (__fastcall **)(__int64 *))(*v13 + 56))(v12 + 1);
      v18 = v15;
      ControllerProcessor::NavigationEnable(v22, v14, &v18, *v16, 1, v4);
    }
    else
    {
      ControllerProcessor::UpdateNavigationState(v22, 2LL, 0LL);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
  }
  return 0LL;
}
