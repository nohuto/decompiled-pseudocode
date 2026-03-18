/*
 * XREFs of CurveTransitions @ 0x1C02BB044
 * Callers:
 *     Misoriented @ 0x1C02BB8E0 (Misoriented.c)
 * Callees:
 *     FQuadraticEqn @ 0x1C02BB618 (FQuadraticEqn.c)
 */

__int64 __fastcall CurveTransitions(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  int v6; // r15d
  int v7; // r13d
  int v8; // edi
  int v9; // ebp
  int v10; // esi
  int v11; // ebx
  int v12; // r12d
  unsigned int v13; // r8d
  __int64 *v14; // r10
  __int64 i; // r11
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v21[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  int v23; // [rsp+84h] [rbp+Ch]
  int v24; // [rsp+94h] [rbp+1Ch]

  v24 = HIDWORD(a3);
  v23 = HIDWORD(a1);
  v5 = a1;
  v6 = a2 - a1;
  v7 = a3 + a5 - 2 * a4;
  v8 = HIDWORD(a3) + HIDWORD(a5) - 2 * HIDWORD(a4);
  v9 = a3;
  v10 = 2 * (a4 - a3);
  v11 = HIDWORD(a2) - HIDWORD(a1);
  v12 = 2 * (HIDWORD(a4) - HIDWORD(a3));
  FQuadraticEqn(
    v6 * v8 - v11 * v7,
    v6 * v12 - v11 * v10,
    v11 * (a1 - a3) + v6 * (HIDWORD(a3) - HIDWORD(a1)),
    (unsigned int)&a5,
    (__int64)v21,
    (__int64)&v22);
  v13 = 0;
  if ( (int)a5 > 0 )
  {
    v14 = (__int64 *)v21;
    for ( i = (unsigned int)a5; i; --i )
    {
      v16 = *v14;
      if ( (unsigned __int64)(*v14 - 1) > 0xFFFF )
        goto LABEL_18;
      if ( (int)abs32(v6) <= (int)abs32(v11) )
      {
        v17 = ((__int64)(v24 - v23) << 32) + v16 * (((__int64)v12 << 16) + v16 * v8);
        if ( v11 < 0 )
        {
          v19 = v11;
          goto LABEL_15;
        }
        if ( v17 > 0 )
        {
          v18 = v11;
LABEL_8:
          if ( v17 <= v18 << 32 )
            goto LABEL_17;
        }
      }
      else
      {
        v17 = ((__int64)(v9 - v5) << 32) + v16 * (((__int64)v10 << 16) + v16 * v7);
        if ( v6 < 0 )
        {
          v19 = v6;
LABEL_15:
          if ( v19 << 32 > v17 || v17 >= 0 )
            goto LABEL_18;
LABEL_17:
          ++v13;
          goto LABEL_18;
        }
        if ( v17 > 0 )
        {
          v18 = v6;
          goto LABEL_8;
        }
      }
LABEL_18:
      ++v14;
    }
  }
  return v13;
}
