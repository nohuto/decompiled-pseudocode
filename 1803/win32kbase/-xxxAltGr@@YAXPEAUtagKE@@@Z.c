/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01306F0
 * Callers:
 *     xxxKELocaleProcs @ 0x1C006724C (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1)
{
  __int16 v1; // dx
  __int64 v3; // rcx

  v1 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v1 == 0xA5 )
  {
    if ( v1 < 0 )
    {
      gbAltGrDown = 0;
      if ( (byte_1C01A09E8 & 0x10) != 0 )
        return;
      v3 = 32930LL;
    }
    else
    {
      if ( (byte_1C01A09C4 & 4) != 0 )
        return;
      gbAltGrDown = 1;
      v3 = 162LL;
    }
    xxxKeyEvent((CAsyncKeyEventMonitor *)v3, 0x21Du, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL);
  }
}
