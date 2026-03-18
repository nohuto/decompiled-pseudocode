/*
 * XREFs of zzzAttachToQueue @ 0x1C0058B78
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     zzzSetDesktop @ 0x1C000F360 (zzzSetDesktop.c)
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x1C01FE504 (xxxHardErrorControl.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001DE64 (UpdateRawMouseMode.c)
 *     IsInsideMenuLoop @ 0x1C0056EB4 (IsInsideMenuLoop.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0057B60 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C0058EE0 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     LockCaptureWindow @ 0x1C0060898 (LockCaptureWindow.c)
 *     UnlockCaptureWindow @ 0x1C00F69D0 (UnlockCaptureWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01AA8A0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  struct tagTHREADINFO *v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  struct tagTHREADINFO *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 result; // rax
  unsigned int v21; // ecx
  __int64 v22; // rbx
  struct tagQMSG *v23; // rcx
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
      v29 = *(_QWORD *)(*(_QWORD *)(v10 + 424) + 120LL);
      HMAssignmentLock(&v28);
      HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 120LL);
      v11 = *((_QWORD *)a1 + 53);
      v12 = *(_QWORD *)(v11 + 296);
      if ( v12 )
      {
        if ( *(struct tagTHREADINFO **)(v12 + 16) == a1 && !*((_QWORD *)a2 + 37) )
        {
          *(_OWORD *)((char *)a2 + 296) = *(_OWORD *)(v11 + 296);
          *(_OWORD *)((char *)a2 + 312) = *(_OWORD *)(v11 + 312);
          *(_OWORD *)((char *)a2 + 328) = *(_OWORD *)(v11 + 328);
          *(_OWORD *)((char *)a2 + 344) = *(_OWORD *)(v11 + 344);
          *(_OWORD *)((char *)a2 + 360) = *(_OWORD *)(v11 + 360);
          *(_QWORD *)(*((_QWORD *)a1 + 53) + 296LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v10, 0);
  }
  v13 = CheckTransferState(a1, a2, 112, a4) - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v28 = (char *)a2 + 112;
      v29 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 112LL);
      HMAssignmentLock(&v28);
      HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 112LL);
    }
  }
  else
  {
    CancelInputState(v14, 1u);
  }
  v15 = *((_QWORD *)a1 + 53);
  HMAssignmentUnlock(v15 + 136);
  *(_BYTE *)(v15 + 144) = 0;
  HMAssignmentUnlock((char *)a2 + 136);
  *((_BYTE *)a2 + 144) = 0;
  v16 = CheckTransferState(a1, a2, 104, a4) - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      LockCaptureWindow(a2, *(_QWORD *)(*((_QWORD *)a1 + 53) + 104LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 53));
      UpdateRawMouseMode((__int64)a2);
      v26 = *((_DWORD *)a2 + 97);
      *((_DWORD *)a2 + 37) = *(_DWORD *)(*((_QWORD *)a1 + 53) + 148LL);
      *((_DWORD *)a2 + 97) = v26 ^ (v26 ^ *(_DWORD *)(*((_QWORD *)a1 + 53) + 388LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v17, 2u);
  }
  v18 = CheckTransferState(a1, a2, 128, a4) - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_12;
    v28 = (char *)a2 + 128;
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 128LL);
    goto LABEL_22;
  }
  v27 = *((_QWORD *)a2 + 15);
  if ( v27 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 128LL);
      if ( v24 )
      {
        if ( *(_QWORD *)(v27 + 64) == v24 )
        {
          v28 = (char *)a2 + 128;
LABEL_22:
          v29 = v24;
          HMAssignmentLock(&v28);
          HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 128LL);
        }
      }
    }
  }
LABEL_12:
  v19 = *((_QWORD *)a1 + 53);
  if ( a1 == *(struct tagTHREADINFO **)(v19 + 64) )
  {
    *((_DWORD *)a2 + 97) ^= (*((_DWORD *)a2 + 97) ^ *(_DWORD *)(v19 + 388)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop((__int64)a1) )
      *((_DWORD *)a2 + 97) = v25 & 0xFFFFFFBF;
    *(_QWORD *)(*((_QWORD *)a1 + 53) + 64LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
  {
    v28 = (char *)a2 + 376;
    v29 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 376LL);
    HMAssignmentLock(&v28);
  }
  *((_DWORD *)a2 + 96) += *((_DWORD *)a1 + 186);
  *((_QWORD *)a2 + 11) = a1;
  *((_QWORD *)a2 + 12) = a1;
  result = *((_QWORD *)a1 + 52);
  v21 = *(_DWORD *)(result + 872);
  if ( *((_DWORD *)a2 + 107) < v21 )
  {
    *((_DWORD *)a2 + 108) = 0;
    *((_DWORD *)a2 + 107) = v21;
  }
  v22 = *((_QWORD *)a1 + 53);
  *((_QWORD *)a1 + 53) = a2;
  if ( v22 == a3 )
  {
    --*(_DWORD *)(v22 + 392);
  }
  else
  {
    v23 = *(struct tagQMSG **)(v22 + 24);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = 0LL;
    *(_DWORD *)(v22 + 40) = 0;
    RedistributeInput(v23, (struct tagQ *)v22, 0LL);
    return zzzDestroyQueue(v22, a1);
  }
  return result;
}
