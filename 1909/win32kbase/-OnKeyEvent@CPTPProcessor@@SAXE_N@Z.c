/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C0179164
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C0178B68 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C0179220 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(unsigned __int8 a1, char a2)
{
  int v4; // ebx

  _InterlockedExchange64(&qword_1C0215D60, KeQueryPerformanceCounter(0LL).QuadPart);
  v4 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C0211330) & 0x40) != 0
    || (BYTE7(xmmword_1C0211330) & 1) != 0 )
  {
    if ( !dword_1C0215D6C )
    {
      _InterlockedExchange64(&qword_1C0215D50, 0LL);
      _InterlockedExchange64(&qword_1C0215D58, 0LL);
      _InterlockedExchange64(&qword_1C0216040, 0LL);
      _InterlockedExchange64(&qword_1C0216048, 0LL);
    }
  }
  else
  {
    v4 = 0;
    if ( CPTPProcessor::IsOurKey(a1, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C0215D6C = v4;
}
