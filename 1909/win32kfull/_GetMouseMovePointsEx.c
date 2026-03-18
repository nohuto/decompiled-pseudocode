/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01DCAD4
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C022D4A0 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // r14d
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // eax
  unsigned int v21; // esi
  unsigned int v22; // r14d
  __int64 v23; // rbx
  int v24; // ecx
  int v25; // edx
  INT v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __m128i v33; // xmm6
  __int64 v34; // r12
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // [rsp+20h] [rbp-A8h] BYREF
  int v39; // [rsp+28h] [rbp-A0h]
  unsigned int i; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v41; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-90h]
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  __int128 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+58h] [rbp-70h] BYREF
  _OWORD v46[3]; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+E0h] [rbp+18h]

  v48 = a3;
  i = 0;
  v39 = 0;
  v45 = 0LL;
  LODWORD(v43) = *a1;
  HIDWORD(v43) = a1[2];
  v38 = 0LL;
  v41 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3);
  LogicalToPhysicalDPIPoint(&v45, &v43, CurrentThreadDpiAwarenessContext, 0LL);
  if ( gptInd )
    v8 = (gptInd - 1) & 0x3F;
  else
    v8 = 63;
  v9 = v8;
  v44 = *(_OWORD *)(*gpDispInfo + 24LL);
  while ( 1 )
  {
    v10 = 0;
    v11 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v9) >> 16;
    if ( !(_WORD)v11
      || (v12 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v9 + 1) >> 16,
          v7 = (unsigned __int16)v12,
          !(_WORD)v12) )
    {
LABEL_24:
      v19 = v39;
      goto LABEL_25;
    }
    v13 = (unsigned __int16)v11 + 1;
    v7 = (unsigned int)(unsigned __int16)v12 + 1;
    v6 = v13 == DWORD2(v44) - (_DWORD)v44
       ? (unsigned int)*((__int16 *)&gaptMouse + 12 * v9)
       : (DWORD2(v44) - (int)v44) * *((__int16 *)&gaptMouse + 12 * v9) / v13;
    v42 = v6;
    v11 = (unsigned int)(HIDWORD(v44) - DWORD1(v44));
    if ( (_DWORD)v7 == (_DWORD)v11 )
    {
      v15 = *((__int16 *)&gaptMouse + 12 * v9 + 2);
    }
    else
    {
      v14 = v11 * *((__int16 *)&gaptMouse + 12 * v9 + 2);
      v11 = v14 % (unsigned int)v7;
      v15 = v14 / (unsigned int)v7;
    }
    if ( __PAIR64__(v15, v6) == v45 )
      goto LABEL_19;
    if ( (W32GetCurrentThreadDpiAwarenessContext(gaptMouse, v11, v6) & 0xF) != 2 )
    {
      v41 = __PAIR64__(v15, v42);
      v17 = W32GetCurrentThreadDpiAwarenessContext(v16, v11, v6);
      PhysicalToLogicalDPIPoint(&v38, &v41, v17, 0LL);
      if ( v38 == v43 )
        v10 = 1;
    }
    if ( v10 )
    {
LABEL_19:
      v18 = *((_DWORD *)a1 + 2);
      if ( !v18 || v18 == *((_DWORD *)&gaptMouse + 6 * v9 + 2) )
        break;
    }
    if ( v9 )
      v9 = ((_BYTE)v9 - 1) & 0x3F;
    else
      v9 = 63;
    if ( v9 == v8 )
      goto LABEL_24;
  }
  v19 = 1;
LABEL_25:
  if ( v19 )
  {
    v21 = v9 - v8;
    if ( v9 <= v8 )
      v21 += 64;
    if ( v21 >= v48 )
      v21 = v48;
    v22 = 0;
    for ( i = 0; v22 < v21; i = v22 )
    {
      v23 = 3LL * v9;
      v24 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v9));
      v25 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v9 + 1));
      v26 = v25 + 1;
      if ( !(_WORD)v24 || !(_WORD)v25 )
        break;
      LODWORD(v41) = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v9), DWORD2(v44) - v44, v24 + 1);
      HIDWORD(v41) = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v9 + 2), HIDWORD(v44) - DWORD1(v44), v26);
      v30 = W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29);
      PhysicalToLogicalDPIPoint(&v38, &v41, v30, 0LL);
      if ( a4 == 2 )
      {
        v33 = *(__m128i *)GetScreenRect(v46, v31, v32);
        *(__m128i *)((char *)&v46[1] + 8) = v33;
        v34 = v22;
        *(_DWORD *)(a2 + 24LL * v22) = EngMulDiv(
                                         (unsigned __int16)v38,
                                         0x10000,
                                         _mm_cvtsi128_si32(_mm_srli_si128(v33, 8)) - _mm_cvtsi128_si32(v33) - 1);
        *(_DWORD *)(a2 + 24LL * v22 + 4) = EngMulDiv(
                                             WORD2(v38),
                                             0x10000,
                                             _mm_cvtsi128_si32(_mm_srli_si128(v33, 12))
                                           - _mm_cvtsi128_si32(_mm_srli_si128(v33, 4))
                                           - 1);
        v23 = 3LL * v9;
      }
      else
      {
        v34 = v22;
        *(_QWORD *)(a2 + 24LL * v22) = v38;
        v35 = *(_DWORD *)(a2 + 24LL * v22);
        if ( v35 < 0 )
          *(_DWORD *)(a2 + 24LL * v22) = v35 + 0x10000;
        v36 = *(_DWORD *)(a2 + 24LL * v22 + 4);
        if ( v36 < 0 )
          *(_DWORD *)(a2 + 24LL * v22 + 4) = v36 + 0x10000;
      }
      v37 = 3 * v34;
      *(_DWORD *)(a2 + 8 * v37 + 8) = *((_DWORD *)&gaptMouse + 2 * v23 + 2);
      *(_QWORD *)(a2 + 8 * v37 + 16) = *((_QWORD *)&gaptMouse + v23 + 2);
      if ( v9 )
        v9 = ((_BYTE)v9 - 1) & 0x3F;
      else
        v9 = 63;
      ++v22;
    }
    return v22;
  }
  else
  {
    UserSetLastError(1171LL, v11, v6, v7);
    return 0xFFFFFFFFLL;
  }
}
