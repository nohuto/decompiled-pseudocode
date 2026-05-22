/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x180032D9C
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180032C90 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x18000C4B4 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@@Z @ 0x180025FFC (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180032CE8 (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180036504 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800B8888 (--1ManipulationInjector@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerProcessor::~ControllerProcessor(ControllerProcessor *this)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  _QWORD **v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  int v10; // r15d
  struct ControllerNavigationManager *ControllerNavigationManager; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 j; // rdx
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r8
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD **v20; // rdx
  _QWORD **v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  _QWORD *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v40; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 6) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 430) != 2 )
    ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL);
  v2 = (__int64 **)*((_QWORD *)this + 8);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, *((_WORD *)i + 8), 0);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA59,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_66;
    }
  }
  if ( *((_QWORD *)this + 9) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 216) + 96LL))(*((_QWORD *)this + 216));
    v6 = retaddr;
    if ( v5 < 0 )
    {
LABEL_66:
      wil::details::in1diag3::FailFast_Hr(
        v6,
        (void *)0xA5E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x18003323CLL);
    }
  }
  v7 = (_QWORD **)*((_QWORD *)this + 8);
  v8 = *v7;
  *v7 = v7;
  *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
  if ( v8 != *((_QWORD **)this + 8) )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      operator delete(v8, (const struct std::nothrow_t *)0x18);
      v8 = v9;
    }
    while ( v9 != *((_QWORD **)this + 8) );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 7,
    8LL);
  v10 = **((_DWORD **)this + 4);
  LODWORD(v40) = v10;
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v12 = (_QWORD *)((char *)ControllerNavigationManager + 64);
  v13 = 0xCBF29CE484222325uLL;
  for ( j = 0LL; j < 4; ++j )
    v13 = 0x100000001B3LL * (*((unsigned __int8 *)&v40 + j) ^ (unsigned __int64)v13);
  v15 = v13 & *((_QWORD *)ControllerNavigationManager + 14);
  v16 = 2 * (v13 & v12[6]);
  v17 = v12[3];
  v18 = *(_QWORD **)(v17 + 16 * (v13 & v12[6]));
  v19 = 2 * v15;
  v20 = (_QWORD **)v12[1];
  v21 = *(_QWORD ***)(v17 + 16 * v15);
  while ( 1 )
  {
    if ( v21 == v20 )
      v22 = (_QWORD *)v12[1];
    else
      v22 = **(_QWORD ***)(v17 + 8 * v19 + 8);
    if ( v18 == v22 )
      goto LABEL_28;
    if ( *((_DWORD *)v18 + 4) == v10 )
      break;
    v18 = (_QWORD *)*v18;
  }
  v23 = v18;
  v24 = v18;
  while ( 1 )
  {
    v25 = v21 == v20 ? (_QWORD *)v12[1] : **(_QWORD ***)(v17 + 8 * v16 + 8);
    if ( v18 == v25 || v10 != *((_DWORD *)v18 + 4) )
      break;
    v18 = (_QWORD *)*v18;
  }
  if ( v23 == v18 )
  {
LABEL_28:
    v24 = (_QWORD *)v12[1];
    v18 = v24;
  }
  v40 = v24;
  v26 = *v20;
  if ( v24 == *v20 && v18 == v20 )
  {
    *v20 = v20;
    *(_QWORD *)(v12[1] + 8LL) = v12[1];
    v12[2] = 0LL;
    if ( v26 != (_QWORD *)v12[1] )
    {
      do
      {
        v27 = (_QWORD *)*v26;
        operator delete(v26, (const struct std::nothrow_t *)0x20);
        v26 = v27;
      }
      while ( v27 != (_QWORD *)v12[1] );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      v12,
      8LL);
  }
  else
  {
    while ( v24 != v18 )
    {
      v28 = v24;
      v24 = (_QWORD *)*v24;
      std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase(
        v12,
        &v40,
        v28);
    }
  }
  v29 = *((_QWORD *)this + 869);
  if ( v29 )
  {
    *((_QWORD *)this + 869) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = *((_QWORD *)this + 868);
  if ( v30 )
  {
    *((_QWORD *)this + 868) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = *((_QWORD *)this + 867);
  if ( v31 )
  {
    *((_QWORD *)this + 867) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = *((_QWORD *)this + 866);
  if ( v32 )
  {
    *((_QWORD *)this + 866) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = *((_QWORD *)this + 859);
  if ( v33 )
  {
    *((_QWORD *)this + 859) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = *((_QWORD *)this + 858);
  if ( v34 )
  {
    *((_QWORD *)this + 858) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = *((_QWORD *)this + 836);
  if ( v35 )
  {
    *((_QWORD *)this + 836) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( *((_BYTE *)this + 6680) )
    *((_BYTE *)this + 6680) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 711) + 56LL))(
                                *((_QWORD *)this + 711),
                                (char *)this + 5696) < 0;
  if ( *((_BYTE *)this + 5680) )
    *((_BYTE *)this + 5680) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 586) + 56LL))(
                                *((_QWORD *)this + 586),
                                (char *)this + 4696) < 0;
  if ( *((_BYTE *)this + 4680) )
    *((_BYTE *)this + 4680) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 461) + 56LL))(
                                *((_QWORD *)this + 461),
                                (char *)this + 3696) < 0;
  if ( *((_BYTE *)this + 3680) )
    *((_BYTE *)this + 3680) = (*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 336) + 56LL))(
                                *((_QWORD *)this + 336),
                                (char *)this + 2696) < 0;
  ManipulationInjector::~ManipulationInjector((ControllerProcessor *)((char *)this + 1872));
  v36 = *((_QWORD *)this + 219);
  if ( v36 )
  {
    *((_QWORD *)this + 219) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = *((_QWORD *)this + 217);
  if ( v37 )
  {
    *((_QWORD *)this + 217) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = *((_QWORD *)this + 216);
  if ( v38 )
  {
    *((_QWORD *)this + 216) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>((_QWORD *)this + 7);
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
