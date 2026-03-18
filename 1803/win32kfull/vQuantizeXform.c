/*
 * XREFs of vQuantizeXform @ 0x1C0224660
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 * Callees:
 *     bSearchVdmxTable @ 0x1C022446C (bSearchVdmxTable.c)
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall vQuantizeXform(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int *v3; // rdx
  __int64 result; // rax
  unsigned int v5; // r13d
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // rdx
  int fixed; // edi
  int v14; // edi
  int v15; // r14d
  int v16; // esi
  unsigned int v17; // r10d
  unsigned int v18; // eax
  __int16 v19; // r13
  unsigned int v20; // edx
  __int16 v21; // r15
  int v22; // ecx
  int v23; // eax
  int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // r11
  int v27; // [rsp+30h] [rbp-38h]
  int v28; // [rsp+34h] [rbp-34h]
  unsigned int v29; // [rsp+38h] [rbp-30h]
  unsigned int v30; // [rsp+40h] [rbp-28h]
  _BYTE v31[6]; // [rsp+44h] [rbp-24h] BYREF
  int v32; // [rsp+4Ch] [rbp-1Ch]
  __int16 v33; // [rsp+B0h] [rbp+48h]
  unsigned int v34; // [rsp+B8h] [rbp+50h]
  unsigned int v35; // [rsp+C0h] [rbp+58h]
  int v36; // [rsp+C8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int **)(a1 + 192);
  result = *(_QWORD *)(v2 + 64);
  v5 = *(_DWORD *)(a1 + 96);
  v30 = v5;
  v6 = v3[20];
  v7 = result + v6;
  if ( !(_DWORD)v6 )
    v7 = 0LL;
  v8 = v3[16];
  v9 = result + v3[4];
  v10 = result + v8;
  if ( !(_DWORD)v8 )
    v10 = 0LL;
  v11 = *(_DWORD *)(a1 + 116);
  v35 = *(__int16 *)(v2 + 408);
  if ( (v11 & 1) == 0 || (int)v5 <= 0 || !v7 )
    return result;
  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
    v12 = (unsigned int)-*(__int16 *)(v2 + 408);
  else
    v12 = (unsigned int)(*(__int16 *)(v2 + 412) + *(__int16 *)(v2 + 414));
  fixed = FixMul(v5, v12);
  if ( (unsigned int)bSearchVdmxTable(
                       v7,
                       *(_DWORD *)(a1 + 44),
                       *(_DWORD *)(a1 + 48),
                       fixed,
                       (unsigned __int16 *)v31,
                       a1) )
  {
    v14 = *(unsigned __int16 *)v31;
    *(_DWORD *)(a1 + 164) = -*(__int16 *)&v31[4];
    *(_DWORD *)(a1 + 160) = -*(__int16 *)&v31[2];
    *(_DWORD *)(a1 + 116) = v11 | 4;
    goto LABEL_39;
  }
  if ( v10 )
    v15 = (__int16)__ROR2__(*(_WORD *)(v10 + 74), 8) + (__int16)__ROR2__(*(_WORD *)(v10 + 76), 8);
  else
    v15 = (__int16)__ROR2__(*(_WORD *)(v9 + 42), 8) - (__int16)__ROR2__(*(_WORD *)(v9 + 38), 8);
  if ( fixed < 0 )
  {
    v14 = -fixed;
    goto LABEL_39;
  }
  v16 = FixMul(v5, v35);
  *(_DWORD *)&v31[2] = v17;
  LODWORD(result) = -v16;
  *(_WORD *)v31 = v17;
  v28 = -v16;
  v27 = v17;
  v36 = v17;
  v29 = v17;
  v32 = *(_DWORD *)v31;
  v33 = v17;
  v34 = v17;
  while ( 1 )
  {
    v18 = bSearchVdmxTable(v7, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48), result, (unsigned __int16 *)v31, a1);
    v19 = *(_WORD *)&v31[4];
    v20 = v18;
    v21 = *(_WORD *)&v31[2];
    if ( v18 )
    {
      result = (unsigned int)(*(__int16 *)&v31[2] - *(__int16 *)&v31[4]);
      if ( (_DWORD)result == fixed )
      {
        *(_DWORD *)(a1 + 164) = -*(__int16 *)&v31[4];
        *(_DWORD *)(a1 + 160) = -v21;
        result = *(unsigned __int16 *)v31;
        *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v31;
        goto LABEL_36;
      }
    }
    else
    {
      result = CompDiv(v35, v15 * (__int64)v16);
      if ( (_DWORD)result == fixed )
        goto LABEL_37;
      v20 = 0;
    }
    if ( (int)result >= fixed )
      break;
    if ( v27 )
    {
      if ( !v20 )
        goto LABEL_37;
      *(_DWORD *)(a1 + 164) = -v19;
      v23 = v21;
      goto LABEL_35;
    }
    ++v16;
    v36 = 1;
    v22 = -1;
LABEL_29:
    ++v34;
    v32 = *(_DWORD *)v31;
    result = (unsigned int)(v22 + v28);
    v29 = v20;
    v33 = v19;
    v28 += v22;
    if ( v34 >= 0x100 )
      goto LABEL_37;
  }
  result = 1LL;
  --v16;
  if ( !v36 )
  {
    v27 = 1;
    v22 = 1;
    goto LABEL_29;
  }
  if ( !v29 )
    goto LABEL_37;
  *(_DWORD *)(a1 + 164) = -v33;
  v23 = SHIWORD(v32);
LABEL_35:
  result = (unsigned int)-v23;
  *(_DWORD *)(a1 + 160) = result;
LABEL_36:
  *(_DWORD *)(a1 + 116) |= 4u;
LABEL_37:
  if ( v34 < 0x100 )
  {
    v5 = v30;
    v14 = v16;
LABEL_39:
    *(_DWORD *)(a1 + 124) = v14;
    result = CompDiv(v35, (__int64)v14 << 16);
    v24 = *(_DWORD *)(a1 + 80);
    LODWORD(v25) = result;
    *(_DWORD *)(a1 + 96) = result;
    if ( v24 == v5
      || (result = FixMul((unsigned int)(v24 - result), (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL)),
          !(_DWORD)result) )
    {
      *(_DWORD *)(a1 + 80) = v25;
    }
    else
    {
      result = CompDiv(v5, v25 * v26);
      *(_DWORD *)(a1 + 80) = result;
    }
  }
  return result;
}
