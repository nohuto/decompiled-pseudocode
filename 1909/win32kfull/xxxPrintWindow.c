/*
 * XREFs of xxxPrintWindow @ 0x1C01E97EC
 * Callers:
 *     NtUserPrintWindow @ 0x1C02329A0 (NtUserPrintWindow.c)
 * Callees:
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     GetRedirectionFlags @ 0x1C0031860 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C003B1B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     ThreadLockExchangeAlways @ 0x1C00F9B60 (ThreadLockExchangeAlways.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D1F0 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, __int64 a3)
{
  char v4; // bl
  __int64 ThreadWin32Thread; // rax
  _DWORD *v6; // rdx
  int v7; // esi
  int v8; // r12d
  int v9; // r14d
  int v10; // r13d
  int v11; // r15d
  struct tagWND *StyleWindow; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // r8
  int v23; // eax
  HDC DCEx; // rbx
  __int128 v26; // [rsp+60h] [rbp-29h] BYREF
  __int64 v27; // [rsp+70h] [rbp-19h] BYREF
  int v28; // [rsp+78h] [rbp-11h]
  int v29; // [rsp+7Ch] [rbp-Dh]
  __int64 v30; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+88h] [rbp-1h]
  __int64 v32; // [rsp+90h] [rbp+7h] BYREF
  struct tagWND *v33; // [rsp+98h] [rbp+Fh]
  __int64 v34; // [rsp+A0h] [rbp+17h]
  int v36; // [rsp+100h] [rbp+77h]

  v36 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v4 = a3;
  v34 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  v32 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
  v33 = a1;
  HMLockObject(a1);
  v6 = (_DWORD *)*((_QWORD *)a1 + 5);
  v7 = v4 & 1;
  if ( (v4 & 1) != 0 )
  {
    v8 = v6[26] - v6[22];
    v9 = v6[28] - v6[26];
    v10 = v6[27] - v6[23];
    v11 = v6[29] - v6[27];
  }
  else
  {
    v8 = 0;
    v9 = v6[24] - v6[22];
    v10 = 0;
    v11 = v6[25] - v6[23];
  }
  if ( (v4 & 2) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2568), (v14 = (__int64)StyleWindow) != 0) )
  {
    if ( StyleWindow != a1 )
    {
      v15 = *((_QWORD *)a1 + 5);
      if ( v7 )
        v16 = *(_OWORD *)(v15 + 104);
      else
        v16 = *(_OWORD *)(v15 + 88);
      v17 = *(_QWORD *)(v14 + 40);
      v26 = v16;
      v18 = *(__m128i *)(v17 + 88);
      LODWORD(v17) = _mm_cvtsi128_si32(v18);
      HIDWORD(v26) -= v18.m128i_i32[1];
      DWORD1(v26) -= v18.m128i_i32[1];
      LODWORD(v26) = v26 - v17;
      DWORD2(v26) -= v17;
      v28 = v18.m128i_i32[2] - v17;
      v29 = v18.m128i_i32[3] - v18.m128i_i32[1];
      v27 = 0LL;
      v21 = IntersectRect(&v30, (int *)&v27, (int *)&v26);
      if ( !v21 )
        goto LABEL_23;
      a1 = (struct tagWND *)v14;
      v10 = HIDWORD(v30);
      v9 = v31 - v30;
      v11 = HIDWORD(v31) - HIDWORD(v30);
      ThreadLockExchangeAlways(v14, (__int64)&v32);
    }
    if ( gdwInAtomicOperation )
    {
      v13 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v13);
    v21 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)a1, v10, v9, v11);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      v23 = SetRedirectedWindow(a1, 8);
      v20 = *((_QWORD *)a1 + 5);
      if ( v23 < 0 )
      {
        v21 = (*(unsigned __int8 *)(v20 + 26) >> 5) & 1;
        goto LABEL_23;
      }
      *(_DWORD *)(v20 + 232) |= 4u;
      v36 = 1;
    }
    xxxInternalUpdateWindow(a1, 1u);
    v21 = 1;
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v9, v11, DCEx, v8, v10, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v36 )
    {
      v20 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v20 & 4) != 0 )
      {
        UnsetRedirectedWindow(a1, 8);
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
      }
    }
  }
LABEL_23:
  ThreadUnlock1(v20, v19, v22);
  return v21;
}
