/*
 * XREFs of CopyBit @ 0x1C02B78EC
 * Callers:
 *     sbit_GetBitmap @ 0x1C02B9DC0 (sbit_GetBitmap.c)
 * Callees:
 *     <none>
 */

char __fastcall CopyBit(__int64 *a1)
{
  __int16 v2; // cx
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rdx
  unsigned __int16 v6; // r8
  __int64 v7; // rdx

  v2 = *((_WORD *)a1 + 8) * *((_WORD *)a1 + 11);
  LOWORD(v3) = *((_WORD *)a1 + 10);
  v4 = *a1;
  if ( *((_WORD *)a1 + 14) == 1 )
  {
    v5 = v3 & 7;
    v3 = (unsigned __int16)(v2 + ((unsigned __int16)v3 >> 3));
    if ( (*(_BYTE *)(v3 + v4) & byte_1C02EC8C0[2 * v5]) != 0 )
    {
      v6 = *((_WORD *)a1 + 12);
      LOBYTE(v3) = byte_1C02EC8C0[2 * (v6 & 7)];
      v7 = (unsigned __int16)((v6 >> 3) + *((_WORD *)a1 + 9) * *((_WORD *)a1 + 13));
      *(_BYTE *)(v7 + a1[1]) |= v3;
    }
  }
  else
  {
    LOBYTE(v3) = *(_BYTE *)((unsigned __int16)(v3 + v2) + v4);
    *(_BYTE *)((unsigned __int16)(*((_WORD *)a1 + 12) + *((_WORD *)a1 + 9) * *((_WORD *)a1 + 13)) + a1[1]) = v3;
  }
  return v3;
}
