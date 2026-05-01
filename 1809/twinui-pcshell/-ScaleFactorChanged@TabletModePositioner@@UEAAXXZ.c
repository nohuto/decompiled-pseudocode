/*
 * XREFs of ?ScaleFactorChanged@TabletModePositioner@@UEAAXXZ @ 0x18034A430
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x180348A8C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall TabletModePositioner::ScaleFactorChanged(IUnknown *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TabletModePositioner::LayoutEnvironmentChanged(this - 14);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      643LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v1);
}
