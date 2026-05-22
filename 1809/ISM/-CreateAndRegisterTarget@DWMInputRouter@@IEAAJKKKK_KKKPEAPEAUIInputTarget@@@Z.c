/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180089880
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180089100 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18008A33C (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18008B834 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x18008E0D4 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 *     ?Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800907A0 (-Create@DWMLegacyInputTarget@@SAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

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
  __int64 **v9; // rcx
  __int64 *i; // rax
  struct IInputTarget *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v9; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v9 )
    {
      v13 = 0LL;
      goto LABEL_6;
    }
    if ( *((_DWORD *)i + 4) == a2 )
      break;
  }
  v13 = (struct IInputTarget *)i[7];
LABEL_6:
  if ( v13 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = DWMFocusedInputTarget::Create(v13, a3, a4, a5, a6, a7, a8, a9);
    if ( v14 >= 0 )
      goto LABEL_13;
    v15 = 840LL;
  }
  else
  {
    v14 = DWMLegacyInputTarget::Create(a2, a3, a4, a5, a6, a7, a8, a9);
    if ( v14 >= 0 )
      return 0LL;
    v15 = 852LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v14);
LABEL_13:
  if ( v13 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
