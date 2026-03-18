/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C014B38C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C014ADB4 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C014B448 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(unsigned __int8 a1, char a2)
{
  int v4; // ebx

  _InterlockedExchange64(&qword_1C01D1470, KeQueryPerformanceCounter(0LL).QuadPart);
  v4 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C01CC680) & 0x40) != 0
    || (BYTE7(xmmword_1C01CC680) & 1) != 0 )
  {
    if ( !dword_1C01D147C )
    {
      _InterlockedExchange64(&qword_1C01D1460, 0LL);
      _InterlockedExchange64(&qword_1C01D1468, 0LL);
      _InterlockedExchange64(&qword_1C01D1630, 0LL);
      _InterlockedExchange64(&qword_1C01D1638, 0LL);
    }
  }
  else
  {
    v4 = 0;
    if ( CPTPProcessor::IsOurKey(a1, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C01D147C = v4;
}
