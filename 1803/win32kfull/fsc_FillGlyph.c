/*
 * XREFs of fsc_FillGlyph @ 0x1C02B6618
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     EvaluateSpline @ 0x1C02B5C4C (EvaluateSpline.c)
 *     fsc_FillBitMap @ 0x1C02C3358 (fsc_FillBitMap.c)
 *     fsc_SetupScan @ 0x1C02C351C (fsc_SetupScan.c)
 *     fsc_CheckEndPoint @ 0x1C02C3D80 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C02C3E68 (fsc_EndContourEndpoint.c)
 *     fsc_CalcLine @ 0x1C02C3F50 (fsc_CalcLine.c)
 */

__int64 __fastcall fsc_FillGlyph(__int64 a1, __int16 *a2, __int64 a3, __int16 a4, unsigned __int16 a5)
{
  __int16 v5; // r10
  __int16 v7; // r11
  __int16 *v8; // rbp
  __int64 v9; // r15
  __int64 result; // rax
  int v11; // r14d
  unsigned __int16 v12; // r13
  int v13; // esi
  int v14; // ecx
  int v15; // r12d
  int v16; // r10d
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // ax
  __int16 v23; // dx
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // rax
  unsigned int *v28; // rbx
  int *v29; // rdx
  int *v30; // rsi
  _BYTE *v31; // r14
  int v32; // edi
  int v33; // r15d
  unsigned int v34; // r12d
  int v35; // ebp
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // r13d
  __int64 v40; // rcx
  signed int v41; // r13d
  char v42; // [rsp+50h] [rbp-78h]
  unsigned __int16 v43; // [rsp+52h] [rbp-76h]
  unsigned __int16 v44; // [rsp+54h] [rbp-74h]
  __int64 v45; // [rsp+58h] [rbp-70h]
  int v46; // [rsp+58h] [rbp-70h]
  unsigned int v47; // [rsp+58h] [rbp-70h]
  int v48; // [rsp+60h] [rbp-68h]
  int v49; // [rsp+64h] [rbp-64h]
  int *v50; // [rsp+68h] [rbp-60h]
  int v51; // [rsp+70h] [rbp-58h]
  int v52; // [rsp+74h] [rbp-54h]
  int v53; // [rsp+78h] [rbp-50h]
  _BOOL8 v54; // [rsp+80h] [rbp-48h]

  v5 = a2[3];
  v7 = a2[5];
  v8 = a2;
  v9 = a1;
  if ( v5 <= v7 )
    return 0LL;
  v11 = 0;
  v12 = a5 & 0xFFFE;
  v13 = v5;
  v14 = a2[2] - 1;
  if ( !*((_DWORD *)a2 + 4) )
    v12 = a5;
  v15 = v5;
  v52 = a2[2];
  v16 = v7;
  v43 = v12;
  if ( (v12 & 2) != 0 )
    v14 = a2[2];
  v17 = v7;
  if ( a2[1] <= v13 )
    v15 = a2[1];
  v51 = v15;
  if ( v14 >= v7 )
    v16 = v14;
  v53 = v16;
  if ( a4 != 2 )
    v17 = v16;
  v18 = v13;
  if ( a4 != 2 )
    v18 = v15;
  if ( a4 == 3 )
    return fsc_FillBitMap(*((_QWORD *)v8 + 5), v15, v53, *v8, v52, v12);
  v19 = *(_QWORD *)(a3 + 40);
  v20 = *(_QWORD *)(a3 + 32) + *(int *)(a3 + 4);
  qword_1C032FF38 = *(_QWORD *)(a3 + 32);
  qword_1C032FF48 = v20;
  v21 = v19 + *(int *)(a3 + 8);
  qword_1C032FF40 = v19;
  qword_1C032FF50 = v21;
  qword_1C032FEE8 = (__int64)CalcHorizLineSubpix;
  qword_1C032FF00 = (__int64)CalcVertLineSubpix;
  qword_1C032FEF0 = (__int64)CalcHorizSpSubpix;
  qword_1C032FF08 = (__int64)CalcVertSpSubpix;
  qword_1C032FEF8 = (__int64)CalcHorizEpSubpix;
  qword_1C032FF10 = (__int64)CalcVertEpSubpix;
  v54 = v18 < v13 || v17 > v7;
  v48 = (v18 << 6) - 32;
  v49 = (v17 << 6) + 32;
  LOBYTE(v11) = a4 == 2;
  result = fsc_SetupScan(
             (int)v8 + 6,
             v12,
             v18,
             v17,
             v11,
             *v8,
             *(_DWORD *)(a3 + 12),
             *(_DWORD *)(a3 + 16),
             *(_DWORD *)(a3 + 20),
             *(_QWORD *)(a3 + 24));
  if ( !(_DWORD)result )
  {
    v22 = 0;
    v44 = 0;
    if ( *(_WORD *)v9 )
    {
      while ( 1 )
      {
        v23 = *(_WORD *)(*(_QWORD *)(v9 + 8) + 2LL * v22);
        v24 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 16) + 2LL * v22);
        if ( v23 != (_WORD)v24 )
        {
          v25 = *(_QWORD *)(v9 + 24);
          v26 = *(_QWORD *)(v9 + 32);
          v27 = v23;
          v45 = *(_QWORD *)(v9 + 40);
          v28 = (unsigned int *)(v25 + 4LL * v23);
          v29 = (int *)(v25 + 4LL * (__int16)v24);
          v30 = (int *)(v26 + 4 * v27);
          v50 = v29;
          v31 = (_BYTE *)(v45 + v27);
          if ( (*(_BYTE *)((__int16)v24 + v45) & 1) != 0 )
          {
            v32 = *(_DWORD *)(v26 + 4LL * (__int16)v24);
            v33 = *v29++;
            LOBYTE(v24) = *v31;
            v34 = *v28;
            v35 = *v30;
            v50 = v29;
            v42 = *v31;
          }
          else
          {
            v35 = *(_DWORD *)(v26 + 4LL * (__int16)v24);
            v34 = *v29;
            v36 = (__int16)v24 - 1;
            v33 = *(_DWORD *)(v25 + 4 * v36);
            v32 = *(_DWORD *)(v26 + 4 * v36);
            if ( (*(_BYTE *)(v36 + v45) & 1) == 0 )
            {
              v33 = (int)(v34 + v33 + 1) >> 1;
              v32 = (v35 + v32 + 1) >> 1;
            }
            --v28;
            --v30;
            v42 = 0;
            LOBYTE(v24) = 0;
            --v31;
          }
          dword_1C032FE18 = v33;
          dword_1C032FE1C = v32;
          State = 0x7FFFFFFF;
          if ( (v12 & 6) == 4 )
          {
            v37 = dword_1C032FF2C;
            *(_DWORD *)(qword_1C032FF18 + 4LL * dword_1C032FF2C) = v33;
            *(_DWORD *)(qword_1C032FF20 + 4 * v37) = v32;
            dword_1C032FF2C = v37 + 1;
            if ( (int)v37 + 1 > dword_1C032FF28 )
              return 6656LL;
            v29 = v50;
          }
          if ( v54 )
          {
            while ( v28 < (unsigned int *)v29 )
            {
              if ( (v24 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v34, (unsigned int)v35, v12);
                if ( (_DWORD)result )
                  return result;
                if ( (v32 <= v48 || v35 <= v48) && (v32 >= v49 || v35 >= v49) )
                {
                  result = fsc_CalcLine(v33, v32, v34, v35, v12);
                  if ( (_DWORD)result )
                    return result;
                }
                ++v28;
                ++v30;
                v33 = v34;
                ++v31;
                v32 = v35;
              }
              else
              {
                ++v28;
                ++v30;
                ++v31;
                v40 = *v28;
                v41 = *v30;
                v47 = *v28;
                if ( (*v31 & 1) != 0 )
                {
                  ++v28;
                  ++v30;
                  ++v31;
                }
                else
                {
                  v40 = (unsigned int)((int)(v34 + v40 + 1) >> 1);
                  v47 = v40;
                  v41 = (v35 + v41 + 1) >> 1;
                }
                if ( (v32 <= v48 || v35 <= v48 || v41 <= v48) && (v32 >= v49 || v35 >= v49 || v41 >= v49) )
                  result = EvaluateSpline(v33, v32, v34, v35, v40, v41, v43);
                else
                  result = fsc_CheckEndPoint(v40, (unsigned int)v41, v43);
                if ( (_DWORD)result )
                  return result;
                v33 = v47;
                v32 = v41;
                v12 = v43;
              }
              v29 = v50;
              if ( v28 == (unsigned int *)v50 )
              {
                LOBYTE(v24) = v42;
              }
              else
              {
                LOBYTE(v24) = *v31;
                v34 = *v28;
                v35 = *v30;
                v42 = *v31;
              }
            }
          }
          else
          {
            while ( v28 < (unsigned int *)v29 )
            {
              if ( (v24 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v34, (unsigned int)v35, v12);
                if ( (_DWORD)result )
                  return result;
                result = fsc_CalcLine(v33, v32, v34, v35, v12);
                if ( (_DWORD)result )
                  return result;
                ++v28;
                ++v30;
                v33 = v34;
                ++v31;
                v32 = v35;
              }
              else
              {
                ++v30;
                ++v28;
                ++v31;
                v38 = *v30;
                v39 = *v28;
                v46 = *v30;
                if ( (*v31 & 1) != 0 )
                {
                  ++v28;
                  ++v30;
                  ++v31;
                }
                else
                {
                  v39 = (int)(v34 + v39 + 1) >> 1;
                  v38 = (int)(v35 + v38 + 1) >> 1;
                  v46 = v38;
                }
                result = EvaluateSpline(v33, v32, v34, v35, v39, v38, v43);
                if ( (_DWORD)result )
                  return result;
                v32 = v46;
                v33 = v39;
                v12 = v43;
              }
              v29 = v50;
              if ( v28 == (unsigned int *)v50 )
              {
                LOBYTE(v24) = v42;
              }
              else
              {
                LOBYTE(v24) = *v31;
                v34 = *v28;
                v35 = *v30;
                v42 = *v31;
              }
            }
          }
          result = fsc_EndContourEndpoint(v12, v29, v24, 1LL);
          if ( (_DWORD)result )
            return result;
          v9 = a1;
        }
        v22 = v44 + 1;
        v44 = v22;
        if ( v22 >= *(_WORD *)v9 )
        {
          v8 = a2;
          v15 = v51;
          return fsc_FillBitMap(*((_QWORD *)v8 + 5), v15, v53, *v8, v52, v12);
        }
      }
    }
    return fsc_FillBitMap(*((_QWORD *)v8 + 5), v15, v53, *v8, v52, v12);
  }
  return result;
}
