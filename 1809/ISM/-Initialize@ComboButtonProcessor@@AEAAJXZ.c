/*
 * XREFs of ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1800C5230
 * Callers:
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800C5430 (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800C5BB4 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@XZ @ 0x1800C71AC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$al.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ComboButtonProcessor::Initialize(ComboButtonProcessor *this)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // rdi
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 4,
    *v2);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (char *)malloc(0xD0uLL);
  v9 = v8;
  if ( v8 )
    memset_0(v8, 0, 0xD0uLL);
  if ( v9 )
  {
    memset_0(v9, 0, 0xD0uLL);
    *(_QWORD *)v9 = &RefCountedObject::`vftable';
    *((_DWORD *)v9 + 2) = 1;
    *(_QWORD *)v9 = &ButtonRecognizer::`vftable';
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Buyheadnode(v10);
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_DWORD *)v9 + 18) = 0;
    memset_0(v9 + 80, 0, 0x48uLL);
    *((_QWORD *)v9 + 11) = 0LL;
    *((_QWORD *)v9 + 12) = 0LL;
    *((_QWORD *)v9 + 13) = 0LL;
    *((_QWORD *)v9 + 19) = 0LL;
    *((_QWORD *)v9 + 20) = 0LL;
    *((_QWORD *)v9 + 21) = 0LL;
    *((_QWORD *)v9 + 22) = 0LL;
    *((_QWORD *)v9 + 23) = 0LL;
    *((_QWORD *)v9 + 24) = 0LL;
    *((_QWORD *)v9 + 25) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)0x8007000ELL);
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v12 = ButtonRecognizer::Initialize((ButtonRecognizer *)v9);
  v11 = v12;
  if ( v12 >= 0 )
  {
    *((_QWORD *)this + 6) = v9;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v11 < 0 )
    goto LABEL_18;
  return 0LL;
}
