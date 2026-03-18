/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0183240
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionGetActiveHKL @ 0x1C00923C0 (ApiSetEditionGetActiveHKL.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 */

void __fastcall RemoteSyncToggleKeys(int a1)
{
  unsigned int v1; // ecx
  int v2; // ebx
  _QWORD v3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v4; // [rsp+40h] [rbp-20h]

  v1 = a1 | 0x8000;
  v3[0] = 0LL;
  v4 = 0LL;
  gSetLedReceived = v1;
  v3[1] = 0LL;
  if ( gpqForeground )
  {
    v2 = (v1 >> 14) & 1;
    if ( ((v1 & 4) == 0) != ((~byte_1C02112C5 & 2) != 0) )
    {
      WORD1(v3[0]) = 20;
      LOBYTE(v3[0]) = 58;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32748;
      LOBYTE(v3[0]) = 58;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
    }
    if ( ((gSetLedReceived & 2) == 0) != ((~byte_1C02112E4 & 2) != 0) )
    {
      WORD1(v3[0]) = 144;
      LOBYTE(v3[0]) = 69;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32624;
      LOBYTE(v3[0]) = 69;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
    }
    if ( ((gSetLedReceived & 1) == 0) != ((~byte_1C02112E4 & 8) != 0) )
    {
      WORD1(v3[0]) = 145;
      LOBYTE(v3[0]) = 70;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32623;
      LOBYTE(v3[0]) = 70;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
    }
    if ( (ApiSetEditionGetActiveHKL() & 0x3FF) == 0x11 && ((gSetLedReceived & 8) == 0) != ((~byte_1C02112C5 & 8) != 0) )
    {
      WORD1(v3[0]) = 21;
      LOBYTE(v3[0]) = 112;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32747;
      LOBYTE(v3[0]) = 112;
      xxxProcessKeyEvent((unsigned int)v3, 0, v2, 0, 0LL, 0LL);
    }
    gSetLedReceived = 0;
  }
}
