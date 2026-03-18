/*
 * XREFs of xxxPrintWindow @ 0x1C01B1C10
 * Callers:
 *     NtUserPrintWindow @ 0x1C01F3850 (NtUserPrintWindow.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     GetRedirectionFlags @ 0x1C007D1C4 (GetRedirectionFlags.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C023CE98 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, unsigned int a3)
{
  _DWORD *v3; // r9
  int v5; // edi
  int v6; // r12d
  int v7; // r14d
  int v8; // r13d
  int v9; // r15d
  struct tagWND *StyleWindow; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagWND *v14; // rbx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rcx
  HDC DCEx; // rbx
  __int128 v24; // [rsp+68h] [rbp-9h] BYREF
  __int64 v25; // [rsp+78h] [rbp+7h] BYREF
  int v26; // [rsp+80h] [rbp+Fh]
  int v27; // [rsp+84h] [rbp+13h]
  int v28; // [rsp+88h] [rbp+17h] BYREF
  int v29; // [rsp+8Ch] [rbp+1Bh]
  int v30; // [rsp+90h] [rbp+1Fh]
  int v31; // [rsp+94h] [rbp+23h]
  int v34; // [rsp+F0h] [rbp+7Fh]

  v34 = 0;
  v3 = (_DWORD *)*((_QWORD *)a1 + 5);
  v5 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v6 = v3[26] - v3[22];
    v7 = v3[28] - v3[26];
    v8 = v3[27] - v3[23];
    v9 = v3[29] - v3[27];
  }
  else
  {
    v6 = 0;
    v7 = v3[24] - v3[22];
    v8 = 0;
    v9 = v3[25] - v3[23];
  }
  if ( (a3 & 2) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2568), (v14 = StyleWindow) != 0LL) )
  {
    if ( StyleWindow != a1 )
    {
      v15 = *((_QWORD *)a1 + 5);
      if ( v5 )
        v16 = *(_OWORD *)(v15 + 104);
      else
        v16 = *(_OWORD *)(v15 + 88);
      v17 = *((_QWORD *)v14 + 5);
      v24 = v16;
      v18 = *(__m128i *)(v17 + 88);
      LODWORD(v17) = _mm_cvtsi128_si32(v18);
      HIDWORD(v24) -= v18.m128i_i32[1];
      DWORD1(v24) -= v18.m128i_i32[1];
      LODWORD(v24) = v24 - v17;
      DWORD2(v24) -= v17;
      v26 = v18.m128i_i32[2] - v17;
      v27 = v18.m128i_i32[3] - v18.m128i_i32[1];
      v25 = 0LL;
      v19 = IntersectRect(&v28, (int *)&v25, (int *)&v24);
      if ( !v19 )
        return v19;
      v6 = v28;
      v7 = v30 - v28;
      v8 = v29;
      v9 = v31 - v29;
    }
    if ( gdwInAtomicOperation )
    {
      v11 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v11, gdwInAtomicOperation, v12, v13);
    v19 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)v14, a3, a2, v6, v8, v7, v9);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      v20 = SetRedirectedWindow(a1, 8);
      v21 = *((_QWORD *)a1 + 5);
      if ( v20 < 0 )
        return (*(unsigned __int8 *)(v21 + 26) >> 5) & 1;
      *(_DWORD *)(v21 + 232) |= 4u;
      v34 = 1;
    }
    v19 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v7, v9, DCEx, v6, v8, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v34 && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1, 8);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    }
  }
  return v19;
}
