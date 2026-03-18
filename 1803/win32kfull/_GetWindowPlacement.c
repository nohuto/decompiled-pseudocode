/*
 * XREFs of _GetWindowPlacement @ 0x1C00666E0
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C00665D0 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C01EEF90 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UpdateCheckpoint @ 0x1C00669AC (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C0066AF0 (CkptUpdate.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  int v6; // edi
  __int64 v7; // rdx
  _BYTE *updated; // r15
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // ebx
  _QWORD *v15; // rcx
  __int64 v16; // rbx
  __int128 v17; // xmm0
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  __int64 Prop; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  int v25; // eax
  __int128 v26; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v27[16]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v28; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v29[52]; // [rsp+50h] [rbp-19h] BYREF

  memset(v29, 0, sizeof(v29));
  if ( (*(_BYTE *)((unsigned int)(unsigned __int16)*(_DWORD *)a1 * LODWORD(gSharedInfo[2]) + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  v6 = 0;
  if ( a3 )
  {
    updated = (_BYTE *)UpdateCheckpoint(a1);
    if ( updated )
      goto LABEL_4;
    return 0LL;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
  updated = v29;
  if ( Prop )
  {
    v23 = *(_OWORD *)(Prop + 16);
    *(_OWORD *)v29 = *(_OWORD *)Prop;
    v24 = *(_OWORD *)(Prop + 32);
    v25 = *(_DWORD *)(Prop + 48);
    *(_OWORD *)&v29[16] = v23;
    *(_DWORD *)&v29[48] = v25;
    *(_OWORD *)&v29[32] = v24;
  }
  else
  {
    GetRect(a1, (int *)&v28, 66);
    *(_DWORD *)&v29[48] &= 0xFFFFFF80;
    *(_OWORD *)v29 = v28;
    *(_OWORD *)&v29[16] = v28;
    *(__m128i *)&v29[32] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    CkptUpdate(a1, &v28, v29);
  }
LABEL_4:
  v9 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v9 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v9 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7) + 472) + 224LL) & 1) != 0
    || (v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 472),
        (*(_BYTE *)(v12 + 224) & 0x20) != 0)
    || (v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
        (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                            v12,
                                                                            v11) >> 8)) & 0x1FF) == 0) )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v15 = (_QWORD *)(a2 + 12);
  if ( (*((_DWORD *)updated + 12) & 0x20) != 0 )
  {
    *v15 = *((_QWORD *)updated + 4);
    if ( v14 )
      TransformPointBetweenCoordinateSpaces(v15, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v15 = -1;
  }
  if ( (*((_DWORD *)updated + 12) & 0x40) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 5);
    if ( v14 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 80) == GetDesktopWindow(a1) && *(char *)(*(_QWORD *)(a1 + 40) + 24LL) >= 0 )
  {
    v16 = MonitorFromRect((struct tagRECT *)(a2 + 28));
    v28 = *(_OWORD *)GetMonitorWorkRect(&v26, v16);
    v17 = *(_OWORD *)GetMonitorRect(v27, v16);
    v18 = *((_DWORD *)updated + 12);
    v26 = v17;
    if ( (v18 & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 12) += v17 - v28;
      *(_DWORD *)(a2 + 16) += DWORD1(v17) - DWORD1(v28);
    }
    v19 = v17 - v28;
    *(_DWORD *)(a2 + 28) += v17 - v28;
    *(_DWORD *)(a2 + 36) += v19;
    v20 = DWORD1(v17) - DWORD1(v28);
    *(_DWORD *)(a2 + 40) += DWORD1(v17) - DWORD1(v28);
    *(_DWORD *)(a2 + 32) += v20;
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
