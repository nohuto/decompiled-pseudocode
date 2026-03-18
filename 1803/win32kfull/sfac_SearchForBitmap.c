/*
 * XREFs of sfac_SearchForBitmap @ 0x1C02C10E8
 * Callers:
 *     GetSbitComponent @ 0x1C02B7C48 (GetSbitComponent.c)
 *     sbit_SearchForBitmap @ 0x1C02BAAEC (sbit_SearchForBitmap.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_SearchForBitmap(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        unsigned __int32 *a7,
        unsigned __int16 *a8,
        unsigned __int32 *a9,
        unsigned __int32 *a10)
{
  unsigned __int64 v10; // rsi
  _DWORD *v11; // r14
  __int64 v13; // rbp
  __int64 result; // rax
  __int64 v16; // r8
  unsigned int v17; // r13d
  unsigned int v18; // r11d
  unsigned int v19; // r15d
  unsigned __int32 *v20; // r12
  unsigned int v21; // edx
  unsigned __int16 v22; // r11
  __int64 v23; // rdx
  __int64 j; // rbp
  __int16 v25; // cx
  unsigned __int32 v26; // r9d
  __int64 v27; // r14
  unsigned int v28; // r12d
  unsigned int v29; // r10d
  unsigned __int32 v30; // r10d
  unsigned int v31; // r11d
  unsigned int v32; // edx
  unsigned int v33; // ebp
  __int64 k; // rax
  unsigned __int16 v35; // ax
  unsigned __int32 v36; // r9d
  __int64 v37; // rdx
  unsigned int v38; // r14d
  unsigned int v39; // ecx
  unsigned int v40; // r10d
  unsigned int v41; // r11d
  unsigned __int16 v42; // cx
  unsigned __int32 v43; // edx
  __int64 v44; // r10
  unsigned __int32 v45; // r10d
  unsigned int v46; // r10d
  _WORD *v47; // rbp
  __int64 v48; // r10
  unsigned int v49; // edx
  int v50; // edx
  unsigned __int32 v51; // eax
  unsigned int i; // [rsp+30h] [rbp-48h]
  unsigned int v53; // [rsp+34h] [rbp-44h]
  __int64 v54[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 v55; // [rsp+80h] [rbp+8h]

  v10 = *(unsigned int *)(a1 + 164);
  *a4 = 0;
  v11 = a4;
  v13 = a3;
  result = sfac_GetDataPtr(a1, 0, v10, 17, 1, v54);
  if ( !(_DWORD)result )
  {
    v16 = v54[0];
    if ( __ROR2__(*(_WORD *)((unsigned int)(v13 + 40) + v54[0]), 8) <= a2
      && __ROR2__(*(_WORD *)((unsigned int)(v13 + 42) + v54[0]), 8) >= a2 )
    {
      v17 = _byteswap_ulong(*(_DWORD *)(v13 + v54[0]));
      v53 = v17;
      v18 = v17;
      v19 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v13 + 8) + v54[0]));
      if ( v17 <= (unsigned int)v10 && v19 <= ((unsigned int)v10 - v17) >> 3 && v19 )
      {
        v20 = a9;
        v21 = v17 + 4;
        for ( i = v17 + 4; ; v21 = i )
        {
          if ( *v11 )
            goto LABEL_62;
          v22 = __ROR2__(*(_WORD *)(v18 + v16), 8);
          if ( v22 <= a2 && __ROR2__(*(_WORD *)(v21 - 2 + v16), 8) >= a2 )
            break;
LABEL_60:
          i += 8;
          v18 = v53 + 8;
          v53 += 8;
          if ( !--v19 )
            goto LABEL_62;
        }
        v23 = v17 + _byteswap_ulong(*(_DWORD *)(v21 + v16));
        j = (unsigned int)(v23 + 8);
        if ( (unsigned int)j > (unsigned int)v10 || (unsigned int)v23 > (unsigned int)v10 || (unsigned int)v10 < 8 )
          goto LABEL_62;
        v25 = __ROR2__(*(_WORD *)(v23 + v16), 8);
        v55 = __ROR2__(*(_WORD *)((unsigned int)(v23 + 2) + v16), 8);
        v26 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v23 + 4) + v16));
        switch ( v25 )
        {
          case 1:
            v48 = (unsigned int)v23 + 4 * (a2 - v22 + 2);
            if ( v48 + 8 > v10 )
              goto LABEL_62;
            v49 = *(_DWORD *)(v48 + v16);
            v45 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v48 + 4) + v16));
            v43 = _byteswap_ulong(v49);
            break;
          case 2:
            if ( j + 4 > v10 )
              goto LABEL_62;
            v46 = *(_DWORD *)(j + v16);
            v47 = a5;
            v30 = _byteswap_ulong(v46);
            v36 = v30 * (a2 - v22) + v26;
            *v20 = v36;
            *a7 = v23 + 12;
            *a6 = 1;
            *a5 = 3;
LABEL_48:
            *a10 = v30;
            *a8 = v55;
            v50 = *(unsigned __int8 *)(a3 + 47 + v16);
            if ( !v55 )
              goto LABEL_60;
            if ( v55 <= 2u )
            {
              *v47 = (v50 != 1) + 1;
              v51 = v36 + 5;
              goto LABEL_58;
            }
            if ( v55 == 5 )
            {
LABEL_59:
              *v11 = 1;
              goto LABEL_60;
            }
            if ( v55 <= 5u )
              goto LABEL_60;
            if ( v55 > 7u )
            {
              if ( v55 == 8 )
              {
                *v47 = (v50 != 1) + 1;
                v51 = v36 + 6;
                goto LABEL_58;
              }
              if ( v55 != 9 )
                goto LABEL_60;
            }
            *v47 = 3;
            v51 = v36 + 8;
LABEL_58:
            *v20 = v51;
            goto LABEL_59;
          case 3:
            v44 = (unsigned int)v23 + 2 * (a2 - v22 + 4);
            if ( v44 + 4 > v10 )
              goto LABEL_62;
            v43 = (unsigned __int16)__ROR2__(*(_WORD *)(v44 + v16), 8);
            v45 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(v44 + 2) + v16), 8);
            break;
          case 4:
            if ( j + 4 > v10 )
              goto LABEL_62;
            _mm_lfence();
            v16 = v54[0];
            v37 = (unsigned int)(v23 + 12);
            v38 = 0;
            v39 = _byteswap_ulong(*(_DWORD *)(j + v54[0]));
            LODWORD(j) = v37;
            v40 = v39 - 1;
            if ( v39 > ((unsigned int)(v10 - v37) >> 2) - 1 )
              goto LABEL_62;
            if ( __ROR2__(*(_WORD *)(v37 + v54[0]), 8) != a2 )
            {
              v41 = v39 - 1;
              for ( j = (unsigned int)v37 + 4 * v40; ; j = (unsigned int)v37 + 4 * v41 )
              {
                v42 = __ROR2__(*(_WORD *)(j + v54[0]), 8);
                if ( v42 == a2 )
                  break;
                if ( v42 >= a2 )
                {
                  v40 = v41;
                  v41 = v38;
                }
                v38 = v41;
                if ( v40 - v41 < 2 )
                  goto LABEL_62;
                v41 = (v40 + v41) >> 1;
              }
            }
            v11 = a4;
            v43 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(j + 2) + v54[0]), 8);
            v30 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(j + 6) + v54[0]), 8) - v43;
LABEL_46:
            v36 = v43 + v26;
            *a7 = v36;
            *a6 = 2;
LABEL_47:
            v47 = a5;
            goto LABEL_48;
          case 5:
            v27 = (unsigned int)(v23 + 24);
            if ( (unsigned int)v27 > (unsigned int)v10 )
              goto LABEL_62;
            _mm_lfence();
            v16 = v54[0];
            v28 = 0;
            v29 = *(_DWORD *)(j + v54[0]);
            *a7 = v23 + 12;
            v30 = _byteswap_ulong(v29);
            *a6 = 1;
            v31 = 0;
            *a5 = 3;
            v32 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v23 + 20) + v16));
            v33 = v32 - 1;
            if ( v32 > (unsigned int)(v10 - v27) >> 1 )
              goto LABEL_62;
            if ( __ROR2__(*(_WORD *)(v27 + v16), 8) != a2 )
            {
              v31 = v32 - 1;
              for ( k = (unsigned int)v27 + 2 * v33; ; k = (unsigned int)v27 + 2 * v31 )
              {
                v35 = __ROR2__(*(_WORD *)(k + v16), 8);
                if ( v35 == a2 )
                  break;
                if ( v35 >= a2 )
                {
                  v33 = v31;
                  v31 = v28;
                }
                v28 = v31;
                if ( v33 - v31 < 2 )
                  goto LABEL_62;
                v31 = (v33 + v31) >> 1;
              }
            }
            v20 = a9;
            v11 = a4;
            v36 = v30 * v31 + v26;
            *a9 = v36;
            goto LABEL_47;
          default:
            goto LABEL_62;
        }
        v30 = v45 - v43;
        if ( !v30 )
          goto LABEL_62;
        goto LABEL_46;
      }
    }
LABEL_62:
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}
