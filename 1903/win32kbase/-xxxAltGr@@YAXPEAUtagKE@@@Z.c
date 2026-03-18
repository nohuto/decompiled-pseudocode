/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C0186914
 * Callers:
 *     xxxKELocaleProcs @ 0x1C0094710 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1)
{
  __int16 v2; // cx
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // cx

  v2 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v2 == 0xA5 )
  {
    v3 = *((_WORD *)a1 + 8) + 3;
    if ( v2 < 0 )
    {
      gbAltGrDown = 0;
      if ( (byte_1C02142E8 & 0x10) != 0 )
        return;
      v4 = -32606;
    }
    else
    {
      if ( (byte_1C02142C4 & 4) != 0 )
        return;
      gbAltGrDown = 1;
      v4 = 162;
    }
    xxxKeyEventEx(v4, 541, *((_DWORD *)a1 + 1), 0LL, 0LL, (__int16 *)a1 + 8, v3 <= 1u, 0, 0LL, 0LL);
  }
}
