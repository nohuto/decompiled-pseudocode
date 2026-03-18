/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C01BF838
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C01F5340 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UpdateCheckpoint @ 0x1C00669AC (UpdateCheckpoint.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx
  __m128i v12; // xmm6
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rbx
  __m128i v18; // xmm6
  __int128 *MonitorRect; // rax
  __int128 v20; // xmm0
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char v24; // dl
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF

  result = UpdateCheckpoint((__int64)a1);
  v9 = result;
  if ( result )
  {
    if ( a3 )
    {
      *(struct tagRECT *)result = *a3;
      if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
      {
        v11 = MonitorFromRect(a3, 1LL, 0LL, v10);
        v12 = *(__m128i *)GetMonitorWorkRect(&v25, v11);
        v13 = *(_QWORD *)GetMonitorRect(&v25, v11);
        v14 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) - HIDWORD(v13);
        *(_DWORD *)(v9 + 12) += v14;
        v15 = _mm_cvtsi128_si32(v12) - v13;
        *(_DWORD *)v9 += v15;
        *(_DWORD *)(v9 + 8) += v15;
        *(_DWORD *)(v9 + 4) += v14;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v23 = *(_DWORD *)(v9 + 48) & 0xFFFFFFDF;
      *(_DWORD *)(v9 + 48) = v23;
      v22 = v23 & 0xFFFFFFFE;
    }
    else
    {
      *(_QWORD *)(v9 + 32) = *a4;
      if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
      {
        v17 = MonitorFromRect((struct tagRECT *)v9, 1LL, 0LL, v16);
        v18 = *(__m128i *)GetMonitorWorkRect(&v25, v17);
        MonitorRect = GetMonitorRect(&v25, v17);
        v20 = *MonitorRect;
        *(_DWORD *)(v9 + 32) += _mm_cvtsi128_si32(v18) - *MonitorRect;
        *(_DWORD *)(v9 + 36) += _mm_cvtsi128_si32(_mm_srli_si128(v18, 4)) - DWORD1(v20);
      }
      v21 = *(_DWORD *)(v9 + 48) | 1;
      *(_DWORD *)(v9 + 48) = v21;
      v22 = v21 | 0x20;
    }
    *(_DWORD *)(v9 + 48) = v22;
    v24 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v24 & 0x20) != 0 )
    {
      if ( (v22 & 0x20) != 0 )
        xxxSetWindowPos(a1, 0LL, *(unsigned int *)(v9 + 32), *(unsigned int *)(v9 + 36), 0, 0, 21);
    }
    else if ( (v24 & 1) == 0 && a3 )
    {
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)a3->left,
        (unsigned int)a3->top,
        a3->right - a3->left,
        a3->bottom - a3->top,
        4);
    }
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
