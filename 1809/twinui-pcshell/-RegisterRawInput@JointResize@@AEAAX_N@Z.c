/*
 * XREFs of ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18036AD5C
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x18036A600 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@UEAAXXZ @ 0x18036A720 (-OnArrangedWindowBorderExit@JointResize@@UEAAXXZ.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x18036A850 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::RegisterRawInput(JointResize *this, char a2)
{
  int v4; // edx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 2),
         (const GUID *const)&SID_ImmersiveRawInputProvider,
         &GUID_c1235996_b084_4af2_8663_28f19352097e,
         &ppvOut) >= 0 )
  {
    v4 = *((_DWORD *)this + 105);
    if ( a2 )
    {
      if ( !v4 )
        (*(void (__fastcall **)(void *, JointResize *, __int64, char *))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          this,
          2LL,
          (char *)this + 420);
    }
    else if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 32LL))(ppvOut);
      if ( v5 >= 0 )
        *((_DWORD *)this + 105) = 0;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          478LL,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
}
