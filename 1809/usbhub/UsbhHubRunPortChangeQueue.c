/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x1C0013DA0
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x1C00152C0 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhPCE_psSUSPEND @ 0x1C000BE94 (UsbhPCE_psSUSPEND.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0014420 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0044344 (UsbhHubProcessTimeoutObj.c)
 *     UsbhPCE_wChangeERROR @ 0x1C00451A8 (UsbhPCE_wChangeERROR.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r14
  __int64 v6; // r12
  unsigned __int16 v7; // dx
  __int16 v8; // cx
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  unsigned __int16 v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int PortState; // eax
  unsigned int v29; // ecx
  int v30; // r13d
  int v31; // eax
  int v32; // eax
  int v33; // r14d
  int v34; // r8d
  _DWORD *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 result; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _DWORD *v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // [rsp+50h] [rbp-41h]
  __int64 v47; // [rsp+68h] [rbp-29h] BYREF
  int v48; // [rsp+70h] [rbp-21h]
  int v49; // [rsp+78h] [rbp-19h]
  __int16 v50; // [rsp+7Ch] [rbp-15h]
  int v51; // [rsp+80h] [rbp-11h]
  __int64 v52; // [rsp+F8h] [rbp+67h]
  __int64 v54; // [rsp+110h] [rbp+7Fh] BYREF
  va_list va; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v54 = va_arg(va1, _QWORD);
  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_95;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( !a3 || *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1);
  v7 = *(_WORD *)(a2 + 4);
  LOBYTE(v8) = v7;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v9 = 1466458992;
    *(_QWORD *)(v9 + 24) = v7;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    v8 = *(_WORD *)(a2 + 4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      (unsigned int)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      98,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v8,
      a3);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v10 = *(_DWORD **)(a1 + 64);
    v11 = *(_WORD *)(a2 + 4);
    v47 = 0LL;
    if ( !v10 )
LABEL_93:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v10 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v10);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v10,
        (unsigned int)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        74,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        v11,
        v3);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 909198672;
        *(_QWORD *)(v13 + 24) = v11;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1413771367;
        *(_QWORD *)(v15 + 16) = v11;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
    if ( v11 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( !v16 )
        goto LABEL_93;
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v16);
      if ( v11 <= *(unsigned __int8 *)(v16 + 2938) )
      {
        v17 = *(_QWORD *)(v16 + 3056);
        if ( v17 )
        {
          v18 = 2928LL * v11 + v17 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v19 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v19 = 1044672615;
            *(_QWORD *)(v19 + 16) = v11;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 24) = v18;
          }
          if ( v18 )
            v47 = UsbhDispatch_PortChangeQueueNullEventEx(a1, v18, 16, v3, (__int64)&v47);
        }
      }
    }
    if ( !v47 )
      goto LABEL_55;
    *(_QWORD *)(a2 + 376) = v3;
    v20 = v47;
    *(_QWORD *)(v3 + 24) = KeGetCurrentThread();
    v21 = v20 - 16;
    v22 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 1313891184;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 1145332592;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = a2;
          *(_QWORD *)(v26 + 24) = v21;
        }
      }
    }
    v27 = *(_DWORD *)(v21 + 8);
    if ( (v27 & 0x16) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
      v27 = *(_DWORD *)(v21 + 8);
    }
    if ( (v27 & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    PortState = UsbhQueryPortState(a1);
    v29 = PortState >> 30;
    v30 = PortState;
    if ( PortState >> 30 == 3 )
      LODWORD(v54) = 0;
    v31 = *(_DWORD *)(v21 + 48);
    if ( v29 == 3 )
    {
      if ( v31 == 2 )
      {
        UsbhHubProcessTimeoutObj(a1, a2, v21, (__int64 *)va);
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v3, 0, 0LL);
      }
      else if ( v31 == 1 )
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v3, 1, *(_QWORD *)(v21 + 40));
      }
      else
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v3, 0, 0LL);
      }
      v50 = *(_WORD *)(a2 + 4);
      v49 = 1145332592;
      v51 = 0x80000;
      v33 = UsbhHubDispatchPortEvent(a1);
      if ( !Usb_Disconnected(v30) && !*(_BYTE *)(v6 + 5268) )
      {
        LOBYTE(v46) = 1;
        UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v21, 56, v30, v48, usbfile_pchange_c, 6038, v46);
      }
    }
    else
    {
      if ( v31 == 2 )
        v32 = UsbhHubProcessTimeoutObj(a1, a2, v21, (__int64 *)va);
      else
        v32 = UsbhHubDispatchPortEvent(a1);
      v33 = v32;
    }
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v21 + 48) == 1 )
      UsbhUnlatchPdo(a1, *(_QWORD *)(v21 + 40), v21, 1230065731LL);
    ExFreePoolWithTag((PVOID)v21, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v33 == 5 )
    {
      LODWORD(v3) = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      goto LABEL_55;
    }
    if ( *(int *)(a2 + 2876) > 50 )
      break;
    if ( v33 == 4 )
      goto LABEL_68;
    if ( v33 == 3 )
      goto LABEL_89;
    v3 = a3;
  }
  LOBYTE(v46) = 1;
  UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, v46);
LABEL_89:
  *(_DWORD *)(a2 + 400) = 4;
LABEL_68:
  v42 = *(_DWORD **)(a1 + 64);
  if ( !v42 )
    goto LABEL_95;
  if ( *v42 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v42);
  LODWORD(v3) = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v42,
      v34,
      71,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v43 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v44 = *(_QWORD *)(a1 + 64);
    if ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
      *(_DWORD *)v45 = 959530320;
      *(_QWORD *)(v45 + 8) = 0LL;
      *(_QWORD *)(v45 + 16) = 0LL;
      *(_QWORD *)(v45 + 24) = v43;
    }
  }
  LODWORD(v52) = 0;
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 19, a3, v52, 0, 0LL, 0LL);
LABEL_55:
  *(_DWORD *)(a2 + 8) = 0;
  v35 = *(_DWORD **)(a1 + 64);
  if ( !v35 )
LABEL_95:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v35 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v35);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  v36 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 909133136;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = 0LL;
      *(_QWORD *)(v38 + 24) = v36;
    }
  }
  LODWORD(v52) = 0;
  result = UsbhDispatch_PortChangeQueueEventEx(a1, a2, 6, v3, v52, 0, 0LL, 0LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    if ( v40 )
    {
      result = 762017649LL;
      v41 = *(_QWORD *)(v40 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
      *(_DWORD *)v41 = 762017649;
      *(_QWORD *)(v41 + 8) = 0LL;
      *(_QWORD *)(v41 + 16) = a2;
      *(_QWORD *)(v41 + 24) = 0LL;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_d(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             1,
             99,
             (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
             *(_WORD *)(a2 + 4));
  return result;
}
