/*
 * XREFs of ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180097234
 * Callers:
 *     ?OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800965F0 (-OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x18009702C (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 *     ?RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ @ 0x180097184 (-RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x180097278 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 */

__int64 __fastcall SystemCursorShape::SetVisible(SystemCursorShape *this, char a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 8) == a2 )
    return 0LL;
  *((_BYTE *)this + 8) = a2;
  v2 = SystemCursorShape::FeedAnimationData(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x218,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
