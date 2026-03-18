/*
 * XREFs of _InitPwSB @ 0x1C0038CEC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     CalcSBStuff @ 0x1C0038D48 (CalcSBStuff.c)
 *     xxxSetScrollBar @ 0x1C00D9304 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D997C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxShowScrollBar @ 0x1C00FAB0C (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C005E320 (DesktopAlloc.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C00D9B54 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = (__int64 *)(a1 + 128);
  result = *(_QWORD *)(a1 + 128);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 36LL, 6LL);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v1, v3);
    result = *v1;
    if ( *v1 )
    {
      *(_DWORD *)(result + 24) = 100;
      *(_DWORD *)(*v1 + 8) = 100;
      return *v1;
    }
  }
  return result;
}
