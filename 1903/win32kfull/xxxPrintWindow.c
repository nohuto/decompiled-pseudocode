/*
 * XREFs of xxxPrintWindow @ 0x1C01E996C
 * Callers:
 *     NtUserPrintWindow @ 0x1C0232FC0 (NtUserPrintWindow.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     GetRedirectionFlags @ 0x1C002B3F0 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     ThreadLockExchangeAlways @ 0x1C011EE8C (ThreadLockExchangeAlways.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D920 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 ThreadWin32Thread; // rax
  _DWORD *v7; // rdx
  int v8; // esi
  int v9; // r12d
  int v10; // r14d
  int v11; // r13d
  int v12; // r15d
  struct tagWND *StyleWindow; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // esi
  __int64 v23; // r8
  int v24; // eax
  HDC DCEx; // rbx
  __int128 v27; // [rsp+60h] [rbp-29h] BYREF
  __int64 v28; // [rsp+70h] [rbp-19h] BYREF
  int v29; // [rsp+78h] [rbp-11h]
  int v30; // [rsp+7Ch] [rbp-Dh]
  __int64 v31; // [rsp+80h] [rbp-9h] BYREF
  __int64 v32; // [rsp+88h] [rbp-1h]
  __int64 v33; // [rsp+90h] [rbp+7h] BYREF
  struct tagWND *v34; // [rsp+98h] [rbp+Fh]
  __int64 v35; // [rsp+A0h] [rbp+17h]
  int v37; // [rsp+100h] [rbp+77h]

  v37 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v5 = a3;
  v35 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  v33 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v33;
  v34 = a1;
  HMLockObject(a1);
  v7 = (_DWORD *)*((_QWORD *)a1 + 5);
  v8 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    v9 = v7[26] - v7[22];
    v10 = v7[28] - v7[26];
    v11 = v7[27] - v7[23];
    v12 = v7[29] - v7[27];
  }
  else
  {
    v9 = 0;
    v10 = v7[24] - v7[22];
    v11 = 0;
    v12 = v7[25] - v7[23];
  }
  if ( (v5 & 2) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2568), (v15 = (__int64)StyleWindow) != 0) )
  {
    if ( StyleWindow != a1 )
    {
      v16 = *((_QWORD *)a1 + 5);
      if ( v8 )
        v17 = *(_OWORD *)(v16 + 104);
      else
        v17 = *(_OWORD *)(v16 + 88);
      v18 = *(_QWORD *)(v15 + 40);
      v27 = v17;
      v19 = *(__m128i *)(v18 + 88);
      LODWORD(v18) = _mm_cvtsi128_si32(v19);
      HIDWORD(v27) -= v19.m128i_i32[1];
      DWORD1(v27) -= v19.m128i_i32[1];
      LODWORD(v27) = v27 - v18;
      DWORD2(v27) -= v18;
      v29 = v19.m128i_i32[2] - v18;
      v30 = v19.m128i_i32[3] - v19.m128i_i32[1];
      v28 = 0LL;
      v22 = IntersectRect(&v31, (int *)&v28, (int *)&v27);
      if ( !v22 )
        goto LABEL_23;
      a1 = (struct tagWND *)v15;
      v11 = HIDWORD(v31);
      v10 = v32 - v31;
      v12 = HIDWORD(v32) - HIDWORD(v31);
      ThreadLockExchangeAlways(v15, (__int64)&v33);
    }
    if ( gdwInAtomicOperation )
    {
      v14 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v14);
    v22 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)a1, v11, v10, v12);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      v24 = SetRedirectedWindow(a1, 8);
      v21 = *((_QWORD *)a1 + 5);
      if ( v24 < 0 )
      {
        v22 = (*(unsigned __int8 *)(v21 + 26) >> 5) & 1;
        goto LABEL_23;
      }
      *(_DWORD *)(v21 + 232) |= 4u;
      v37 = 1;
    }
    xxxInternalUpdateWindow(a1, 1u);
    v22 = 1;
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v10, v12, DCEx, v9, v11, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v37 )
    {
      v21 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v21 & 4) != 0 )
      {
        UnsetRedirectedWindow(a1, 8);
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
      }
    }
  }
LABEL_23:
  ThreadUnlock1(v21, v20, v23);
  return v22;
}
