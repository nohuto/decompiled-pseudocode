/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C2EE0
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800182B0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180055400 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C3874 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x1800C3558 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x1800C5D18 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 *     ?Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C74B0 (-Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8,
        struct IInputTarget **a9)
{
  struct IInputTarget *InputHostTargetForProcessId; // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 v17[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v17[1] = -2LL;
  InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, a2);
  v17[0] = (__int64)InputHostTargetForProcessId;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v17);
  if ( InputHostTargetForProcessId )
  {
    v13 = DWMFocusedInputTarget::Create(InputHostTargetForProcessId, a3, a4, a5, a6, a7, a8, a9);
    v14 = retaddr;
    if ( v13 >= 0 )
      goto LABEL_7;
    v15 = 908LL;
  }
  else
  {
    v13 = DWMLegacyInputTarget::Create(a2, a3, a4, a5, a6, a7, a8, a9);
    v14 = retaddr;
    if ( v13 >= 0 )
      goto LABEL_7;
    v15 = 920LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v14,
    v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v13);
LABEL_7:
  if ( InputHostTargetForProcessId )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)InputHostTargetForProcessId + 16LL))(InputHostTargetForProcessId);
  return 0LL;
}
