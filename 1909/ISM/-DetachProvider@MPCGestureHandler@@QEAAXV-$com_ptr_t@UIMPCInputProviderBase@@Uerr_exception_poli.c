/*
 * XREFs of ?DetachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D368
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085DDC (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ @ 0x180091210 (-ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800E7858 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::DetachProvider(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rsi
  __int64 *v5; // r15
  __int64 v6; // rbx
  bool v7; // di
  const char *v8; // r9
  unsigned int v9; // eax
  const char *v10; // r9
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v18; // [rsp+68h] [rbp+10h]
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v18 = a2;
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v17, *a2);
  v4 = *(__int64 **)(a1 + 920);
  v5 = *(__int64 **)(a1 + 928);
  if ( v4 != v5 )
  {
    v6 = v17;
    do
    {
      wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v19, *v4);
      v7 = v19 == v6;
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v19);
      if ( v7 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v17);
  if ( v4 == *(__int64 **)(a1 + 928) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      379LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 80LL))(*a2);
  ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 80), v9);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v10);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    MPCSpatialGestureRecognizerHandler::ResetGestureState(*(MPCSpatialGestureRecognizerHandler **)(a1 + 904));
  v11 = *(__int64 **)(a1 + 928);
  v12 = v4 + 1;
  if ( v4 + 1 != v11 )
  {
    do
    {
      v13 = *v12;
      *v12 = 0LL;
      v14 = *(v12 - 1);
      *(v12 - 1) = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      ++v12;
    }
    while ( v12 != v11 );
    v11 = *(__int64 **)(a1 + 928);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v11 - 1);
  *(_QWORD *)(a1 + 928) -= 8LL;
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
