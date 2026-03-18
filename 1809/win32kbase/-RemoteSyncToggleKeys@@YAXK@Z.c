/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0151FE4
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01524E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C0036308 (ApiSetEditionGetActiveHKL.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  unsigned __int16 v3; // [rsp+30h] [rbp-30h] BYREF
  __int16 v4; // [rsp+32h] [rbp-2Eh]
  __int64 v5; // [rsp+38h] [rbp-28h]

  v5 = 0LL;
  v1 = a1 | 0x8000;
  gSetLedReceived = v1;
  if ( gpqForeground )
  {
    v2 = (v1 >> 14) & 1;
    if ( ((v1 & 4) == 0) != ((~byte_1C01CC615 & 2) != 0) )
    {
      LOBYTE(v3) = 58;
      v4 = 20;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
      LOBYTE(v3) = 58;
      v4 = -32748;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
    }
    if ( ((gSetLedReceived & 2) == 0) != ((~byte_1C01CC634 & 2) != 0) )
    {
      LOBYTE(v3) = 69;
      v4 = 144;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
      LOBYTE(v3) = 69;
      v4 = -32624;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
    }
    if ( ((gSetLedReceived & 1) == 0) != ((~byte_1C01CC634 & 8) != 0) )
    {
      LOBYTE(v3) = 70;
      v4 = 145;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
      LOBYTE(v3) = 70;
      v4 = -32623;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
    }
    if ( (ApiSetEditionGetActiveHKL() & 0x3FF) == 0x11 && ((gSetLedReceived & 8) == 0) != ((~byte_1C01CC615 & 8) != 0) )
    {
      LOBYTE(v3) = 112;
      v4 = 21;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
      LOBYTE(v3) = 112;
      v4 = -32747;
      xxxProcessKeyEvent(&v3, 0LL, v2, 0, 0LL);
    }
    gSetLedReceived = 0;
  }
}
