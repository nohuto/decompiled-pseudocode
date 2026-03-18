/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01C9160
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C0215C30 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // ebx
  int v10; // r14d
  __int64 v11; // r11
  __int64 v12; // rdx
  int v13; // r10d
  unsigned int v14; // eax
  unsigned int v15; // r13d
  __int64 v16; // rcx
  unsigned int v17; // r12d
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned int v23; // r12d
  unsigned int v24; // edi
  int v25; // r9d
  int v26; // ecx
  INT v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r14
  __m128i v33; // xmm6
  INT v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // [rsp+28h] [rbp-90h] BYREF
  INT v40; // [rsp+30h] [rbp-88h] BYREF
  INT v41; // [rsp+34h] [rbp-84h]
  __int64 v42; // [rsp+38h] [rbp-80h] BYREF
  __int128 v43; // [rsp+40h] [rbp-78h]
  _DWORD v44[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128i v45[3]; // [rsp+58h] [rbp-60h] BYREF

  LODWORD(v42) = *a1;
  HIDWORD(v42) = a1[2];
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2);
  LogicalToPhysicalDPIPoint(v44, &v42, CurrentThreadDpiAwarenessContext, 0LL);
  if ( gptInd )
    v8 = (gptInd - 1) & 0x3F;
  else
    v8 = 63;
  v9 = v8;
  v43 = *(_OWORD *)(*gpDispInfo + 24LL);
  while ( 1 )
  {
    v10 = 0;
    v11 = 3LL * v9;
    v45[0].m128i_i64[0] = v11;
    v12 = *((unsigned int *)&gaptMouse + 6 * v9);
    if ( !WORD1(v12) || (v13 = *((_DWORD *)&gaptMouse + 6 * v9 + 1), !HIWORD(v13)) )
    {
LABEL_26:
      v21 = 0;
      goto LABEL_27;
    }
    v6 = (unsigned int)WORD1(v12) + 1;
    v7 = (unsigned int)HIWORD(v13) + 1;
    if ( (_DWORD)v6 == DWORD2(v43) - (_DWORD)v43 )
    {
      v15 = (__int16)v12;
    }
    else
    {
      v14 = (DWORD2(v43) - v43) * (__int16)v12;
      v12 = v14 % (unsigned int)v6;
      v15 = v14 / (unsigned int)v6;
    }
    v16 = (unsigned int)(HIDWORD(v43) - DWORD1(v43));
    if ( (_DWORD)v7 == (_DWORD)v16 )
    {
      v17 = (__int16)v13;
    }
    else
    {
      v12 = (int)v16 * (__int16)v13 % (unsigned int)v7;
      v17 = (int)v16 * (__int16)v13 / (unsigned int)v7;
    }
    if ( v15 != v44[0] || v17 != v44[1] )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v12) & 0xF) != 2 )
      {
        v40 = v15;
        v41 = v17;
        v19 = W32GetCurrentThreadDpiAwarenessContext(v18, v12);
        PhysicalToLogicalDPIPoint(&v39, &v40, v19, 0LL);
        if ( v39 == v42 )
          v10 = 1;
      }
      if ( !v10 )
        goto LABEL_22;
      v11 = v45[0].m128i_i64[0];
    }
    v20 = *((_DWORD *)a1 + 2);
    if ( !v20 || v20 == *((_DWORD *)&gaptMouse + 2 * v11 + 2) )
      break;
LABEL_22:
    if ( v9 )
      v9 = ((_BYTE)v9 - 1) & 0x3F;
    else
      v9 = 63;
    if ( v9 == v8 )
      goto LABEL_26;
  }
  v21 = 1;
LABEL_27:
  if ( !v21 )
  {
    UserSetLastError(1171LL, v12, v6, v7);
    return 0xFFFFFFFFLL;
  }
  v23 = v9 - v8 + 64;
  if ( v9 > v8 )
    v23 = v9 - v8;
  if ( v23 >= a3 )
    v23 = a3;
  v24 = 0;
  while ( 2 )
  {
    if ( v24 < v23 )
    {
      v25 = *((_DWORD *)&gaptMouse + 6 * v9);
      v26 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v9 + 1));
      v27 = v26 + 1;
      if ( HIWORD(v25) )
      {
        if ( (_WORD)v26 )
        {
          v40 = EngMulDiv((__int16)v25, DWORD2(v43) - v43, HIWORD(v25) + 1);
          v41 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v9 + 2), HIDWORD(v43) - DWORD1(v43), v27);
          v30 = W32GetCurrentThreadDpiAwarenessContext(v29, v28);
          PhysicalToLogicalDPIPoint(&v39, &v40, v30, 0LL);
          v32 = v24;
          if ( a4 == 2 )
          {
            v33 = *GetScreenRect(v45, v31);
            *(__m128i *)((char *)&v45[1] + 8) = v33;
            *(_DWORD *)(a2 + 24LL * v24) = EngMulDiv(
                                             (unsigned __int16)v39,
                                             0x10000,
                                             _mm_cvtsi128_si32(_mm_srli_si128(v33, 8)) - _mm_cvtsi128_si32(v33) - 1);
            v34 = EngMulDiv(
                    WORD2(v39),
                    0x10000,
                    _mm_cvtsi128_si32(_mm_srli_si128(v33, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v33, 4)) - 1);
            v35 = 3LL * v24;
            goto LABEL_44;
          }
          *(_QWORD *)(a2 + 24LL * v24) = v39;
          v32 = v24;
          v35 = 3LL * v24;
          v36 = *(_DWORD *)(a2 + 24LL * v24);
          if ( v36 < 0 )
            *(_DWORD *)(a2 + 24LL * v24) = v36 + 0x10000;
          v37 = *(_DWORD *)(a2 + 24LL * v24 + 4);
          if ( v37 < 0 )
          {
            v34 = v37 + 0x10000;
LABEL_44:
            *(_DWORD *)(a2 + 8 * v35 + 4) = v34;
          }
          v38 = 3 * v32;
          *(_DWORD *)(a2 + 8 * v38 + 8) = *((_DWORD *)&gaptMouse + 6 * v9 + 2);
          *(_QWORD *)(a2 + 8 * v38 + 16) = *((_QWORD *)&gaptMouse + 3 * v9 + 2);
          if ( v9 )
            v9 = ((_BYTE)v9 - 1) & 0x3F;
          else
            v9 = 63;
          ++v24;
          continue;
        }
      }
    }
    return v24;
  }
}
