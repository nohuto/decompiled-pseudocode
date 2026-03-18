/*
 * XREFs of _GetWindowPlacement @ 0x1C00140C0
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C0013FA0 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C022CD80 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C00143E8 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C0014518 (CkptUpdate.c)
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C001461C (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  int v6; // edi
  _BYTE *updated; // r15
  char v8; // cl
  unsigned int v9; // ebx
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  bool v20; // cf
  __int64 Prop; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // eax
  __int128 v25; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v27; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v28[52]; // [rsp+50h] [rbp-19h] BYREF

  memset(v28, 0, sizeof(v28));
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  v6 = 0;
  if ( !a3 )
  {
    Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    updated = v28;
    if ( Prop )
    {
      v22 = *(_OWORD *)(Prop + 16);
      *(_OWORD *)v28 = *(_OWORD *)Prop;
      v23 = *(_OWORD *)(Prop + 32);
      v24 = *(_DWORD *)(Prop + 48);
      *(_OWORD *)&v28[16] = v22;
      *(_DWORD *)&v28[48] = v24;
      *(_OWORD *)&v28[32] = v23;
    }
    else
    {
      v27 = 0uLL;
      GetRect(a1, &v27, 66LL);
      *(_DWORD *)&v28[48] &= 0xFFFFFF80;
      *(_OWORD *)v28 = v27;
      *(_OWORD *)&v28[16] = v27;
      *(__m128i *)&v28[32] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      CkptUpdate(a1, &v27, v28);
    }
    goto LABEL_4;
  }
  updated = (_BYTE *)UpdateCheckpoint(a1);
  if ( !updated )
    return 0LL;
LABEL_4:
  v8 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v8 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v8 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 0x20) != 0 )
  {
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
  if ( (((unsigned __int16)(v9 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
    goto LABEL_41;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2
    || (v10 = 1, (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0x20000000) == 0) )
  {
    v10 = 0;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
    || (v20 = (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0, v11 = 1, !v20) )
  {
    v11 = 0;
  }
  if ( v10 == v11 )
  {
LABEL_14:
    v12 = 0;
  }
  else
  {
LABEL_41:
    v12 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v13 = (_QWORD *)(a2 + 12);
  if ( (*((_DWORD *)updated + 12) & 0x20) != 0 )
  {
    *v13 = *((_QWORD *)updated + 4);
    if ( v12 )
      TransformPointBetweenCoordinateSpaces(v13, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v13 = -1;
  }
  if ( (*((_DWORD *)updated + 12) & 0x40) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 5);
    if ( v12 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) && *(char *)(*(_QWORD *)(a1 + 40) + 24LL) >= 0 )
  {
    v14 = MonitorFromRect((struct tagRECT *)(a2 + 28));
    v27 = *(_OWORD *)GetMonitorWorkRect(&v25, v14);
    v15 = *(_OWORD *)GetMonitorRect(v26, v14);
    v16 = *((_DWORD *)updated + 12);
    v25 = v15;
    if ( (v16 & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 12) += v15 - v27;
      *(_DWORD *)(a2 + 16) += DWORD1(v15) - DWORD1(v27);
    }
    v17 = v15 - v27;
    *(_DWORD *)(a2 + 28) += v15 - v27;
    *(_DWORD *)(a2 + 36) += v17;
    v18 = DWORD1(v15) - DWORD1(v27);
    *(_DWORD *)(a2 + 40) += DWORD1(v15) - DWORD1(v27);
    *(_DWORD *)(a2 + 32) += v18;
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
