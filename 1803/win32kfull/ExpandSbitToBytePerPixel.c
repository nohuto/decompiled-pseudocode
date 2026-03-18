/*
 * XREFs of ExpandSbitToBytePerPixel @ 0x1C02B798C
 * Callers:
 *     GetSbitComponent @ 0x1C02B7C48 (GetSbitComponent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandSbitToBytePerPixel(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned __int16 v9; // r12
  char v14; // r8
  unsigned __int16 v15; // r13
  __int16 v16; // r9
  __int64 v17; // r10
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 *v25; // r10
  __int16 v26; // bp
  _BYTE *v27; // r14
  unsigned __int16 v28; // r8
  unsigned __int8 v29; // cl
  char v30; // cl
  unsigned __int8 *v31; // rax
  unsigned __int16 v33; // [rsp+0h] [rbp-58h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]
  __int64 v36; // [rsp+20h] [rbp-38h]
  __int16 v37; // [rsp+60h] [rbp+8h]
  unsigned __int16 v38; // [rsp+80h] [rbp+28h]

  v9 = a1;
  v33 = (1 << a5) - 1;
  if ( !a1 || !a2 )
    return 0LL;
  v14 = 2;
  if ( a5 != 2 )
  {
    if ( a5 == 4 )
    {
      v15 = 15;
      v14 = 1;
      v16 = 4 * ((a2 - 1) & 1);
      goto LABEL_9;
    }
    if ( a5 == 8 )
    {
      v15 = 255;
      v16 = 0;
      v14 = 0;
      goto LABEL_9;
    }
    return 0LL;
  }
  v15 = 3;
  v16 = 2 * ((a2 - 1) & 3);
LABEL_9:
  v34 = a4;
  v17 = (unsigned int)a1 - 1;
  v18 = v17 * a4;
  if ( v18 <= 0xFFFFFFFF )
  {
    v19 = v18 + a2;
    if ( v19 >= (unsigned int)v18 && v19 <= a8 )
    {
      v35 = a3;
      v20 = v17 * a3;
      if ( v20 <= 0xFFFFFFFF && (unsigned int)v20 <= a6 )
      {
        v21 = a9 + (v9 - 1) * a4;
        v22 = a7 + (v9 - 1) * a3;
        v23 = a7 + a6;
        v24 = (a2 - 1LL) >> v14;
        v36 = v24;
LABEL_15:
        v25 = (unsigned __int8 *)(v24 + v22);
        v26 = v16;
        v27 = (_BYTE *)(a2 - 1LL + v21);
        if ( v24 + v22 < v23 && (unsigned __int64)v25 >= a7 )
        {
          v38 = a2;
          v28 = a2;
          *v25 >>= 8 - a5 - v16;
          while ( 1 )
          {
            v29 = *v25;
            v37 = v26;
            if ( *v27 )
            {
              v28 = v38;
              v30 = v33 - (v33 - (unsigned __int8)*v27) * (v15 & (v33 - v29)) / v33;
            }
            else
            {
              v30 = v15 & v29;
            }
            *v27 = v30;
            if ( (unsigned __int64)v25 >= a7 + a6 || (unsigned __int64)v25 < a7 )
              break;
            --v27;
            *v25 >>= a5;
            if ( !v26 )
              v26 = 8;
            v26 -= a5;
            --v28;
            v31 = v25 - 1;
            v38 = v28;
            if ( v37 )
              v31 = v25;
            v25 = v31;
            if ( !v28 )
            {
              v23 = a7 + a6;
              v21 -= v34;
              v22 -= v35;
              if ( !--v9 )
                return 0LL;
              v24 = v36;
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  return 6656LL;
}
