/*
 * XREFs of Usbh_PCE_HardwareWake_Action @ 0x1C001C610
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0046D48 (UsbhRemoveQueuedSuspend.c)
 *     UsbhSetPcqEventStatus @ 0x1C0046E50 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0046F54 (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_HardwareWake_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  unsigned __int16 v6; // r9
  KIRQL v7; // bp
  unsigned __int16 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  int v25; // edx
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r11d
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // r10d
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r10d
  __int64 v41; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = v5;
  v8 = v6;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v10 = 724267376;
      *(_QWORD *)(v10 + 24) = v6;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 12LL;
      v8 = *(_WORD *)(a2 + 4);
    }
  }
  v11 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 24) = v8;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = a2 + 32 * (v14 + 43);
  *(_DWORD *)v15 = 12;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 812659249;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  if ( (_DWORD)v16 == 2 )
  {
LABEL_14:
    v20 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = 829436465;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = v16;
        *(_QWORD *)(v22 + 24) = v20;
      }
    }
    v23 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v16;
    *(_DWORD *)(32 * v23 + a2 + 1384) = v16;
    v24 = *(int *)(a2 + 12);
    v25 = *(_DWORD *)(a2 + 12);
    v26 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 757952880;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = v24;
        *(_QWORD *)(v28 + 24) = v26;
        v25 = *(_DWORD *)(a2 + 12);
      }
    }
    v29 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v29 + a2 + 1384) = v25;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
  }
  else
  {
    switch ( (int)v16 )
    {
      case 1:
      case 18:
      case 20:
        Log(a1, 512, 825389110, v16, *(unsigned __int16 *)(a2 + 4));
        v39 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v40;
        *(_DWORD *)(v39 + a2 + 1384) = v40;
        break;
      case 3:
      case 4:
      case 14:
        goto LABEL_14;
      case 5:
      case 6:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
        Log(a1, 512, 825389107, v16, *(unsigned __int16 *)(a2 + 4));
        v33 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v34;
        *(_DWORD *)(v33 + a2 + 1384) = v34;
        if ( *(_DWORD *)(a2 + 400) == 5 )
          Log(a1, 512, 825389161, v32, *(unsigned __int16 *)(a2 + 4));
        break;
      case 7:
        Log(a1, 512, 825389106, v16, *(unsigned __int16 *)(a2 + 4));
        v30 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 2;
        *(_DWORD *)(v30 + a2 + 1384) = 2;
        *(_DWORD *)(a2 + 400) = v31;
        goto LABEL_31;
      case 8:
      case 10:
        Log(a1, 512, 825389108, v16, *(unsigned __int16 *)(a2 + 4));
        v35 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v35 + a2 + 1384) = 10;
        break;
      case 9:
        Log(a1, 512, 825389109, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhRemoveQueuedSuspend(a1, a2, v36, v37);
        v38 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v38 + a2 + 1384) = 4;
LABEL_31:
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        KeResetEvent((PRKEVENT)(a2 + 472));
        break;
      default:
        Log(a1, 512, 825389144, v16, *(unsigned __int16 *)(a2 + 4));
        v41 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v41 + a2 + 1384) = 19;
        break;
    }
    UsbhUnlockPcqWithTag(a1, a2, v7, 0LL);
  }
}
