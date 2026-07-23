/*
 * XREFs of _pow_special @ 0x180098F70
 * Callers:
 *     pow @ 0x1800A60D0 (pow.c)
 * Callees:
 *     _handle_error @ 0x180097E24 (_handle_error.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall pow_special(double a1, double a2, double a3, unsigned int a4)
{
  unsigned int v4; // r9d
  int v6; // [rsp+20h] [rbp-48h]
  unsigned int v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]

  if ( a4 == 2 )
  {
    v4 = 2;
    v9 = *(_QWORD *)&a2;
    v8 = *(_QWORD *)&a1;
    v7 = 34;
    v6 = 4;
    goto LABEL_10;
  }
  if ( a4 > 2 )
  {
    if ( a4 <= 6 )
    {
      v4 = 1;
      v9 = *(_QWORD *)&a2;
      v8 = *(_QWORD *)&a1;
      v7 = 33;
      v6 = 8;
      goto LABEL_10;
    }
    if ( a4 <= 8 )
    {
      v4 = 4;
      v9 = *(_QWORD *)&a2;
      v8 = *(_QWORD *)&a1;
      v7 = 34;
      v6 = 18;
      goto LABEL_10;
    }
    if ( a4 == 9 )
    {
      v4 = 3;
      v9 = *(_QWORD *)&a2;
      v8 = *(_QWORD *)&a1;
      v7 = 34;
      v6 = 17;
LABEL_10:
      handle_error((__int64)"pow", 29, *(__int64 *)&a3, v4, v6, v7, v8, v9, 2);
    }
  }
  return *(__m128 *)&a3;
}
