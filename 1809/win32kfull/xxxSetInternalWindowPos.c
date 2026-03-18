/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C01E2320
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C021CBA0 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C00B6E60 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __m128i v11; // xmm6
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rbx
  __m128i v16; // xmm6
  __m128i *MonitorRect; // rax
  __m128i v18; // xmm0
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  char v22; // dl
  __m128i v23; // [rsp+40h] [rbp-38h] BYREF

  result = UpdateCheckpoint((__int64)a1);
  v9 = result;
  if ( result )
  {
    if ( a3 )
    {
      *(struct tagRECT *)result = *a3;
      if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
      {
        v10 = MonitorFromRect(a3, 1u, 0);
        v11 = *GetMonitorWorkRect(&v23, v10);
        v12 = GetMonitorRect(&v23, v10)->m128i_i64[0];
        v13 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) - HIDWORD(v12);
        *(_DWORD *)(v9 + 12) += v13;
        v14 = _mm_cvtsi128_si32(v11) - v12;
        *(_DWORD *)v9 += v14;
        *(_DWORD *)(v9 + 8) += v14;
        *(_DWORD *)(v9 + 4) += v13;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v21 = *(_DWORD *)(v9 + 48) & 0xFFFFFFDF;
      *(_DWORD *)(v9 + 48) = v21;
      v20 = v21 & 0xFFFFFFFE;
    }
    else
    {
      *(_QWORD *)(v9 + 32) = *a4;
      if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
      {
        v15 = MonitorFromRect((struct tagRECT *)v9, 1u, 0);
        v16 = *GetMonitorWorkRect(&v23, v15);
        MonitorRect = GetMonitorRect(&v23, v15);
        v18 = *MonitorRect;
        *(_DWORD *)(v9 + 32) += _mm_cvtsi128_si32(v16) - *(_OWORD *)MonitorRect;
        *(_DWORD *)(v9 + 36) += _mm_cvtsi128_si32(_mm_srli_si128(v16, 4)) - v18.m128i_i32[1];
      }
      v19 = *(_DWORD *)(v9 + 48) | 1;
      *(_DWORD *)(v9 + 48) = v19;
      v20 = v19 | 0x20;
    }
    *(_DWORD *)(v9 + 48) = v20;
    v22 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v22 & 0x20) != 0 )
    {
      if ( (v20 & 0x20) != 0 )
        xxxSetWindowPos(a1, 0LL, *(unsigned int *)(v9 + 32), *(unsigned int *)(v9 + 36), 0, 0, 21);
    }
    else if ( (v22 & 1) == 0 && a3 )
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
    xxxShowWindowEx((ULONG_PTR)a1, a2, 0);
    return 1LL;
  }
  return result;
}
