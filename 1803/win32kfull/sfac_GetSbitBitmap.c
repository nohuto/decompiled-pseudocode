/*
 * XREFs of sfac_GetSbitBitmap @ 0x1C02BFB0C
 * Callers:
 *     GetSbitComponent @ 0x1C02B7C48 (GetSbitComponent.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetSbitBitmap(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        unsigned int a4,
        __int16 a5,
        unsigned __int16 a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10,
        unsigned __int16 a11,
        unsigned __int16 a12,
        unsigned __int16 a13,
        unsigned __int16 a14,
        unsigned int a15,
        unsigned __int64 a16,
        _WORD *a17)
{
  unsigned __int64 v17; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // r15
  __int64 result; // rax
  unsigned __int16 v22; // r10
  _BYTE *v23; // r8
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r11
  __int64 v26; // rdi
  __int16 v27; // bp
  unsigned __int16 v28; // r13
  __int16 v29; // r9
  __int16 v30; // r10
  __int16 v31; // bx
  unsigned __int16 v32; // cx
  __int16 v33; // dx
  _BYTE *v34; // rax
  __int16 v35; // r9
  unsigned __int16 v36; // di
  unsigned __int16 v37; // cx
  __int64 v38; // rcx
  __int16 v39; // ax
  int v40; // edx
  unsigned __int16 v41; // cx
  char v42; // dl
  _BYTE *v43; // rax
  bool v44; // zf
  int v45; // r9d
  __int16 v46; // r10
  unsigned __int16 v47; // dx
  _BYTE *v48; // rcx
  __int16 v49; // si
  __int64 v50; // r13
  _BYTE *v51; // rdx
  __int16 v52; // di
  unsigned __int16 v53; // r10
  unsigned __int16 v54; // ax
  _BYTE *v55; // [rsp+38h] [rbp-40h] BYREF
  __int64 v56; // [rsp+40h] [rbp-38h]
  __int64 v57; // [rsp+48h] [rbp-30h]
  unsigned __int16 v59; // [rsp+C8h] [rbp+50h]
  unsigned __int16 v60; // [rsp+F0h] [rbp+78h]

  v17 = a16;
  v19 = a4;
  v56 = 1LL;
  v20 = a16 + a15;
  result = sfac_GetDataPtr(a1, a3, a4, 16, 1, (__int64 *)&v55);
  v22 = 0;
  if ( !(_DWORD)result )
  {
    v23 = v55;
    v24 = (unsigned __int64)&v55[v19];
    *a17 = 0;
    v25 = a16 + a13 * a12;
    LODWORD(v26) = (a14 * a11) >> 3;
    v27 = (a14 * a11) & 7;
    if ( a2 != 1 )
    {
      if ( a2 == 2 || a2 == 5 )
        goto LABEL_13;
      if ( a2 != 6 )
      {
        if ( a2 != 7 )
        {
          if ( (unsigned int)a2 - 8 <= 1 )
          {
            if ( (unsigned __int64)(v23 + 2) <= v24 )
              *a17 = __ROR2__(*(_WORD *)v23, 8);
            else
              *a17 = 0;
          }
          goto LABEL_10;
        }
LABEL_13:
        v28 = 0;
        v29 = 0;
        v30 = a9;
        v31 = a9 + a5;
        if ( a9 + a5 )
        {
          v32 = a14 * a6;
          v33 = a14 * a7;
          v26 = (unsigned __int16)v26;
          v57 = (unsigned __int16)v26;
          while ( 1 )
          {
            v34 = (_BYTE *)(v26 + v25);
            v35 = v29 - v33;
            v36 = v32;
            v55 = v34;
            v37 = (a14 * a11) & 7;
            v59 = 8;
            v60 = v37;
            if ( v36 )
              break;
LABEL_28:
            v29 = v35 - a14 * a8;
            if ( !v30 )
              v25 += a13;
            v26 = v57;
            if ( v30 )
              v30 -= v56;
            v32 = a14 * a6;
            if ( !--v31 )
              goto LABEL_10;
          }
          while ( 1 )
          {
            if ( v35 < 8 )
            {
              v38 = (unsigned __int16)(((unsigned __int16)(7 - v35) >> 3) + 1);
              v35 += 8 * v38;
              do
              {
                v28 <<= 8;
                if ( (_DWORD)v19 )
                {
                  v39 = (unsigned __int8)*v23++;
                  v28 |= v39;
                  LODWORD(v19) = v19 - 1;
                }
                --v38;
              }
              while ( v38 );
              v37 = v60;
            }
            v40 = v37;
            v41 = v36 + v37;
            if ( v59 <= (unsigned int)v36 + v40 )
              v41 = v59;
            v59 = v41;
            if ( (unsigned __int64)v55 >= v20 || (unsigned __int64)v55 < v17 )
              break;
            v42 = byte_1C02DF358[v41] & (v28 >> (v35 + v60 - 8));
            v35 += v60 - v41;
            v43 = v55;
            v17 = a16;
            *v55 |= byte_1C02DF350[v60] & v42;
            v44 = v60 - v41 + v36 == 0;
            v36 += v60 - v41;
            v55 = v43 + 1;
            v37 = 0;
            v60 = 0;
            if ( v44 )
            {
              v33 = a14 * a7;
              goto LABEL_28;
            }
          }
LABEL_57:
          InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
          return 6656LL;
        }
        goto LABEL_10;
      }
    }
    v45 = (a14 * a6 + 7) / 8;
    if ( v27 )
    {
      v49 = a5;
      if ( a5 )
      {
        v50 = (unsigned __int16)v26;
        while ( 1 )
        {
          v51 = (_BYTE *)(v25 + v50);
          if ( (unsigned __int64)&v23[(unsigned __int16)v45] > v24 )
            LOWORD(v45) = v24 - (_WORD)v23;
          v52 = 0;
          if ( (_WORD)v45 )
            break;
LABEL_53:
          if ( (unsigned __int64)v51 >= v20 || (unsigned __int64)v51 < a16 )
            goto LABEL_57;
          v25 += a13;
          *v51 |= v22 >> v27;
          v22 = 0;
          if ( !--v49 )
            goto LABEL_10;
        }
        while ( (unsigned __int64)v51 < v20 && (unsigned __int64)v51 >= a16 )
        {
          v53 = (unsigned __int8)*v23++ | v22;
          v54 = v53;
          v22 = v53 << 8;
          *v51++ |= v54 >> v27;
          if ( (unsigned __int16)++v52 >= (unsigned __int16)v45 )
            goto LABEL_53;
        }
        goto LABEL_57;
      }
    }
    else
    {
      v46 = a5;
      if ( a5 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)&v23[(unsigned __int16)v45] > v24 )
            LOWORD(v45) = v24 - (_WORD)v23;
          v47 = 0;
          if ( (_WORD)v45 )
            break;
LABEL_43:
          v25 += a13;
          if ( !--v46 )
            goto LABEL_10;
        }
        v48 = (_BYTE *)(v25 + (unsigned __int16)v26);
        while ( (unsigned __int64)v48 < v20 && (unsigned __int64)v48 >= a16 )
        {
          ++v47;
          *v48++ |= *v23++;
          if ( v47 >= (unsigned __int16)v45 )
            goto LABEL_43;
        }
        goto LABEL_57;
      }
    }
LABEL_10:
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}
