/*
 * XREFs of Usbh_PCE_wRun_Action @ 0x1C0015990
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0046F54 (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_wRun_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r10
  KIRQL v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // r10
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  KIRQL v49; // [rsp+70h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      a3,
      33,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = v8;
  v10 = v7;
  v49 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v10 = v7;
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 24) = v8;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 5LL;
      v9 = *(_WORD *)(a2 + 4);
    }
  }
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v10 = v7;
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 24) = v9;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v13;
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = a2 + 32 * (v16 + 43);
  *(_DWORD *)v17 = 5;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + 8) = -1;
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 20) = 0LL;
  *(_DWORD *)(v17 + 28) = 0;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v10 = v7;
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 812660063;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v18;
      *(_QWORD *)(v21 + 24) = v19;
    }
  }
  if ( (_DWORD)v18 == 4 )
  {
    v26 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 862991711;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = 4LL;
        *(_QWORD *)(v28 + 24) = v26;
      }
    }
    v29 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 3;
    *(_DWORD *)(v29 + a2 + 1384) = 3;
    goto LABEL_26;
  }
  if ( (_DWORD)v18 == 5 )
  {
    v22 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 896546143;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = 5LL;
        *(_QWORD *)(v24 + 24) = v22;
      }
    }
    v25 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 12;
    *(_DWORD *)(v25 + a2 + 1384) = 12;
LABEL_26:
    v30 = *(int *)(a2 + 12);
    v31 = *(unsigned __int16 *)(a2 + 4);
    v32 = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 757952880;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = v30;
        *(_QWORD *)(v34 + 24) = v31;
        v32 = *(_DWORD *)(a2 + 12);
      }
    }
    v35 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v35 + a2 + 1384) = v32;
LABEL_30:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v49);
LABEL_31:
    UsbhHubRunPortChangeQueue(a1, a2, a3, v36);
    return;
  }
  switch ( (int)v18 )
  {
    case 3:
      Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
      v43 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      *(_DWORD *)(v43 + a2 + 1384) = 14;
      goto LABEL_47;
    case 6:
    case 20:
      KeResetEvent((PRKEVENT)(a2 + 496));
      Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      goto LABEL_35;
    case 8:
      Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
      v44 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v44 + a2 + 1384) = 10;
      goto LABEL_47;
    case 9:
      Log(a1, 512, 1597337652, v18, *(unsigned __int16 *)(a2 + 4));
      v39 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v39 + a2 + 1384) = 8;
      v40 = *(int *)(a2 + 12);
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      Log(a1, 16, 1886465325, v40, *(unsigned __int16 *)(a2 + 4));
      v41 = *(_DWORD *)(a2 + 12);
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v42 + a2 + 1384) = v41;
      goto LABEL_30;
    case 10:
    case 14:
      Log(a1, 512, 1597337649, v18, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_47;
    case 12:
      Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
      v45 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v45 + a2 + 1384) = 13;
      goto LABEL_47;
    case 16:
      Log(a1, 512, 1597337655, v18, *(unsigned __int16 *)(a2 + 4));
      v47 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v47 + a2 + 1384) = 17;
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      UsbhUnlockPcqWithTag(a1, a2, v49, 0LL);
      goto LABEL_31;
    case 17:
      Log(a1, 512, 1597337654, v18, *(unsigned __int16 *)(a2 + 4));
      v46 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v46 + a2 + 1384) = 17;
      goto LABEL_47;
    case 19:
      KeResetEvent((PRKEVENT)(a2 + 496));
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v48 + a2 + 1384) = 19;
LABEL_47:
      UsbhUnlockPcqWithTag(a1, a2, v10, 0LL);
      break;
    default:
      Log(a1, 512, 1597337656, v18, *(unsigned __int16 *)(a2 + 4));
      Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
LABEL_35:
      v37 = *(_DWORD *)(a2 + 12);
      v38 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v38 + a2 + 1384) = v37;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      break;
  }
}
