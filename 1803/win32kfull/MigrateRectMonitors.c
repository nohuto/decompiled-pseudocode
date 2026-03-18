/*
 * XREFs of MigrateRectMonitors @ 0x1C01C57E8
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01C6F94 (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C019EEE4 (ReduceArrangedRectangleByFrameMargin.c)
 *     TransformRectAroundPoint @ 0x1C01AFCE4 (TransformRectAroundPoint.c)
 */

_BOOL8 __fastcall MigrateRectMonitors(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
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
  int v34; // r9d
  int v35; // r10d
  int v36; // edi
  __int64 v37; // r11
  int v38; // edx
  int v39; // esi
  int v40; // esi
  int v41; // r9d
  int v42; // r10d
  int v43; // r14d
  int v44; // eax
  int v45; // r13d
  INT v46; // ecx
  INT v47; // eax
  __int64 v48; // rax
  BOOL v49; // edi
  _DWORD *v50; // rcx
  INT v51; // eax
  int v52; // edx
  int v53; // r8d
  int v54; // ecx
  int v55; // r14d
  int v56; // eax
  int v57; // r13d
  int v59; // [rsp+38h] [rbp-A1h]
  INT c; // [rsp+40h] [rbp-99h]
  INT c_4; // [rsp+44h] [rbp-95h]
  INT c_8[4]; // [rsp+48h] [rbp-91h] BYREF
  int v63; // [rsp+58h] [rbp-81h]
  INT b; // [rsp+5Ch] [rbp-7Dh]
  __int128 v65; // [rsp+60h] [rbp-79h] BYREF
  __int64 v66; // [rsp+70h] [rbp-69h]
  __int64 v67; // [rsp+78h] [rbp-61h]
  __int64 v68; // [rsp+80h] [rbp-59h]
  __int64 v69; // [rsp+88h] [rbp-51h]
  __int64 v70; // [rsp+90h] [rbp-49h]
  __m128i v71; // [rsp+98h] [rbp-41h] BYREF

  v8 = *a2;
  v68 = a1;
  v70 = a3;
  v71 = v8;
  v69 = a5;
  v11 = *GetMonitorWorkRectForWindow(c_8, a3, (const struct tagWND *)a1);
  v12 = *(_QWORD *)(a1 + 40);
  v65 = v11;
  if ( (*(_BYTE *)(v12 + 233) & 3) != 0 )
  {
    ReduceArrangedRectangleByFrameMargin(a1, &v65, v71.m128i_i32);
    v8 = v71;
  }
  v66 = v8.m128i_i64[0];
  v13 = _mm_srli_si128(v8, 8);
  v14 = _mm_cvtsi128_si32(v13);
  v67 = v13.m128i_i64[0];
  v15 = _mm_srli_si128(v8, 12);
  v16 = v14 - v8.m128i_i32[0];
  v17 = _mm_cvtsi128_si32(v15) - v71.m128i_i32[1];
  c = DWORD2(v65) - v65;
  v63 = _mm_cvtsi128_si32(v15);
  c_4 = HIDWORD(v65) - DWORD1(v65);
  if ( a6 )
  {
    v18 = *(__m128i *)GetMonitorWorkRectForWindow(c_8, a6, (const struct tagWND *)a1);
    v19 = *(__m128i *)GetMonitorWorkRectForWindow(c_8, a5, (const struct tagWND *)a1);
    *(_QWORD *)c_8 = v19.m128i_i64[0];
    *(_QWORD *)&c_8[2] = __PAIR64__(
                           _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)),
                           _mm_cvtsi128_si32(_mm_srli_si128(v19, 8)));
  }
  else
  {
    *(_OWORD *)c_8 = *GetMonitorWorkRectForWindow(c_8, a5, (const struct tagWND *)a1);
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
      v59 = a8 & 0x20;
      goto LABEL_39;
    }
    v25 = v67;
    *(__m128i *)a4 = v8;
    if ( v25 <= SDWORD2(v65) && ((a8 & 1) != 0 || v63 <= SHIDWORD(v65)) )
    {
      if ( c == v16 )
      {
        v26 = 0;
      }
      else
      {
        v27 = EngMulDiv(v66 - v65, v22 - v16, c - v16);
        v24 = a8 & 1;
        v26 = v27;
      }
      if ( !v24 && c_4 != v17 )
      {
        v28 = v23 - v17;
        v29 = c_4 - v17;
LABEL_22:
        v32 = EngMulDiv(v71.m128i_i32[1] - DWORD1(v65), v28, v29);
        v24 = a8 & 1;
        v31 = v32;
LABEL_23:
        v33 = c_8[1] + v31 - v71.m128i_i32[1];
        v34 = *a4;
        v35 = a4[2];
        v36 = v33 + a4[3];
        v37 = v66;
        v38 = v33 + a4[1];
        v39 = v26 - v66;
        a4[3] = v36;
        v40 = v21 + v39;
        a4[1] = v38;
        v41 = v40 + v34;
        v42 = v40 + v35;
        *a4 = v41;
        a4[2] = v42;
        if ( (a8 & 4) != 0 )
        {
          v43 = v21 - v41;
          *a4 = v41 + v43;
          v44 = v42 + v43;
        }
        else
        {
          if ( (a8 & 2) == 0 )
          {
LABEL_28:
            if ( v24 )
            {
              if ( (a8 & 8) != 0 || (v46 = a7[29], v47 = v46 + v38, v23 < v46) )
                v47 = c_8[3];
              a4[3] = v47;
            }
            v48 = *(_QWORD *)a4 - v37;
            if ( *(_QWORD *)a4 == v37 )
              v48 = *((_QWORD *)a4 + 1) - v67;
            v49 = v48 != 0;
            goto LABEL_61;
          }
          v45 = v20 - v42;
          *a4 = v41 + v45;
          v44 = v42 + v45;
        }
        a4[1] = v38;
        a4[3] = v36;
        a4[2] = v44;
        goto LABEL_28;
      }
    }
    else
    {
      v30 = EngMulDiv(v66 - v65, v22, c);
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
  v59 = a8 & 0x20;
  if ( (a8 & 0x20) != 0 )
  {
    v59 = a8 & 0x20;
    if ( v16 <= a7[26] )
    {
      v16 = a7[26];
      v59 = a8 & 0x20;
    }
  }
LABEL_39:
  v63 = a8 & 1;
  if ( (a8 & 1) != 0 )
  {
    v17 = v23;
LABEL_41:
    v50 = a7;
    goto LABEL_42;
  }
  if ( v23 >= v17 )
    goto LABEL_41;
  v17 = EngMulDiv(v17, v23, c_4);
  if ( !v59 )
    goto LABEL_41;
  v50 = a7;
  if ( v17 <= a7[27] )
    v17 = a7[27];
LABEL_42:
  if ( (a8 & 8) != 0 || v16 < v50[26] || v16 > v50[28] || v17 < v50[27] || v17 > v50[29] )
    return 0;
  b = EngMulDiv(v66 - v65, b, c);
  if ( v63 )
    v51 = 0;
  else
    v51 = EngMulDiv(v71.m128i_i32[1] - DWORD1(v65), v23, c_4);
  v52 = v21 + b;
  v53 = v51 + c_8[1];
  *a4 = v21 + b;
  a4[1] = v53;
  v54 = v52 + v16;
  a4[2] = v52 + v16;
  a4[3] = v53 + v17;
  if ( (a8 & 4) != 0 )
  {
    v55 = v21 - v52;
    *a4 = v52 + v55;
    v56 = v54 + v55;
LABEL_59:
    a4[1] = v53;
    a4[3] = v53 + v17;
    a4[2] = v56;
    goto LABEL_60;
  }
  if ( (a8 & 2) != 0 )
  {
    v57 = v20 - v54;
    *a4 = v52 + v57;
    v56 = v54 + v57;
    goto LABEL_59;
  }
LABEL_60:
  v49 = 1;
LABEL_61:
  if ( v49 && (*(_DWORD *)(*(_QWORD *)(v68 + 40) + 288LL) & 0xF) == 2 && (a8 & 0x10) != 0 )
  {
    *(_OWORD *)c_8 = *(_OWORD *)a4;
    TransformRectAroundPoint(
      c_8,
      *(_WORD *)(*(_QWORD *)(v70 + 40) + 64LL),
      0LL,
      a4,
      *(_WORD *)(*(_QWORD *)(v69 + 40) + 64LL),
      *(__int64 *)c_8);
  }
  return v49;
}
