/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x1C0014470
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x1C0015990 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhPCE_psSUSPEND @ 0x1C000C51C (UsbhPCE_psSUSPEND.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0014B10 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0045A44 (UsbhHubProcessTimeoutObj.c)
 *     UsbhPCE_wChangeERROR @ 0x1C004695C (UsbhPCE_wChangeERROR.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // r13
  unsigned __int16 v8; // dx
  __int16 v9; // cx
  __int64 v10; // rcx
  _DWORD *v11; // rdx
  unsigned __int16 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r15d
  int v30; // eax
  int v31; // r15d
  int v32; // r8d
  _DWORD *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 result; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // edx
  int v45; // [rsp+50h] [rbp-41h]
  __int64 v46; // [rsp+68h] [rbp-29h] BYREF
  unsigned int PortState; // [rsp+70h] [rbp-21h]
  int v48; // [rsp+74h] [rbp-1Dh]
  _DWORD v49[14]; // [rsp+78h] [rbp-19h] BYREF
  int v51; // [rsp+110h] [rbp+7Fh] BYREF
  int v52; // [rsp+114h] [rbp+83h]

  v52 = HIDWORD(a4);
  v4 = a3;
  v51 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    goto LABEL_100;
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7);
  if ( !a3 || *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1);
  v8 = *(_WORD *)(a2 + 4);
  LOBYTE(v9) = v8;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v10 = 1466458992;
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = a2;
    v9 = *(_WORD *)(a2 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      (unsigned int)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      98,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v9,
      a3);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v11 = *(_DWORD **)(a1 + 64);
    v12 = *(_WORD *)(a2 + 4);
    v46 = 0LL;
    if ( !v11 )
LABEL_98:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v11 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v11,
        (unsigned int)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        74,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        v12,
        v4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 909198672;
        *(_QWORD *)(v14 + 24) = v12;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 1413771367;
        *(_QWORD *)(v16 + 16) = v12;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 24) = 0LL;
      }
    }
    if ( v12 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( !v17 )
        goto LABEL_98;
      if ( *(_DWORD *)v17 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v17);
      if ( v12 <= *(unsigned __int8 *)(v17 + 2938) )
      {
        v18 = *(_QWORD *)(v17 + 3056);
        if ( v18 )
        {
          v19 = 2928LL * v12 + v18 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v20 = *(_QWORD *)(v17 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
            *(_DWORD *)v20 = 1044672615;
            *(_QWORD *)(v20 + 16) = v12;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 24) = v19;
          }
          if ( v19 )
            v46 = UsbhDispatch_PortChangeQueueNullEventEx(a1, v19, 16, v4, (__int64)&v46);
        }
      }
    }
    if ( !v46 )
      goto LABEL_57;
    *(_QWORD *)(a2 + 376) = v4;
    v21 = v46;
    *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
    v22 = v21 - 16;
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 1313891184;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = v23;
        *(_QWORD *)(v25 + 24) = 0LL;
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1145332592;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = a2;
          *(_QWORD *)(v27 + 24) = v22;
        }
      }
    }
    v28 = *(_DWORD *)(v22 + 8);
    if ( (v28 & 0x16) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
      v28 = *(_DWORD *)(v22 + 8);
    }
    if ( (v28 & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    PortState = UsbhQueryPortState(a1);
    if ( PortState >> 30 == 3 )
      v51 = 0;
    v29 = *(_DWORD *)(v22 + 48);
    if ( PortState >> 30 != 3 )
    {
      if ( v29 == 2 )
        v30 = UsbhHubProcessTimeoutObj(a1, a2, v22, &v51);
      else
        v30 = UsbhHubDispatchPortEvent(a1);
      v31 = v30;
      goto LABEL_49;
    }
    memset(v49, 0, sizeof(v49));
    if ( v29 == 2 )
    {
      UsbhHubProcessTimeoutObj(a1, a2, v22, &v51);
    }
    else if ( v29 == 1 )
    {
      UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v22 + 8), a3, 1, *(_QWORD *)(v22 + 40));
      goto LABEL_86;
    }
    UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v22 + 8), a3, 0, 0LL);
LABEL_86:
    LOWORD(v49[1]) = *(_WORD *)(a2 + 4);
    v49[0] = 1145332592;
    v49[2] = 0x80000;
    v31 = UsbhHubDispatchPortEvent(a1);
    if ( !Usb_Disconnected(PortState) && !*(_BYTE *)(v7 + 5268) )
    {
      LOBYTE(v45) = 1;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v22, 56, v44, v48, usbfile_pchange_c, 6038, v45);
    }
LABEL_49:
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v22 + 48) == 1 )
      UsbhUnlatchPdo(a1, *(_QWORD *)(v22 + 40), v22, 1230065731LL);
    ExFreePoolWithTag((PVOID)v22, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v31 == 5 )
    {
      LODWORD(v4) = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      goto LABEL_57;
    }
    if ( *(int *)(a2 + 2876) > 50 )
      break;
    if ( v31 == 4 )
      goto LABEL_72;
    if ( v31 == 3 )
      goto LABEL_94;
    v4 = a3;
  }
  LOBYTE(v45) = 1;
  UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, v45);
LABEL_94:
  *(_DWORD *)(a2 + 400) = 4;
LABEL_72:
  v40 = *(_DWORD **)(a1 + 64);
  if ( !v40 )
    goto LABEL_100;
  if ( *v40 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v40);
  LODWORD(v4) = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v40,
      v32,
      71,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v41 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 959530320;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 16) = 0LL;
      *(_QWORD *)(v43 + 24) = v41;
    }
  }
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 19, a3, 0LL, 0, 0LL, 0LL);
LABEL_57:
  *(_DWORD *)(a2 + 8) = 0;
  v33 = *(_DWORD **)(a1 + 64);
  if ( !v33 )
LABEL_100:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v33 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v33);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  v34 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 909133136;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = 0LL;
      *(_QWORD *)(v36 + 24) = v34;
    }
  }
  result = UsbhDispatch_PortChangeQueueEventEx(a1, a2, 6, v4, 0LL, 0, 0LL, 0LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      result = 762017649LL;
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 762017649;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 16) = a2;
      *(_QWORD *)(v39 + 24) = 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               99,
               (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
               *(_WORD *)(a2 + 4));
  }
  return result;
}
