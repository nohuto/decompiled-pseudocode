/*
 * XREFs of ?ProcessEnableRemoteSuperWet@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_ENABLEREMOTESUPERWET@@@Z @ 0x1801C3ED4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180167F50 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z @ 0x1801C80B8 (-EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CVisual::ProcessEnableRemoteSuperWet(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_ENABLEREMOTESUPERWET *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 32);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 39LL) )
    {
      v6 = CCompositionSurfaceBitmap::EnableRemoteSuperWet(
             *((CCompositionSurfaceBitmap **)this + 32),
             *((_BYTE *)a3 + 8) != 0);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEFC,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
