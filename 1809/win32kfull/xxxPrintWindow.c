/*
 * XREFs of xxxPrintWindow @ 0x1C01D43EC
 * Callers:
 *     NtUserPrintWindow @ 0x1C021AF10 (NtUserPrintWindow.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GetRedirectionFlags @ 0x1C0074038 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C02542F8 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, unsigned int a3)
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
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // esi
  int v24; // eax
  HDC DCEx; // rbx
  __int128 v27; // [rsp+68h] [rbp-29h] BYREF
  __int64 v28; // [rsp+78h] [rbp-19h] BYREF
  int v29; // [rsp+80h] [rbp-11h]
  int v30; // [rsp+84h] [rbp-Dh]
  int v31; // [rsp+88h] [rbp-9h] BYREF
  int v32; // [rsp+8Ch] [rbp-5h]
  int v33; // [rsp+90h] [rbp-1h]
  int v34; // [rsp+94h] [rbp+3h]
  _QWORD v35[10]; // [rsp+98h] [rbp+7h] BYREF
  int v36; // [rsp+F8h] [rbp+67h]

  v36 = 0;
  v4 = a3;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v35[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v35;
  v35[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
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
    && (StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2568), (v16 = (__int64)StyleWindow) != 0) )
  {
    if ( StyleWindow != a1 )
    {
      v17 = *((_QWORD *)a1 + 5);
      if ( v7 )
        v18 = *(_OWORD *)(v17 + 104);
      else
        v18 = *(_OWORD *)(v17 + 88);
      v19 = *(_QWORD *)(v16 + 40);
      v27 = v18;
      v20 = *(__m128i *)(v19 + 88);
      LODWORD(v19) = _mm_cvtsi128_si32(v20);
      HIDWORD(v27) -= v20.m128i_i32[1];
      DWORD1(v27) -= v20.m128i_i32[1];
      LODWORD(v27) = v27 - v19;
      DWORD2(v27) -= v19;
      v29 = v20.m128i_i32[2] - v19;
      v30 = v20.m128i_i32[3] - v20.m128i_i32[1];
      v28 = 0LL;
      v23 = IntersectRect(&v31, (int *)&v28, (int *)&v27);
      if ( !v23 )
        goto LABEL_23;
      v8 = v31;
      a1 = (struct tagWND *)v16;
      v10 = v32;
      v9 = v33 - v31;
      v11 = v34 - v32;
      ThreadLockExchangeAlways(v16, (__int64)v35);
    }
    if ( gdwInAtomicOperation )
    {
      v13 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation, v14, v15);
    v23 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)a1, a3, a2, v8, v10, v9, v11);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      v24 = SetRedirectedWindow(a1, 8);
      v22 = *((_QWORD *)a1 + 5);
      if ( v24 < 0 )
      {
        v23 = (*(unsigned __int8 *)(v22 + 26) >> 5) & 1;
        goto LABEL_23;
      }
      *(_DWORD *)(v22 + 232) |= 4u;
      v36 = 1;
    }
    xxxInternalUpdateWindow(a1, 1u);
    v23 = 1;
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v9, v11, DCEx, v8, v10, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v36 )
    {
      v22 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v22 & 4) != 0 )
      {
        UnsetRedirectedWindow(a1, 8);
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
      }
    }
  }
LABEL_23:
  ThreadUnlock1(v22, v21);
  return v23;
}
