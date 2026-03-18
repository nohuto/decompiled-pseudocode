/*
 * XREFs of ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C0152A6C
 * Callers:
 *     xxxKELocaleProcs @ 0x1C0036DC0 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 */

__int64 __fastcall xxxShiftLock(struct tagKE *a1)
{
  CAsyncKeyEventMonitor *v2; // rcx

  v2 = (CAsyncKeyEventMonitor *)*((unsigned __int16 *)a1 + 1);
  if ( (__int16)v2 >= 0 )
  {
    if ( (unsigned __int8)v2 == 20 )
    {
      if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
        return 0LL;
    }
    else if ( ((unsigned __int8)v2 == 16 || (unsigned __int16)((unsigned __int8)v2 - 160) <= 1u)
           && (BYTE5(gafAsyncKeyState) & 2) != 0 )
    {
      xxxKeyEvent(v2, *(unsigned __int8 *)a1, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
      xxxKeyEvent((CAsyncKeyEventMonitor *)0x14, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
      xxxKeyEvent((CAsyncKeyEventMonitor *)0x8014, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
      return 0LL;
    }
  }
  return 1LL;
}
