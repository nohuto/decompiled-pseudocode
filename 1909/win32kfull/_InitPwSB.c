/*
 * XREFs of _InitPwSB @ 0x1C004B6A4
 * Callers:
 *     xxxSetScrollBar @ 0x1C002DBFC (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C002E2D4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxShowScrollBar @ 0x1C00F6D14 (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0029280 (DesktopAlloc.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C0101364 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax
  PVOID v4; // rax

  v1 = a1 + 152;
  v2 = 0LL;
  result = *(_QWORD *)(a1 + 152);
  if ( !result )
  {
    v4 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x24u);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v1, v4);
    if ( *(_QWORD *)v1 )
    {
      *(_DWORD *)(*(_QWORD *)v1 + 24LL) = 100;
      *(_DWORD *)(*(_QWORD *)v1 + 8LL) = 100;
      return *(_QWORD *)v1;
    }
    return v2;
  }
  return result;
}
