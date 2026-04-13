/*
 * XREFs of _LXp_setw @ 0x1800B7EBC
 * Callers:
 *     _Stoldx @ 0x1800AF8F0 (_Stoldx.c)
 *     _LXp_setn @ 0x1800B7E94 (_LXp_setn.c)
 *     _LDtento @ 0x1800B7FD0 (_LDtento.c)
 * Callees:
 *     _LDscale @ 0x1800B77B4 (_LDscale.c)
 *     _LDint @ 0x1800CA05C (_LDint.c)
 *     _LDunscale @ 0x1800CA068 (_LDunscale.c)
 */

__int64 __fastcall LXp_setw(__int64 a1, int a2, double a3)
{
  double v3; // xmm6_8
  __int16 v6; // ax
  double *v7; // rdi
  double v8; // xmm0_8
  double v9; // xmm6_8
  double v10; // xmm6_8
  double v12; // [rsp+50h] [rbp+8h] BYREF
  __int16 v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = a3;
  v3 = a3;
  if ( a2 <= 0 )
    return a1;
  if ( a2 == 1 )
  {
LABEL_13:
    *(double *)a1 = v3;
    return a1;
  }
  v6 = LDunscale(&v13, &v12);
  if ( !v6 )
  {
    v3 = v12;
    goto LABEL_13;
  }
  v7 = (double *)(a1 + 8);
  if ( v6 <= 0 )
  {
    LDint(&v12, 26LL);
    LDscale((unsigned __int16 *)&v12, v13);
    v8 = v12;
    *(double *)a1 = v12;
    v9 = a3 - v8;
    *v7 = a3 - v8;
    if ( a2 > 2 )
    {
      if ( v9 == 0.0 )
      {
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      else
      {
        LDunscale(&v13, a1 + 8);
        LDint(a1 + 8, 26LL);
        LDscale((unsigned __int16 *)(a1 + 8), v13);
        v10 = v9 - *v7;
        *(double *)(a1 + 16) = v10;
        if ( a2 > 3 && v10 != 0.0 )
          *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
  }
  else
  {
    *(double *)a1 = v12;
    *v7 = 0.0;
  }
  return a1;
}
