/*
 * XREFs of ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x1800CDD78
 * Callers:
 *     ?RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ @ 0x1800CD938 (-RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x1800CDB20 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 *     ?SetVisible@SystemCursor@@QEAAJ_N@Z @ 0x1800CDC9C (-SetVisible@SystemCursor@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x1800CD078 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z @ 0x1800CDA3C (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z.c)
 */

__int64 __fastcall SystemCursorShape::SetVisible(SystemCursorShape *this, unsigned __int8 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 8) == a2 )
    return 0LL;
  InputTraceLogging::Cursor::SetCursorImage(*(_QWORD *)this, a2);
  *((_BYTE *)this + 8) = a2;
  v4 = SystemCursorShape::FeedAnimationData(this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x214,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
