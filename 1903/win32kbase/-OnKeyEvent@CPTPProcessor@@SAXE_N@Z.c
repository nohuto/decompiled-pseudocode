/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C017B354
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C017AD58 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C017B410 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(unsigned __int8 a1, char a2)
{
  int v4; // ebx

  _InterlockedExchange64(&qword_1C0218D60, KeQueryPerformanceCounter(0LL).QuadPart);
  v4 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C0214330) & 0x40) != 0
    || (BYTE7(xmmword_1C0214330) & 1) != 0 )
  {
    if ( !dword_1C0218D6C )
    {
      _InterlockedExchange64(&qword_1C0218D50, 0LL);
      _InterlockedExchange64(&qword_1C0218D58, 0LL);
      _InterlockedExchange64(&qword_1C0219040, 0LL);
      _InterlockedExchange64(&qword_1C0219048, 0LL);
    }
  }
  else
  {
    v4 = 0;
    if ( CPTPProcessor::IsOurKey(a1, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C0218D6C = v4;
}
