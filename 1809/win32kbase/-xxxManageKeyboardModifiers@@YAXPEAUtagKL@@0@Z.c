/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C014E400
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0063AA0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C014E300 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2)
{
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rbx
  __int64 v6; // rax
  unsigned __int8 v7[32]; // [rsp+50h] [rbp-48h] BYREF

  v2 = gptiCurrent;
  v3 = 0LL;
  if ( *((_QWORD *)gptiCurrent + 54) )
  {
    if ( a1 )
    {
      memset(v7, 0, sizeof(v7));
      xxxAdjustPushStateForKL(gptiCurrent, v7, a1, a1, a2);
      xxxAdjustPushStateForKL(v2, v7, a2, a1, a2);
      v6 = *((_QWORD *)a1 + 6);
      if ( v6 && (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 80LL) & 1) != 0 && (byte_1C01CC614 & 4) == 0 )
        xxxKeyEvent((CAsyncKeyEventMonitor *)0x80A2, 0x21Du, 0, 0LL, 0LL, 0LL, 0, 0, 0LL);
    }
    else
    {
      do
      {
        *(_BYTE *)(v3 + *((_QWORD *)v2 + 54) + 228) &= 0xAAu;
        *((_BYTE *)&gafAsyncKeyState + v3) &= 0xAAu;
        gafRawKeyState[v3++] &= 0xAAu;
      }
      while ( v3 < 64 );
    }
  }
}
