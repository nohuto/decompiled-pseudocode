/*
 * XREFs of _GetWindowPlacement @ 0x1C0090900
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C00907E0 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C022D3A0 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UpdateCheckpoint @ 0x1C0090C28 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C0090D58 (CkptUpdate.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0090E5C (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *updated; // r15
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  int v16; // ebx
  int v17; // eax
  int v18; // ebx
  _QWORD *v19; // rcx
  __int64 v20; // rbx
  __int128 v21; // xmm0
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  bool v26; // cf
  __int64 Prop; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // eax
  __int128 v31; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v32[16]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v33; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v34[52]; // [rsp+50h] [rbp-19h] BYREF

  memset(v34, 0, sizeof(v34));
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  v6 = 0;
  if ( !a3 )
  {
    Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    updated = v34;
    if ( Prop )
    {
      v28 = *(_OWORD *)(Prop + 16);
      *(_OWORD *)v34 = *(_OWORD *)Prop;
      v29 = *(_OWORD *)(Prop + 32);
      v30 = *(_DWORD *)(Prop + 48);
      *(_OWORD *)&v34[16] = v28;
      *(_DWORD *)&v34[48] = v30;
      *(_OWORD *)&v34[32] = v29;
    }
    else
    {
      v33 = 0uLL;
      GetRect(a1, &v33, 66LL);
      *(_DWORD *)&v34[48] &= 0xFFFFFF80;
      *(_OWORD *)v34 = v33;
      *(_OWORD *)&v34[16] = v33;
      *(__m128i *)&v34[32] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      CkptUpdate(a1, &v33, v34);
    }
    goto LABEL_4;
  }
  updated = (_BYTE *)UpdateCheckpoint(a1);
  if ( !updated )
    return 0LL;
LABEL_4:
  v11 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v11 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v11 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9) + 472) + 224LL) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 472) + 224LL) & 0x20) != 0 )
  {
    goto LABEL_14;
  }
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
  if ( (((unsigned __int16)(v15 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
    goto LABEL_41;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2
    || (v16 = 1, (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0x20000000) == 0) )
  {
    v16 = 0;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
    || (v26 = (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0, v17 = 1, !v26) )
  {
    v17 = 0;
  }
  if ( v16 == v17 )
  {
LABEL_14:
    v18 = 0;
  }
  else
  {
LABEL_41:
    v18 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v19 = (_QWORD *)(a2 + 12);
  if ( (*((_DWORD *)updated + 12) & 0x20) != 0 )
  {
    *v19 = *((_QWORD *)updated + 4);
    if ( v18 )
      TransformPointBetweenCoordinateSpaces(v19, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v19 = -1;
  }
  if ( (*((_DWORD *)updated + 12) & 0x40) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 5);
    if ( v18 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) && *(char *)(*(_QWORD *)(a1 + 40) + 24LL) >= 0 )
  {
    v20 = MonitorFromRect((struct tagRECT *)(a2 + 28));
    v33 = *(_OWORD *)GetMonitorWorkRect(&v31, v20);
    v21 = *(_OWORD *)GetMonitorRect(v32, v20);
    v22 = *((_DWORD *)updated + 12);
    v31 = v21;
    if ( (v22 & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 12) += v21 - v33;
      *(_DWORD *)(a2 + 16) += DWORD1(v21) - DWORD1(v33);
    }
    v23 = v21 - v33;
    *(_DWORD *)(a2 + 28) += v21 - v33;
    *(_DWORD *)(a2 + 36) += v23;
    v24 = DWORD1(v21) - DWORD1(v33);
    *(_DWORD *)(a2 + 40) += DWORD1(v21) - DWORD1(v33);
    *(_DWORD *)(a2 + 32) += v24;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 && (*((_DWORD *)updated + 12) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v6 = 1;
  }
  if ( (*((_DWORD *)updated + 12) & 2) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) != 0 )
    *(_DWORD *)(a2 + 4) = v6 | 2;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
