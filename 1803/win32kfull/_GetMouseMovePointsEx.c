/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01A70BC
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C01EF580 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // r11
  __int64 v10; // rdx
  int v11; // r10d
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // eax
  int v15; // r13d
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
  __int64 v31; // r14
  __m128i v32; // xmm6
  INT v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // [rsp+28h] [rbp-A0h] BYREF
  INT v39; // [rsp+30h] [rbp-98h] BYREF
  INT v40; // [rsp+34h] [rbp-94h]
  __int64 v41; // [rsp+38h] [rbp-90h] BYREF
  _DWORD v42[4]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v43; // [rsp+50h] [rbp-78h] BYREF
  __int128 v44; // [rsp+60h] [rbp-68h]
  __m128i v45; // [rsp+70h] [rbp-58h]

  LODWORD(v41) = *a1;
  HIDWORD(v41) = a1[2];
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2);
  LogicalToPhysicalDPIPoint(v42, &v41, CurrentThreadDpiAwarenessContext, 0LL);
  if ( gptInd )
    v6 = (gptInd - 1) & 0x3F;
  else
    v6 = 63;
  v7 = v6;
  v43 = *(_OWORD *)(*gpDispInfo + 24LL);
  v44 = v43;
  while ( 1 )
  {
    v8 = 0;
    v9 = 3LL * v7;
    v45.m128i_i64[0] = v9;
    v10 = *((unsigned int *)&gaptMouse + 6 * v7);
    if ( !WORD1(v10) || (v11 = *((_DWORD *)&gaptMouse + 6 * v7 + 1), !HIWORD(v11)) )
    {
LABEL_26:
      v21 = 0;
      goto LABEL_27;
    }
    v12 = WORD1(v10) + 1;
    v13 = HIWORD(v11) + 1;
    if ( v12 == DWORD2(v43) - (_DWORD)v43 )
    {
      v15 = (__int16)v10;
    }
    else
    {
      v14 = (DWORD2(v43) - v43) * (__int16)v10;
      v10 = v14 % v12;
      v15 = v14 / v12;
    }
    v16 = (unsigned int)(HIDWORD(v43) - DWORD1(v43));
    if ( v13 == (_DWORD)v16 )
    {
      v17 = (__int16)v11;
    }
    else
    {
      v10 = (int)v16 * (__int16)v11 % v13;
      v17 = (int)v16 * (__int16)v11 / v13;
    }
    if ( v15 != v42[0] || v17 != v42[1] )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v10) & 0xF) != 2 )
      {
        v39 = v15;
        v40 = v17;
        v19 = W32GetCurrentThreadDpiAwarenessContext(v18, v10);
        PhysicalToLogicalDPIPoint(&v38, &v39, v19, 0LL);
        if ( v38 == v41 )
          v8 = 1;
      }
      if ( !v8 )
        goto LABEL_22;
      v9 = v45.m128i_i64[0];
    }
    v20 = *((_DWORD *)a1 + 2);
    if ( !v20 || v20 == *((_DWORD *)&gaptMouse + 2 * v9 + 2) )
      break;
LABEL_22:
    if ( v7 )
      v7 = ((_BYTE)v7 - 1) & 0x3F;
    else
      v7 = 63;
    if ( v7 == v6 )
      goto LABEL_26;
  }
  v21 = 1;
LABEL_27:
  if ( !v21 )
  {
    UserSetLastError(1171LL, v10);
    return 0xFFFFFFFFLL;
  }
  v23 = v7 - v6 + 64;
  if ( v7 > v6 )
    v23 = v7 - v6;
  if ( v23 >= a3 )
    v23 = a3;
  v24 = 0;
  while ( 2 )
  {
    if ( v24 < v23 )
    {
      v25 = *((_DWORD *)&gaptMouse + 6 * v7);
      v26 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v7 + 1));
      v27 = v26 + 1;
      if ( HIWORD(v25) )
      {
        if ( (_WORD)v26 )
        {
          v39 = EngMulDiv((__int16)v25, DWORD2(v44) - v44, HIWORD(v25) + 1);
          v40 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v7 + 2), HIDWORD(v44) - DWORD1(v44), v27);
          v30 = W32GetCurrentThreadDpiAwarenessContext(v29, v28);
          PhysicalToLogicalDPIPoint(&v38, &v39, v30, 0LL);
          v31 = v24;
          if ( a4 == 2 )
          {
            v32 = *(__m128i *)GetScreenRect(&v43);
            v45 = v32;
            *(_DWORD *)(a2 + 24LL * v24) = EngMulDiv(
                                             (unsigned __int16)v38,
                                             0x10000,
                                             _mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) - _mm_cvtsi128_si32(v32) - 1);
            v33 = EngMulDiv(
                    WORD2(v38),
                    0x10000,
                    _mm_cvtsi128_si32(_mm_srli_si128(v32, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v32, 4)) - 1);
            v34 = 3LL * v24;
            goto LABEL_44;
          }
          *(_QWORD *)(a2 + 24LL * v24) = v38;
          v31 = v24;
          v34 = 3LL * v24;
          v35 = *(_DWORD *)(a2 + 24LL * v24);
          if ( v35 < 0 )
            *(_DWORD *)(a2 + 24LL * v24) = v35 + 0x10000;
          v36 = *(_DWORD *)(a2 + 24LL * v24 + 4);
          if ( v36 < 0 )
          {
            v33 = v36 + 0x10000;
LABEL_44:
            *(_DWORD *)(a2 + 8 * v34 + 4) = v33;
          }
          v37 = 3 * v31;
          *(_DWORD *)(a2 + 8 * v37 + 8) = *((_DWORD *)&gaptMouse + 6 * v7 + 2);
          *(_QWORD *)(a2 + 8 * v37 + 16) = *((_QWORD *)&gaptMouse + 3 * v7 + 2);
          if ( v7 )
            v7 = ((_BYTE)v7 - 1) & 0x3F;
          else
            v7 = 63;
          ++v24;
          continue;
        }
      }
    }
    return v24;
  }
}
