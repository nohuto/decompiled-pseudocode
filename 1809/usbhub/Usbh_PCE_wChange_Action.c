/*
 * XREFs of Usbh_PCE_wChange_Action @ 0x1C0014DA0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0045530 (UsbhRemoveQueuedSuspend.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalSuspendEvent @ 0x1C00467F4 (UsbhiSignalSuspendEvent.c)
 */

_QWORD *__fastcall Usbh_PCE_wChange_Action(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  int v8; // r8d
  __int16 v9; // cx
  __int64 v10; // rcx
  KIRQL v11; // al
  unsigned __int16 v12; // r8
  KIRQL v13; // r11
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // r14
  _QWORD *v24; // r15
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  KIRQL v36; // dl
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // ecx
  int v41; // edx
  __int64 v42; // r10
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v48; // rax
  __int64 v49; // r9
  int v50; // r8d
  __int64 v51; // r10
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  KIRQL v66; // [rsp+80h] [rbp+8h]

  v6 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7);
  v8 = *(unsigned __int16 *)(a2 + 4);
  LOBYTE(v9) = *(_WORD *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v10 = 812660273;
    *(_QWORD *)(v10 + 24) = (unsigned __int16)v8;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = a2;
    v9 = *(_WORD *)(a2 + 4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      v8,
      43,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v9,
      a3);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v12 = *(_WORD *)(a2 + 4);
  v13 = v11;
  v66 = v11;
  v14 = v12;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 24) = v12;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = 16LL;
      v14 = *(unsigned __int16 *)(a2 + 4);
    }
  }
  v17 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 724267376;
      *(_QWORD *)(v19 + 24) = (unsigned __int16)v14;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v17;
    }
  }
  v20 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v20;
  v21 = a2 + 32 * (v20 + 43);
  *(_DWORD *)v21 = 16;
  v22 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(v21 + 12) = 0LL;
  *(_QWORD *)(v21 + 20) = 0LL;
  *(_DWORD *)(v21 + 28) = 0;
  v23 = (__int64 *)(a2 + 456);
  *(_DWORD *)(v21 + 4) = v22;
  *(_DWORD *)(v21 + 8) = -1;
  v24 = *(_QWORD **)(a2 + 456);
  v25 = *(_DWORD *)(a2 + 12);
  if ( v24 == (_QWORD *)(a2 + 456) )
  {
    KeResetEvent((PRKEVENT)(a2 + 496));
    if ( v25 == 3 )
    {
LABEL_40:
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 3;
      *(_DWORD *)(v48 + a2 + 1384) = 3;
      v49 = *(int *)(a2 + 12);
      v50 = *(_DWORD *)(a2 + 12);
      v51 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v52 = *(_QWORD *)(a1 + 64);
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
          *(_DWORD *)v53 = 757952880;
          *(_QWORD *)(v53 + 8) = 0LL;
          *(_QWORD *)(v53 + 16) = v49;
          *(_QWORD *)(v53 + 24) = v51;
          v50 = *(_DWORD *)(a2 + 12);
        }
      }
      v36 = v66;
      v54 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v54 + a2 + 1384) = v50;
      goto LABEL_37;
    }
    switch ( v25 )
    {
      case 8:
      case 10:
        v64 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 8;
        *(_DWORD *)(v64 + a2 + 1384) = 8;
        break;
      case 12:
      case 17:
        break;
      case 13:
        v63 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v63 + a2 + 1384) = 12;
        break;
      case 14:
        goto LABEL_40;
      default:
        v65 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v65 + a2 + 1384) = 19;
        break;
    }
    v56 = v66;
    goto LABEL_69;
  }
  if ( v25 == 3 )
    goto LABEL_26;
  if ( v25 != 12 )
  {
    if ( v25 != 8 && v25 != 10 )
    {
      if ( v25 == 13 )
        goto LABEL_17;
      if ( v25 != 14 )
      {
        if ( v25 != 17 )
        {
          v56 = v13;
          v57 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v57 + a2 + 1384) = 19;
LABEL_69:
          v60 = 0LL;
          goto LABEL_70;
        }
        v6 = *(_QWORD **)(a2 + 456);
        if ( (__int64 *)v24[1] == v23 )
        {
          v58 = *v24;
          if ( *(_QWORD **)(*v24 + 8LL) == v24 )
          {
            *v23 = v58;
            v56 = v13;
            *(_QWORD *)(v58 + 8) = v23;
            v59 = *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 17;
            *(_DWORD *)(32 * v59 + a2 + 1384) = 17;
            v60 = *((unsigned int *)v24 - 2);
LABEL_70:
            UsbhUnlockPcqWithTag(a1, a2, v56, v60);
            return v6;
          }
        }
LABEL_63:
        __fastfail(3u);
      }
    }
LABEL_26:
    if ( (__int64 *)v24[1] == v23 )
    {
      v37 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) == v24 )
      {
        *v23 = v37;
        v6 = v24;
        *(_QWORD *)(v37 + 8) = v23;
        if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (*(_DWORD *)(v24 - 1) & 1) != 0 )
        {
          UsbhRemoveQueuedSuspend(a1, a2, v17, v14);
          UsbhiSignalSuspendEvent(a1, a2);
          v61 = *v23;
          if ( *(__int64 **)(*v23 + 8) != v23 )
            goto LABEL_63;
          v13 = v66;
          *v24 = v61;
          v24[1] = v23;
          *(_QWORD *)(v61 + 8) = v24;
          *v23 = (__int64)v24;
          v6 = 0LL;
          v62 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_BYTE *)(a2 + 2839) = 1;
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v62 + a2 + 1384) = 14;
        }
        else if ( v25 != 3 && (v25 == 8 || v25 == 10) )
        {
          v55 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 8;
          *(_DWORD *)(v55 + a2 + 1384) = 8;
        }
        else
        {
          v38 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v38 + a2 + 1384) = 3;
        }
        v39 = *(int *)(a2 + 12);
        v40 = *(_DWORD *)(a2 + 12);
        v41 = *((_DWORD *)v24 - 2);
        v42 = *(unsigned __int16 *)(a2 + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v43 = *(_QWORD *)(a1 + 64);
          if ( v43 )
          {
            v44 = *(_QWORD *)(v43 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
            *(_DWORD *)v44 = 757952880;
            *(_QWORD *)(v44 + 8) = 0LL;
            *(_QWORD *)(v44 + 16) = v39;
            *(_QWORD *)(v44 + 24) = v42;
            v40 = *(_DWORD *)(a2 + 12);
          }
        }
        v45 = *(unsigned int *)(a2 + 2400) + 43LL;
        *(_DWORD *)(a2 + 448) = 0;
        v46 = 32 * v45;
        *(_DWORD *)(v46 + a2 + 8) = v40;
        if ( v41 )
          *(_DWORD *)(v46 + a2 + 12) = v41;
        v36 = v13;
        goto LABEL_37;
      }
    }
    goto LABEL_63;
  }
LABEL_17:
  v6 = *(_QWORD **)(a2 + 456);
  if ( (__int64 *)v24[1] != v23 )
    goto LABEL_63;
  v26 = *v24;
  if ( *(_QWORD **)(*v24 + 8LL) != v24 )
    goto LABEL_63;
  *v23 = v26;
  *(_QWORD *)(v26 + 8) = v23;
  v27 = *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 12;
  *(_DWORD *)(32 * v27 + a2 + 1384) = 12;
  v28 = *(int *)(a2 + 12);
  v29 = *(_DWORD *)(a2 + 12);
  v30 = *((_DWORD *)v24 - 2);
  v31 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v32 = *(_QWORD *)(a1 + 64);
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
      *(_DWORD *)v33 = 757952880;
      *(_QWORD *)(v33 + 8) = 0LL;
      *(_QWORD *)(v33 + 16) = v28;
      *(_QWORD *)(v33 + 24) = v31;
      v29 = *(_DWORD *)(a2 + 12);
    }
  }
  v34 = *(unsigned int *)(a2 + 2400) + 43LL;
  *(_DWORD *)(a2 + 448) = 0;
  v35 = 32 * v34;
  *(_DWORD *)(v35 + a2 + 8) = v29;
  if ( v30 )
    *(_DWORD *)(v35 + a2 + 12) = v30;
  v36 = v13;
LABEL_37:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v36);
  return v6;
}
