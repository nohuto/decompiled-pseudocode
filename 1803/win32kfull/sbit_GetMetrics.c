/*
 * XREFs of sbit_GetMetrics @ 0x1C02BA440
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02B0CCC (fs_FindBitMapSize.c)
 * Callees:
 *     GetSbitMetrics @ 0x1C02B80D4 (GetSbitMetrics.c)
 *     RowBytesAlign32 @ 0x1C02B82F8 (RowBytesAlign32.c)
 *     SScaleX @ 0x1C02B837C (SScaleX.c)
 *     SScaleY @ 0x1C02B83B0 (SScaleY.c)
 *     UScaleX @ 0x1C02B8B3C (UScaleX.c)
 *     UScaleY @ 0x1C02B8B84 (UScaleY.c)
 *     sbit_ValidateScaleX @ 0x1C02BAC1C (sbit_ValidateScaleX.c)
 */

__int64 __fastcall sbit_GetMetrics(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _WORD *a9,
        _WORD *a10,
        int *a11,
        _DWORD *a12)
{
  unsigned __int16 v15; // si
  __int64 result; // rax
  int v17; // edi
  _WORD *v18; // rcx
  __int16 v19; // ax
  unsigned __int16 v20; // dx
  _WORD *v21; // rcx
  __int16 v22; // ax
  __int64 v23; // rdx
  int v24; // ebp
  __int16 v25; // ax
  int v26; // r14d
  __int16 v27; // r10
  _WORD *v28; // rcx
  _WORD *v29; // rcx
  int v30; // r15d
  int v31; // r14d
  int v32; // r15d
  __int64 v33; // rcx
  int v34; // ebp
  unsigned __int16 v35; // r11
  unsigned __int16 v36; // r8
  unsigned __int64 v37; // rcx
  int v38; // r10d
  unsigned __int16 v39; // ax
  unsigned __int16 v40; // cx
  unsigned __int64 v41; // r8
  int v42; // r9d
  int v43; // ecx
  int v44; // eax
  unsigned int v45; // edx
  int v46; // ecx
  int v47; // eax
  int v48; // r14d
  int v49; // ebp
  int v50; // edx
  unsigned int v51; // eax
  bool v52; // zf
  __int16 v53; // [rsp+20h] [rbp-48h]
  __int16 v54; // [rsp+22h] [rbp-46h]
  __int16 v55; // [rsp+24h] [rbp-44h]
  int v56; // [rsp+28h] [rbp-40h]
  int v57; // [rsp+2Ch] [rbp-3Ch]
  int v58; // [rsp+30h] [rbp-38h]
  int v59; // [rsp+34h] [rbp-34h]
  int v60; // [rsp+38h] [rbp-30h]

  v15 = 1;
  if ( *(_WORD *)(a1 + 94) != 1 )
    v15 = 8;
  result = GetSbitMetrics(a1, a2);
  v17 = 0;
  if ( !(_DWORD)result )
  {
    result = sbit_ValidateScaleX(a1);
    if ( !(_DWORD)result )
    {
      if ( *(_WORD *)(a1 + 28) == 3 && !*(_WORD *)(a1 + 36) )
        return 7168LL;
      v19 = UScaleX(v18, *(_WORD *)(a1 + 48));
      v20 = *(_WORD *)(a1 + 46);
      *(_WORD *)(a1 + 60) = v19;
      v22 = UScaleY(v21, v20);
      v23 = *(unsigned __int16 *)(a1 + 76);
      *(_WORD *)(a1 + 58) = v22;
      v24 = SScaleY(a1, v23);
      v25 = SScaleX(a1, *(unsigned __int16 *)(a1 + 74));
      v26 = v25;
      v53 = v25;
      v54 = v24 - v27;
      v55 = *(_WORD *)(a1 + 60) + v25;
      v56 = (unsigned __int16)UScaleX(v28, *(_WORD *)(a1 + 50)) << 6;
      v30 = v26;
      v58 = (unsigned __int16)UScaleY(v29, *(_WORD *)(a1 + 52)) << 6;
      v60 = v26;
      v31 = v24;
      v57 = v24 << 6;
      v32 = v30 << 6;
      v59 = SScaleX(a1, *(unsigned __int16 *)(a1 + 78)) << 6;
      v34 = SScaleY(v33, *(unsigned __int16 *)(a1 + 80)) << 6;
      result = RowBytesAlign32(v35, *(_WORD *)(a1 + 94), (USHORT *)(a1 + 54));
      if ( !(_DWORD)result )
      {
        result = RowBytesAlign32(*(_WORD *)(a1 + 48), v15, (USHORT *)(a1 + 56));
        if ( !(_DWORD)result )
        {
          result = RowBytesAlign32(*(_WORD *)(a1 + 60), v15, (USHORT *)(a1 + 62));
          if ( !(_DWORD)result )
          {
            v36 = *(_WORD *)(a1 + 46);
            v37 = *(unsigned __int16 *)(a1 + 54) * (unsigned __int64)v36;
            *(_DWORD *)(a1 + 24) = 0;
            if ( v37 <= 0xFFFFFFFF )
            {
              v38 = v37;
              v39 = *(_WORD *)(a1 + 58);
              v40 = *(_WORD *)(a1 + 62);
              if ( v39 <= v36 )
                v39 = v36;
              if ( v40 <= *(_WORD *)(a1 + 56) )
                v40 = *(_WORD *)(a1 + 56);
              v41 = v40 * (unsigned __int64)v39;
              if ( v41 <= 0xFFFFFFFF )
              {
                v42 = v40 * v39;
                if ( *(_WORD *)(a1 + 38) )
                {
                  switch ( *(_WORD *)(a1 + 38) )
                  {
                    case 1:
                      v49 = -v34;
                      a9[3] = -v54;
                      *a9 = v55;
                      a9[1] = -(__int16)v31;
                      a9[2] = v53;
                      a3[1] = v56;
                      v50 = (v55 - v60) << 6;
                      *a4 = -v57;
                      *a3 = 0;
                      a4[1] = v50 + v32;
                      a5[1] = (v55 << 6) - v32;
                      *a5 = 0;
                      *a7 = v49;
                      *(_QWORD *)a6 = (unsigned int)-v58;
                      a7[1] = v50 + v59;
                      *(_QWORD *)a8 = (unsigned int)(v49 - (v31 << 6));
                      v45 = ((*(unsigned __int16 *)(a1 + 58) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                      v46 = *(unsigned __int16 *)(a1 + 60) * v45;
                      break;
                    case 2:
                      a3[1] = 0;
                      *a9 = -v54;
                      a9[2] = -(__int16)v31;
                      a9[1] = -v55;
                      a9[3] = -v53;
                      *a3 = -v56;
                      v47 = (v60 - v55) << 6;
                      v48 = (v31 - v54) << 6;
                      *a4 = v47 - v32;
                      a4[1] = v48 - v57;
                      a5[1] = -64 * v54;
                      *a5 = -v32;
                      *(_DWORD *)a6 = 0;
                      *(_DWORD *)(a6 + 4) = -v58;
                      *a7 = v47 - v59;
                      a7[1] = v48 - v34;
                      *(_DWORD *)a8 = -64 * v55;
                      *(_DWORD *)(a8 + 4) = -v34;
                      v45 = ((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                      v46 = v45 * *(unsigned __int16 *)(a1 + 58);
                      break;
                    case 3:
                      a9[1] = v54;
                      a9[2] = -v55;
                      *a9 = -v53;
                      a9[3] = v31;
                      v43 = (v54 - v31) << 6;
                      a3[1] = -v56;
                      *a4 = v43 + v57;
                      *a3 = 0;
                      a4[1] = -v32;
                      *(_DWORD *)(a1 + 20) = v41;
                      *a5 = 0;
                      a5[1] = v32 - (v60 << 6);
                      *(_DWORD *)a6 = v58;
                      *(_DWORD *)(a6 + 4) = 0;
                      *a7 = v43 + v34;
                      a7[1] = -v59;
                      *(_DWORD *)a8 = v34 + ((v54 - 2 * v31) << 6);
                      *(_DWORD *)(a8 + 4) = 0;
                      v44 = *(unsigned __int16 *)(a1 + 60);
                      v45 = ((*(unsigned __int16 *)(a1 + 58) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                      *(_WORD *)(a1 + 64) = ((*(unsigned __int16 *)(a1 + 58) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                      v46 = v44 * v45;
                      *(_DWORD *)(a1 + 16) = v44 * v45;
                      if ( *(_WORD *)(a1 + 94) != 1 )
                      {
                        v42 = v38 + v41;
                        *(_DWORD *)(a1 + 24) = v38;
                        *(_DWORD *)(a1 + 20) = v38 + v41;
                      }
                      v17 = v42;
                      goto LABEL_35;
                    default:
                      return 6146LL;
                  }
                  *(_WORD *)(a1 + 64) = v45;
                  v17 = v41;
                  *(_DWORD *)(a1 + 16) = v46;
                  *(_DWORD *)(a1 + 20) = v41;
                  if ( *(_WORD *)(a1 + 94) != 1 )
                    goto LABEL_33;
                }
                else
                {
                  a9[2] = v54;
                  *a9 = v31;
                  a9[1] = v53;
                  a9[3] = v55;
                  *a3 = v56;
                  a4[1] = v57;
                  *a5 = v32;
                  a5[1] = v31 << 6;
                  a3[1] = 0;
                  *a4 = v32;
                  *(_DWORD *)(a6 + 4) = v58;
                  *(_DWORD *)a6 = 0;
                  *a7 = v59;
                  a7[1] = v34;
                  *(_DWORD *)a8 = v59;
                  *(_DWORD *)(a8 + 4) = v34;
                  v51 = ((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                  v46 = v51 * *(unsigned __int16 *)(a1 + 58);
                  v52 = *(_WORD *)(a1 + 28) == 3;
                  *(_WORD *)(a1 + 64) = ((*(unsigned __int16 *)(a1 + 60) * (unsigned int)v15 + 31) >> 3) & 0xFFFC;
                  *(_DWORD *)(a1 + 16) = v46;
                  if ( !v52 && *(_WORD *)(a1 + 94) == 1 )
                  {
                    LOWORD(v45) = v51;
LABEL_34:
                    *(_DWORD *)(a1 + 20) = v17;
                    goto LABEL_35;
                  }
                  v17 = v41;
                  *(_DWORD *)(a1 + 20) = v41;
                  LOWORD(v45) = v51;
                  if ( *(_WORD *)(a1 + 94) != 1 )
                  {
LABEL_33:
                    v17 = v41 + v38;
                    *(_DWORD *)(a1 + 24) = v38;
                    goto LABEL_34;
                  }
                }
LABEL_35:
                *a10 = v45;
                *a11 = v46;
                *a12 = v17;
                return 0LL;
              }
            }
            return 6149LL;
          }
        }
      }
    }
  }
  return result;
}
