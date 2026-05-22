/*
 * XREFs of ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D3B4
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086124 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18008CA68 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::AttachProvider(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  __int64 *v5; // rsi
  __int64 *v6; // r12
  __int64 v7; // rbx
  bool v8; // di
  const char *v9; // r9
  __int64 *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+10h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  v14 = a2;
  v4 = a1 + 920;
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v13, *a2);
  v5 = *(__int64 **)v4;
  v6 = *(__int64 **)(a1 + 928);
  if ( *(__int64 **)v4 != v6 )
  {
    v7 = v13;
    do
    {
      wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v15, *v5);
      v8 = v15 == v7;
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v15);
      if ( v8 )
        break;
      ++v5;
    }
    while ( v5 != v6 );
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v13);
  v10 = *(__int64 **)(a1 + 928);
  if ( v5 != v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      364LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v9);
    __debugbreak();
  }
  if ( *(__int64 **)(v4 + 16) == v10 )
  {
    std::vector<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &>(
      (__int64 **)v4,
      *(__int64 **)(a1 + 928),
      a2);
  }
  else
  {
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
      *(_QWORD **)(a1 + 928),
      *a2);
    *(_QWORD *)(v4 + 8) += 8LL;
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
