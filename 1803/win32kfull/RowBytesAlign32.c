/*
 * XREFs of RowBytesAlign32 @ 0x1C02B82F8
 * Callers:
 *     sbit_GetMetrics @ 0x1C02BA440 (sbit_GetMetrics.c)
 * Callees:
 *     UShortAdd @ 0x1C01032D4 (UShortAdd.c)
 */

__int64 __fastcall RowBytesAlign32(unsigned __int16 a1, unsigned __int16 a2, USHORT *a3)
{
  unsigned int v3; // r9d
  _WORD *v4; // r8

  v3 = a2 * a1;
  if ( v3 > 0xFFFF )
  {
    *a3 = -1;
  }
  else
  {
    *a3 = v3;
    if ( UShortAdd(v3, 0x1Fu, a3) >= 0 )
    {
      *v4 = (*v4 >> 3) & 0x1FFC;
      return 0LL;
    }
  }
  return 6149LL;
}
