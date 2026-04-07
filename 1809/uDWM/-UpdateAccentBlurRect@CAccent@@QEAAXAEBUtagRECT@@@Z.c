/*
 * XREFs of ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180085B18
 * Callers:
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x18008D148 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180031E30 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x18004BB60 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAccent::UpdateAccentBlurRect(CBaseObject **this, const struct tagRECT *a2)
{
  LONG left; // eax
  CBaseObject *v3; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v7; // [rsp+38h] [rbp+10h] BYREF

  left = a2->left;
  v3 = 0LL;
  v7 = 0LL;
  if ( a2->right > left && a2->bottom > a2->top )
  {
    v5 = ResourceHelper::CreateRectangleGeometry(a2, &v7);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x301,
        (__int64)"windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v5);
      v3 = v7;
      goto LABEL_7;
    }
    v3 = v7;
  }
  CAccent::SetClipRegion(this, v3);
LABEL_7:
  if ( v3 )
    CBaseObject::Release(v3);
}
