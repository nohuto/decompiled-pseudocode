/*
 * XREFs of ??0MPC3DStateHelper@@AEAA@XZ @ 0x18001F358
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180010300 (--$_Callback_once@V-$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D854 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@wil@@CAX_.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@XZ @ 0x18001F4A8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$all.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180059CF0 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=9
MPC3DStateHelper *__fastcall MPC3DStateHelper::MPC3DStateHelper(MPC3DStateHelper *this)
{
  _QWORD *v2; // r14
  wil::details **v3; // r15
  void *v4; // rdx
  wil::details *Event; // rbp
  unsigned int v6; // r8d
  const char *v7; // r9
  wil::details *v8; // rsi
  wil::details **v9; // rsi
  void *v10; // rdx
  unsigned int v11; // r8d
  const char *v12; // r9
  wil::details *v13; // r15
  wil::details *v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  DWORD LastError; // ebx
  void *v21; // rdx
  DWORD v22; // ebx
  void *v23; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v2 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 1LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buyheadnode();
  v3 = (wil::details **)((char *)this + 64);
  *((_QWORD *)this + 8) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
LABEL_14:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v4, v6, v7);
    __debugbreak();
  }
  GetLastError();
  v8 = *v3;
  if ( *v3 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v8, v21);
    SetLastError(LastError);
  }
  *v3 = Event;
  v9 = (wil::details **)((char *)this + 72);
  *((_QWORD *)this + 9) = 0LL;
  v13 = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !v13 )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v10, v11, v12);
    JUMPOUT(0x18001F4A0LL);
  }
  GetLastError();
  v14 = *v9;
  if ( *v9 )
  {
    v22 = GetLastError();
    wil::details::CloseHandle(v14, v23);
    SetLastError(v22);
  }
  *v9 = v13;
  *((_QWORD *)this + 10) = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2);
  v15 = CoreUICreate(v2);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      (const char *)(unsigned int)v15,
      -2);
    __debugbreak();
  }
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x52,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v18);
    goto LABEL_14;
  }
  wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::ReportUsageToService((__int64)retaddr, v16, v17);
  return this;
}
