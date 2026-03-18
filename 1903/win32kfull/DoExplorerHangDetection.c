/*
 * XREFs of DoExplorerHangDetection @ 0x1C000A230
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01F7BE8 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C000A2C4 (-IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     ?ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEBUtagTHREADINFO@@@Z @ 0x1C023E954 (-ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall DoExplorerHangDetection(struct tagDESKTOP *a1)
{
  const struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  v2 = (const struct tagTHREADINFO *)*((_QWORD *)a1 + 36);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 192LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 16);
  result = IsValidForHangTest(*((const struct tagTHREADINFO **)a1 + 36));
  if ( (_DWORD)result )
  {
    result = IsValidForHangTest((const struct tagTHREADINFO *)v3);
    if ( (_DWORD)result )
    {
      result = IsThreadHung(v2, gdwHungAppTimeout);
      if ( !(_DWORD)result )
      {
        result = IsThreadHung(v3, gdwHungAppTimeout);
        if ( !(_DWORD)result )
          return result;
        v2 = (const struct tagTHREADINFO *)v3;
      }
      if ( v2 )
        return ReportHungExplorerToWer(a1, v2);
    }
  }
  return result;
}
