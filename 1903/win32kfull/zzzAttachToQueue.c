/*
 * XREFs of zzzAttachToQueue @ 0x1C0012DFC
 * Callers:
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 *     xxxSetThreadDesktop @ 0x1C00189F8 (xxxSetThreadDesktop.c)
 *     zzzSetDesktop @ 0x1C00232E0 (zzzSetDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x1C023F06C (xxxHardErrorControl.c)
 * Callees:
 *     IsInsideMenuLoop @ 0x1C001197C (IsInsideMenuLoop.c)
 *     LockQCursor @ 0x1C0011F20 (LockQCursor.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012058 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00131C8 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     LockCaptureWindow @ 0x1C001E3A4 (LockCaptureWindow.c)
 *     UpdateRawMouseMode @ 0x1C001E6F8 (UpdateRawMouseMode.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     UnlockCaptureWindow @ 0x1C0112530 (UnlockCaptureWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
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
  __int64 v26; // xmm1_8
  int v27; // edx
  __int64 v28; // rdx
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]

  v8 = CheckTransferState(a1, a2, 128, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      *((_QWORD *)&v29 + 1) = *(_QWORD *)(*(_QWORD *)(v10 + 424) + 128LL);
      *(_QWORD *)&v29 = v9 + 128;
      HMAssignmentLock(&v29);
      HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 128LL);
      v22 = *((_QWORD *)a1 + 53);
      v23 = *(_QWORD *)(v22 + 304);
      if ( v23 )
      {
        if ( *(struct tagTHREADINFO **)(v23 + 16) == a1 && !*((_QWORD *)a2 + 38) )
        {
          *((_OWORD *)a2 + 19) = *(_OWORD *)(v22 + 304);
          *((_OWORD *)a2 + 20) = *(_OWORD *)(v22 + 320);
          *((_OWORD *)a2 + 21) = *(_OWORD *)(v22 + 336);
          *((_OWORD *)a2 + 22) = *(_OWORD *)(v22 + 352);
          *((_OWORD *)a2 + 23) = *(_OWORD *)(v22 + 368);
          *(_QWORD *)(*((_QWORD *)a1 + 53) + 304LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v10, 0);
  }
  v11 = CheckTransferState(a1, a2, 120, a4) - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      *((_QWORD *)&v29 + 1) = *(_QWORD *)(*((_QWORD *)a1 + 53) + 120LL);
      *(_QWORD *)&v29 = (char *)a2 + 120;
      HMAssignmentLock(&v29);
      HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 120LL);
    }
  }
  else
  {
    CancelInputState(v12, 1u);
  }
  v13 = *((_QWORD *)a1 + 53);
  HMAssignmentUnlock(v13 + 144);
  *(_BYTE *)(v13 + 152) = 0;
  HMAssignmentUnlock((char *)a2 + 144);
  *((_BYTE *)a2 + 152) = 0;
  v14 = CheckTransferState(a1, a2, 112, a4) - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      LockCaptureWindow(a2, *(struct tagWND **)(*((_QWORD *)a1 + 53) + 112LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 53));
      v26 = *((_QWORD *)a2 + 2);
      v29 = *(_OWORD *)a2;
      v30 = v26;
      UpdateRawMouseMode(a2);
      v27 = *((_DWORD *)a2 + 99);
      *((_DWORD *)a2 + 39) = *(_DWORD *)(*((_QWORD *)a1 + 53) + 156LL);
      *((_DWORD *)a2 + 99) = v27 ^ (v27 ^ *(_DWORD *)(*((_QWORD *)a1 + 53) + 396LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v15, 2u);
  }
  v16 = CheckTransferState(a1, a2, 136, a4) - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_11;
    *(_QWORD *)&v29 = (char *)a2 + 136;
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 136LL);
    goto LABEL_25;
  }
  v28 = *((_QWORD *)a2 + 16);
  if ( v28 )
  {
    if ( *((_QWORD *)a2 + 17) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 136LL);
      if ( v24 )
      {
        if ( *(_QWORD *)(v28 + 88) == v24 )
        {
          *(_QWORD *)&v29 = (char *)a2 + 136;
LABEL_25:
          *((_QWORD *)&v29 + 1) = v24;
          HMAssignmentLock(&v29);
          HMAssignmentUnlock(*((_QWORD *)a1 + 53) + 136LL);
        }
      }
    }
  }
LABEL_11:
  v17 = *((_QWORD *)a1 + 53);
  if ( a1 == *(struct tagTHREADINFO **)(v17 + 72) )
  {
    *((_DWORD *)a2 + 99) ^= (*((_DWORD *)a2 + 99) ^ *(_DWORD *)(v17 + 396)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop((__int64)a1) )
    {
      v25 &= ~0x40u;
      *((_DWORD *)a2 + 99) = v25;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)a1 + 53),
        v25,
        18,
        41,
        (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
        *((_QWORD *)a1 + 53),
        *(_QWORD *)(*((_QWORD *)a1 + 53) + 72LL));
    *(_QWORD *)(*((_QWORD *)a1 + 53) + 72LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    LockQCursor((__int64)a2, *(struct tagCURSOR **)(*((_QWORD *)a1 + 53) + 384LL));
  *((_DWORD *)a2 + 98) += *((_DWORD *)a1 + 188);
  *((_QWORD *)a2 + 12) = a1;
  *((_QWORD *)a2 + 13) = a1;
  result = *((_QWORD *)a1 + 52);
  v19 = *(_DWORD *)(result + 872);
  if ( *((_DWORD *)a2 + 109) < v19 )
  {
    *((_DWORD *)a2 + 110) = 0;
    *((_DWORD *)a2 + 109) = v19;
  }
  v20 = *((_QWORD *)a1 + 53);
  *((_QWORD *)a1 + 53) = a2;
  if ( v20 == a3 )
  {
    --*(_DWORD *)(v20 + 400);
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
