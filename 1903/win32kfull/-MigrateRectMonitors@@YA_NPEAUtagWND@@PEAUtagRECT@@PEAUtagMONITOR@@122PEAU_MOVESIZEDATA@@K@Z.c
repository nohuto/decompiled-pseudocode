/*
 * XREFs of ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01FACA4
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01FDA70 (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01D41EC (ReduceArrangedRectangleByFrameMargin.c)
 *     TransformRectAroundPoint @ 0x1C01E76D4 (TransformRectAroundPoint.c)
 */

bool __fastcall MigrateRectMonitors(
        struct tagWND *a1,
        __m128i *a2,
        struct tagMONITOR *a3,
        struct tagRECT *a4,
        struct tagMONITOR *a5,
        struct tagMONITOR *a6,
        struct _MOVESIZEDATA *a7,
        char a8)
{
  __m128i v8; // xmm7
  __int128 v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  int v14; // esi
  __m128i v15; // xmm0
  int v16; // esi
  int v17; // edi
  __m128i v18; // xmm6
  __m128i v19; // xmm0
  INT v20; // r13d
  INT v21; // r14d
  INT v22; // edx
  INT v23; // r15d
  int v24; // r8d
  int v25; // eax
  INT v26; // esi
  INT v27; // eax
  INT v28; // edx
  INT v29; // r8d
  INT v30; // eax
  INT v31; // ecx
  INT v32; // eax
  int v33; // ecx
  LONG left; // edx
  LONG right; // r9d
  __int64 v36; // r10
  LONG v37; // r11d
  int v38; // esi
  LONG v39; // edx
  LONG v40; // r9d
  int v41; // r14d
  LONG v42; // eax
  int v43; // r13d
  INT v44; // ecx
  LONG v45; // eax
  __int64 v46; // rax
  BOOL v47; // edi
  struct _MOVESIZEDATA *v48; // rcx
  INT v49; // eax
  LONG v50; // eax
  LONG v51; // edx
  int v52; // ecx
  int v53; // r14d
  LONG v54; // eax
  int v55; // r13d
  int v57; // [rsp+38h] [rbp-A1h]
  INT c; // [rsp+40h] [rbp-99h]
  INT c_4; // [rsp+44h] [rbp-95h]
  INT c_8[4]; // [rsp+48h] [rbp-91h] BYREF
  int v61; // [rsp+58h] [rbp-81h]
  INT b; // [rsp+5Ch] [rbp-7Dh]
  __int128 v63; // [rsp+60h] [rbp-79h] BYREF
  __int64 v64; // [rsp+70h] [rbp-69h]
  __int64 v65; // [rsp+78h] [rbp-61h]
  struct tagWND *v66; // [rsp+80h] [rbp-59h]
  struct tagMONITOR *v67; // [rsp+88h] [rbp-51h]
  struct tagMONITOR *v68; // [rsp+90h] [rbp-49h]
  __m128i v69; // [rsp+98h] [rbp-41h] BYREF

  v8 = *a2;
  v66 = a1;
  v68 = a3;
  v69 = v8;
  v67 = a5;
  v11 = *GetMonitorWorkRectForWindow(c_8, (__int64)a3, a1);
  v12 = *((_QWORD *)a1 + 5);
  v63 = v11;
  if ( (*(_BYTE *)(v12 + 233) & 3) != 0 )
  {
    ReduceArrangedRectangleByFrameMargin((__int64)a1, &v63, v69.m128i_i32);
    v8 = v69;
  }
  v64 = v8.m128i_i64[0];
  v13 = _mm_srli_si128(v8, 8);
  v14 = _mm_cvtsi128_si32(v13);
  v65 = v13.m128i_i64[0];
  v15 = _mm_srli_si128(v8, 12);
  v16 = v14 - v8.m128i_i32[0];
  v17 = _mm_cvtsi128_si32(v15) - v69.m128i_i32[1];
  c = DWORD2(v63) - v63;
  v61 = _mm_cvtsi128_si32(v15);
  c_4 = HIDWORD(v63) - DWORD1(v63);
  if ( a6 )
  {
    v18 = *(__m128i *)GetMonitorWorkRectForWindow(c_8, (__int64)a6, a1);
    v19 = *(__m128i *)GetMonitorWorkRectForWindow(c_8, (__int64)a5, a1);
    *(_QWORD *)c_8 = v19.m128i_i64[0];
    *(_QWORD *)&c_8[2] = __PAIR64__(
                           _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)),
                           _mm_cvtsi128_si32(_mm_srli_si128(v19, 8)));
  }
  else
  {
    *(_OWORD *)c_8 = *GetMonitorWorkRectForWindow(c_8, (__int64)a5, a1);
  }
  v20 = c_8[2];
  v21 = c_8[0];
  v22 = c_8[2] - c_8[0];
  v23 = c_8[3] - c_8[1];
  b = c_8[2] - c_8[0];
  if ( c_8[2] - c_8[0] >= v16 )
  {
    v24 = a8 & 1;
    if ( (a8 & 1) == 0 && v23 < v17 )
    {
      v57 = a8 & 0x20;
      goto LABEL_39;
    }
    v25 = v65;
    *a4 = (struct tagRECT)v8;
    if ( v25 <= SDWORD2(v63) && ((a8 & 1) != 0 || v61 <= SHIDWORD(v63)) )
    {
      if ( c == v16 )
      {
        v26 = 0;
      }
      else
      {
        v27 = EngMulDiv(v64 - v63, v22 - v16, c - v16);
        v24 = a8 & 1;
        v26 = v27;
      }
      if ( !v24 && c_4 != v17 )
      {
        v28 = v23 - v17;
        v29 = c_4 - v17;
LABEL_22:
        v32 = EngMulDiv(v69.m128i_i32[1] - DWORD1(v63), v28, v29);
        v24 = a8 & 1;
        v31 = v32;
LABEL_23:
        v33 = c_8[1] + v31 - v69.m128i_i32[1];
        left = a4->left;
        right = a4->right;
        v36 = v64;
        v37 = v33 + a4->top;
        a4->bottom += v33;
        v38 = v21 + v26 - v36;
        a4->top = v37;
        v39 = v38 + left;
        v40 = v38 + right;
        a4->left = v39;
        a4->right = v40;
        if ( (a8 & 4) != 0 )
        {
          v41 = v21 - v39;
          a4->left = v39 + v41;
          v42 = v40 + v41;
        }
        else
        {
          if ( (a8 & 2) == 0 )
          {
LABEL_28:
            if ( v24 )
            {
              if ( (a8 & 8) != 0 || (v44 = *((_DWORD *)a7 + 29), v45 = v44 + v37, v23 < v44) )
                v45 = c_8[3];
              a4->bottom = v45;
            }
            v46 = *(_QWORD *)&a4->left - v36;
            if ( *(_QWORD *)&a4->left == v36 )
              v46 = *(_QWORD *)&a4->right - v65;
            v47 = v46 != 0;
            goto LABEL_61;
          }
          v43 = v20 - v40;
          a4->left = v39 + v43;
          v42 = v40 + v43;
        }
        a4->right = v42;
        goto LABEL_28;
      }
    }
    else
    {
      v30 = EngMulDiv(v64 - v63, v22, c);
      v24 = a8 & 1;
      v26 = v30;
      if ( (a8 & 1) == 0 )
      {
        v29 = c_4;
        v28 = v23;
        goto LABEL_22;
      }
    }
    v31 = 0;
    goto LABEL_23;
  }
  v16 = EngMulDiv(v16, v22, c);
  v57 = a8 & 0x20;
  if ( (a8 & 0x20) != 0 )
  {
    v57 = a8 & 0x20;
    if ( v16 <= *((_DWORD *)a7 + 26) )
    {
      v16 = *((_DWORD *)a7 + 26);
      v57 = a8 & 0x20;
    }
  }
LABEL_39:
  v61 = a8 & 1;
  if ( (a8 & 1) != 0 )
  {
    v17 = v23;
LABEL_41:
    v48 = a7;
    goto LABEL_42;
  }
  if ( v23 >= v17 )
    goto LABEL_41;
  v17 = EngMulDiv(v17, v23, c_4);
  if ( !v57 )
    goto LABEL_41;
  v48 = a7;
  if ( v17 <= *((_DWORD *)a7 + 27) )
    v17 = *((_DWORD *)a7 + 27);
LABEL_42:
  if ( (a8 & 8) != 0
    || v16 < *((_DWORD *)v48 + 26)
    || v16 > *((_DWORD *)v48 + 28)
    || v17 < *((_DWORD *)v48 + 27)
    || v17 > *((_DWORD *)v48 + 29) )
  {
    LOBYTE(v47) = 0;
    return v47;
  }
  b = EngMulDiv(v64 - v63, b, c);
  if ( v61 )
    v49 = 0;
  else
    v49 = EngMulDiv(v69.m128i_i32[1] - DWORD1(v63), v23, c_4);
  v50 = c_8[1] + v49;
  v51 = v21 + b;
  a4->top = v50;
  a4->left = v51;
  a4->bottom = v17 + v50;
  v52 = v51 + v16;
  a4->right = v51 + v16;
  if ( (a8 & 4) != 0 )
  {
    v53 = v21 - v51;
    a4->left = v51 + v53;
    v54 = v52 + v53;
LABEL_59:
    a4->right = v54;
    goto LABEL_60;
  }
  if ( (a8 & 2) != 0 )
  {
    v55 = v20 - v52;
    a4->left = v51 + v55;
    v54 = v52 + v55;
    goto LABEL_59;
  }
LABEL_60:
  v47 = 1;
LABEL_61:
  if ( v47 && (*(_DWORD *)(*((_QWORD *)v66 + 5) + 288LL) & 0xF) == 2 && (a8 & 0x10) != 0 )
  {
    *(struct tagRECT *)c_8 = *a4;
    TransformRectAroundPoint(
      c_8,
      *(_WORD *)(*((_QWORD *)v68 + 5) + 64LL),
      0LL,
      a4,
      *(_WORD *)(*((_QWORD *)v67 + 5) + 64LL),
      *(__int64 *)c_8);
  }
  return v47;
}
