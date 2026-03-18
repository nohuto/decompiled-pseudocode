/*
 * XREFs of zzzAttachToQueue @ 0x1C00D6E7C
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     zzzSetDesktop @ 0x1C00B11B0 (zzzSetDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
 * Callees:
 *     LockCaptureWindow @ 0x1C00D2044 (LockCaptureWindow.c)
 *     UpdateRawMouseMode @ 0x1C00D20E4 (UpdateRawMouseMode.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00D66A8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00D7200 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     LockQCursor @ 0x1C00D8780 (LockQCursor.c)
 *     UnlockCaptureWindow @ 0x1C0112CC0 (UnlockCaptureWindow.c)
 *     IsInsideMenuLoop @ 0x1C0120900 (IsInsideMenuLoop.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01CD1C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  struct tagTHREADINFO *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  struct tagQMSG *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edx
  int v26; // edx
  __int64 v27; // rdx
  char *v28; // [rsp+20h] [rbp-10h] BYREF
  __int64 v29; // [rsp+28h] [rbp-8h]

  v8 = CheckTransferState(a1, a2, 120, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v28 = (char *)(v9 + 120);
      v29 = *(_QWORD *)(*(_QWORD *)(v10 + 432) + 120LL);
      HMAssignmentLock(&v28);
      HMAssignmentUnlock(*((_QWORD *)a1 + 54) + 120LL);
      v22 = *((_QWORD *)a1 + 54);
      v23 = *(_QWORD *)(v22 + 296);
      if ( v23 )
      {
        if ( *(struct tagTHREADINFO **)(v23 + 16) == a1 && !*((_QWORD *)a2 + 37) )
        {
          *(_OWORD *)((char *)a2 + 296) = *(_OWORD *)(v22 + 296);
          *(_OWORD *)((char *)a2 + 312) = *(_OWORD *)(v22 + 312);
          *(_OWORD *)((char *)a2 + 328) = *(_OWORD *)(v22 + 328);
          *(_OWORD *)((char *)a2 + 344) = *(_OWORD *)(v22 + 344);
          *(_OWORD *)((char *)a2 + 360) = *(_OWORD *)(v22 + 360);
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 296LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v10, 0);
  }
  v11 = CheckTransferState(a1, a2, 112, a4) - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v28 = (char *)a2 + 112;
      v29 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 112LL);
      HMAssignmentLock(&v28);
      HMAssignmentUnlock(*((_QWORD *)a1 + 54) + 112LL);
    }
  }
  else
  {
    CancelInputState(v12, 1u);
  }
  v13 = *((_QWORD *)a1 + 54);
  HMAssignmentUnlock(v13 + 136);
  *(_BYTE *)(v13 + 144) = 0;
  HMAssignmentUnlock((char *)a2 + 136);
  *((_BYTE *)a2 + 144) = 0;
  v14 = CheckTransferState(a1, a2, 104, a4) - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      LockCaptureWindow((__int64)a2, *(_QWORD *)(*((_QWORD *)a1 + 54) + 104LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 54));
      UpdateRawMouseMode((__int64)a2);
      v26 = *((_DWORD *)a2 + 97);
      *((_DWORD *)a2 + 37) = *(_DWORD *)(*((_QWORD *)a1 + 54) + 148LL);
      *((_DWORD *)a2 + 97) = v26 ^ (v26 ^ *(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v15, 2u);
  }
  v16 = CheckTransferState(a1, a2, 128, a4) - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_11;
    v28 = (char *)a2 + 128;
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 128LL);
    goto LABEL_25;
  }
  v27 = *((_QWORD *)a2 + 15);
  if ( v27 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 128LL);
      if ( v24 )
      {
        if ( *(_QWORD *)(v27 + 64) == v24 )
        {
          v28 = (char *)a2 + 128;
LABEL_25:
          v29 = v24;
          HMAssignmentLock(&v28);
          HMAssignmentUnlock(*((_QWORD *)a1 + 54) + 128LL);
        }
      }
    }
  }
LABEL_11:
  v17 = *((_QWORD *)a1 + 54);
  if ( a1 == *(struct tagTHREADINFO **)(v17 + 64) )
  {
    *((_DWORD *)a2 + 97) ^= (*((_DWORD *)a2 + 97) ^ *(_DWORD *)(v17 + 388)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a1) )
      *((_DWORD *)a2 + 97) = v25 & 0xFFFFFFBF;
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 64LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    LockQCursor(a2, *(struct tagCURSOR **)(*((_QWORD *)a1 + 54) + 376LL));
  *((_DWORD *)a2 + 96) += *((_DWORD *)a1 + 190);
  *((_QWORD *)a2 + 11) = a1;
  *((_QWORD *)a2 + 12) = a1;
  result = *((_QWORD *)a1 + 53);
  v19 = *(_DWORD *)(result + 880);
  if ( *((_DWORD *)a2 + 107) < v19 )
  {
    *((_DWORD *)a2 + 108) = 0;
    *((_DWORD *)a2 + 107) = v19;
  }
  v20 = *((_QWORD *)a1 + 54);
  *((_QWORD *)a1 + 54) = a2;
  if ( v20 == a3 )
  {
    --*(_DWORD *)(v20 + 392);
  }
  else
  {
    v21 = *(struct tagQMSG **)(v20 + 24);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_DWORD *)(v20 + 40) = 0;
    RedistributeInput(v21, (struct tagQ *)v20, 0LL);
    return zzzDestroyQueue(v20, a1);
  }
  return result;
}
