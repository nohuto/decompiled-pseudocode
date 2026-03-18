/*
 * XREFs of UsbhHubProcessIsr @ 0x1C0011C70
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C0010130 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0004640 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhPostInterrupt @ 0x1C0010330 (UsbhPostInterrupt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhHubAckPortChange @ 0x1C001AA40 (UsbhHubAckPortChange.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     UsbhQueryHubState @ 0x1C001E864 (UsbhQueryHubState.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0020C80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C00461F4 (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C0046A40 (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0049354 (UsbhHubAckHubChange.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

_UNKNOWN **__fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  void *DeviceExtension; // rcx
  __int64 v6; // rdx
  struct _KEVENT *v7; // r13
  unsigned __int8 Signalling; // r8
  unsigned __int8 v9; // dl
  void *v10; // rcx
  __int64 v11; // rdx
  char *PoolWithTag; // rax
  __int64 v13; // r12
  _LIST_ENTRY *v14; // rax
  void **p_Flink; // rdx
  unsigned __int16 v16; // di
  void *v17; // rdx
  __int64 v18; // rcx
  void *v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // rcx
  void *v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r15
  __int16 v33; // di
  __int64 v34; // r8
  void *v35; // rdx
  __int64 v36; // rcx
  void *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // r9
  void *v42; // rdx
  __int64 v43; // rcx
  unsigned __int16 v44; // ax
  _DWORD *v45; // rdx
  void *v46; // rdx
  __int64 v47; // rcx
  void *v48; // rdx
  __int64 v49; // rcx
  unsigned __int8 *v50; // rdx
  __int64 v51; // r11
  __int64 v52; // rax
  __int64 v53; // r10
  __int64 v54; // rcx
  _DWORD *v55; // rdx
  __int64 v56; // rdi
  unsigned __int16 v57; // r15
  void *v58; // rdx
  __int64 v59; // rcx
  unsigned __int8 *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r10
  __int64 v63; // rcx
  void *v64; // rdx
  __int64 v65; // rcx
  struct _KEVENT *v66; // rdi
  unsigned __int8 v67; // r8
  unsigned __int8 v68; // cl
  void *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  _QWORD *v72; // rax
  _QWORD *v73; // r8
  __int64 LockNV; // r8
  void *v75; // rdx
  __int64 v76; // rcx
  _UNKNOWN **result; // rax
  __int64 v78; // rax
  volatile int Lock; // eax
  __int64 v80; // r8
  __int64 v81; // rdx
  __int16 v82; // r9
  int v83; // r9d
  int v84; // r9d
  int HubState; // edi
  __int64 v86; // r14
  __int64 v87; // rdx
  int v88; // r9d
  __int64 v89; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v91; // [rsp+28h] [rbp-D8h]
  _DWORD *v92; // [rsp+30h] [rbp-D0h]
  __int64 v93; // [rsp+38h] [rbp-C8h]
  _WORD *v94; // [rsp+40h] [rbp-C0h]
  int v95; // [rsp+48h] [rbp-B8h]
  __int64 v96; // [rsp+50h] [rbp-B0h]
  _WORD v97[2]; // [rsp+64h] [rbp-9Ch] BYREF
  int v98; // [rsp+68h] [rbp-98h]
  int v99; // [rsp+6Ch] [rbp-94h] BYREF
  int v100; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v101; // [rsp+74h] [rbp-8Ch]
  int v102; // [rsp+78h] [rbp-88h] BYREF
  int v103; // [rsp+7Ch] [rbp-84h]
  __int64 v104; // [rsp+80h] [rbp-80h]
  __int64 v105; // [rsp+88h] [rbp-78h]
  __int64 v106; // [rsp+90h] [rbp-70h] BYREF
  __int64 v107; // [rsp+98h] [rbp-68h]
  _DWORD v108[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v109; // [rsp+B0h] [rbp-50h]
  __int64 v110; // [rsp+B8h] [rbp-48h]
  int v111; // [rsp+C0h] [rbp-40h]
  _BYTE v112[40]; // [rsp+C8h] [rbp-38h] BYREF

  v3 = a2;
  v101 = a2;
  v100 = 0;
  v107 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      a2);
    a3 = v107;
  }
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( !DeviceObject )
      goto LABEL_130;
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v98 = 1467052649;
      v6 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v6 = 1467052649;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = a3;
      *(_QWORD *)(v6 + 24) = v3;
    }
  }
  if ( !DeviceObject )
LABEL_130:
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  v7 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v7 )
    goto LABEL_187;
  if ( v7->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v7[142].Header.Type = 1;
  KeWaitForSingleObject(&v7[139], Executive, 0, 0, 0LL);
  Signalling = v7[142].Header.Signalling;
  v9 = Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v10 = DeviceObject->DeviceExtension;
    if ( v10 )
    {
      v98 = 1668172104;
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 1668172104;
      *(_QWORD *)(v11 + 24) = Signalling;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      v9 = v7[142].Header.Signalling;
    }
  }
  if ( v9 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v13 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_QWORD *)PoolWithTag + 4) = 826438515LL;
      *(_DWORD *)PoolWithTag = 1215918946;
      *((_QWORD *)PoolWithTag + 3) = DeviceObject;
      v14 = (_LIST_ENTRY *)(PoolWithTag + 8);
      p_Flink = (void **)&v7[129].Header.WaitListHead.Blink->Flink;
      if ( *p_Flink != &v7[129].Header.WaitListHead )
        goto LABEL_153;
      v14->Flink = &v7[129].Header.WaitListHead;
      v14->Blink = (_LIST_ENTRY *)p_Flink;
      *p_Flink = v14;
      v7[129].Header.WaitListHead.Blink = v14;
    }
    else
    {
      ++v7[130].Header.LockNV;
      v13 = 1936941672LL;
    }
    KeSetEvent(v7 + 139, 0, 0);
  }
  else
  {
    KeSetEvent(v7 + 139, 0, 0);
    v13 = 0LL;
  }
  _InterlockedIncrement(&v7[114].Header.Lock);
  v16 = (unsigned __int8)v3;
  LOWORD(v98) = (unsigned __int8)v3;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v17 = DeviceObject->DeviceExtension;
    if ( v17 )
    {
      v18 = *((_QWORD *)v17 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
      *(_DWORD *)v18 = 2003923561;
      *(_QWORD *)(v18 + 16) = (unsigned __int8)v3;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 24) = 0LL;
    }
  }
  if ( (_BYTE)v3 )
  {
    if ( (UsbhLogMask & 8) != 0 )
    {
      v19 = DeviceObject->DeviceExtension;
      if ( v19 )
      {
        v20 = *((_QWORD *)v19 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
        *(_DWORD *)v20 = 1413771367;
        *(_QWORD *)(v20 + 16) = (unsigned __int8)v3;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 24) = 0LL;
      }
    }
    v21 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( v21 )
    {
      if ( *(_DWORD *)v21 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v21);
      if ( (unsigned __int8)v3 > v21[2938] )
        goto LABEL_163;
      v22 = *((_QWORD *)v21 + 382);
      if ( !v22 )
        goto LABEL_163;
      v23 = (unsigned __int8)v3;
      v24 = 2928LL * (unsigned __int8)v3 - 2928;
      v104 = v24;
      v25 = v24 + v22;
      v109 = v24 + v22;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v26 = *((_QWORD *)v21 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
        *(_DWORD *)v26 = 1044672615;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = (unsigned __int8)v3;
        *(_QWORD *)(v26 + 24) = v25;
      }
      if ( v25 )
      {
        v97[0] = 0;
        v106 = 0LL;
        v102 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            19,
            (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
            v3);
          v24 = v104;
          v23 = (unsigned __int8)v3;
        }
        v103 = 0;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v27 = DeviceObject->DeviceExtension;
          if ( v27 )
          {
            v28 = *((_QWORD *)v27 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
            *(_DWORD *)v28 = 1413771367;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_QWORD *)(v28 + 16) = v23;
            *(_QWORD *)(v28 + 24) = 0LL;
          }
        }
        v29 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v29 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL);
        if ( *(_DWORD *)v29 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v29);
        if ( (unsigned __int8)v3 > v29[2938] )
        {
          v105 = 0LL;
        }
        else
        {
          v30 = *((_QWORD *)v29 + 382);
          if ( v30 )
          {
            v105 = v24 + v30;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v31 = *((_QWORD *)v29 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
              *(_DWORD *)v31 = 1044672615;
              *(_QWORD *)(v31 + 8) = 0LL;
              *(_QWORD *)(v31 + 16) = v23;
              *(_QWORD *)(v31 + 24) = v24 + v30;
            }
            v16 = v98;
          }
          else
          {
            v105 = 0LL;
          }
        }
        LODWORD(v32) = UsbhQueryPortState((_DWORD)DeviceObject);
        if ( (int)v32 >= 0 )
        {
          v33 = 1;
          if ( (v102 & 0x10000) == 0 )
          {
            while ( 1 )
            {
              v33 *= 2;
              if ( (v33 & 0xFFE0) != 0 )
                break;
              if ( ((unsigned __int16)v33 & HIWORD(v102)) != 0 )
                goto LABEL_50;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                20,
                (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
            }
            Log((_DWORD)DeviceObject, 4, 1666076515, 0, 0LL);
            if ( (*(_DWORD *)(FdoExt(DeviceObject) + 2560) & 1) == 0
              || (v78 = v105, ++*(_DWORD *)(v105 + 408), *(int *)(v78 + 408) >= 3) )
            {
              LOBYTE(v95) = 0;
              v103 = -1073704960;
              UsbhException(
                (int)DeviceObject,
                (unsigned __int16)v98,
                10,
                (int)&v102,
                4,
                v32,
                -1073704960,
                usbfile_bus_c,
                1463,
                v95);
              v33 = 0;
              LODWORD(v32) = -1073741823;
            }
          }
LABEL_50:
          if ( (v33 & 0x1F) != 0 )
            v97[0] |= v33;
          v16 = v98;
        }
        if ( v97[0] )
          *(_DWORD *)(v105 + 408) = 0;
        v34 = v97[0];
        if ( (UsbhLogMask & 4) != 0 )
        {
          v35 = DeviceObject->DeviceExtension;
          if ( v35 )
          {
            v36 = *((_QWORD *)v35 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v35 + 220) & *((_DWORD *)v35 + 221));
            *(_DWORD *)v36 = 1734894416;
            *(_QWORD *)(v36 + 24) = (int)v32;
            *(_QWORD *)(v36 + 8) = 0LL;
            *(_QWORD *)(v36 + 16) = v34;
          }
        }
        v100 = v103;
        if ( (UsbhLogMask & 4) != 0 )
        {
          v37 = DeviceObject->DeviceExtension;
          if ( v37 )
          {
            v38 = *((_QWORD *)v37 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
            *(_DWORD *)v38 = 1751340369;
            *(_QWORD *)(v38 + 16) = v16;
            *(_QWORD *)(v38 + 24) = (int)v32;
            *(_QWORD *)(v38 + 8) = 0LL;
          }
        }
        if ( (v32 & 0xC0000000) != 0xC0000000 )
        {
          v108[0] = v101;
          v110 = 0LL;
          v111 = 0;
          memset(v112, 0, 0x24uLL);
          if ( dword_1C006F650 )
          {
            v39 = FdoExt(DeviceObject);
            LODWORD(v110) = *(_DWORD *)(v39 + 5192);
            WORD2(v110) = *(_WORD *)(v39 + 5196);
            v40 = *(_DWORD *)(v39 + 5200);
            HIWORD(v110) = v40;
            v108[2] = v40;
            v111 = *(_DWORD *)(v39 + 5228);
            UsbhEtwGetHubInfo(v39, v112);
            v96 = 0LL;
            v95 = 2;
            v94 = v97;
            v93 = 4LL;
            v92 = v108;
            v91 = 36LL;
            Timeout = (PLARGE_INTEGER)v112;
            UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL);
          }
          if ( !v97[0] )
            goto LABEL_112;
          v32 = (int)UsbhHubAckPortChange(DeviceObject, v16, v97, &v100, Timeout, v91, v92, v93, v94, v95, v96);
          v41 = v16;
          if ( (UsbhLogMask & 4) != 0 )
          {
            v42 = DeviceObject->DeviceExtension;
            if ( v42 )
            {
              v43 = *((_QWORD *)v42 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
              *(_DWORD *)v43 = 1734894401;
              *(_QWORD *)(v43 + 8) = 0LL;
              *(_QWORD *)(v43 + 16) = v16;
              *(_QWORD *)(v43 + 24) = v32;
            }
          }
          if ( (v32 & 0xC0000000) != 0xC0000000 )
          {
            v44 = v97[0];
            if ( (v97[0] & 1) != 0 )
            {
              Log((_DWORD)DeviceObject, 4, 1112425259, v16, 0LL);
              _InterlockedIncrement((volatile signed __int32 *)(v109 + 404));
              v44 = v97[0];
            }
            v45 = DeviceObject->DeviceExtension;
            LODWORD(v106) = v44;
            if ( !v45 )
              goto LABEL_149;
            if ( *v45 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v45);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                62,
                (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                v16);
              v41 = v16;
            }
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              v46 = DeviceObject->DeviceExtension;
              if ( v46 )
              {
                v47 = *((_QWORD *)v46 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
                *(_DWORD *)v47 = 842089808;
                *(_QWORD *)(v47 + 8) = 0LL;
                *(_QWORD *)(v47 + 16) = 0LL;
                *(_QWORD *)(v47 + 24) = v41;
              }
            }
            if ( (UsbhLogMask & 8) != 0 )
            {
              v48 = DeviceObject->DeviceExtension;
              if ( v48 )
              {
                v49 = *((_QWORD *)v48 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v48 + 220) & *((_DWORD *)v48 + 221));
                *(_DWORD *)v49 = 1413771367;
                *(_QWORD *)(v49 + 8) = 0LL;
                *(_QWORD *)(v49 + 16) = v41;
                *(_QWORD *)(v49 + 24) = 0LL;
              }
            }
            v50 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v50 )
              goto LABEL_149;
            if ( *(_DWORD *)v50 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v50);
            v51 = v104;
            if ( v16 <= v50[2938] )
            {
              v52 = *((_QWORD *)v50 + 382);
              if ( v52 )
              {
                v53 = v52 + v104;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v54 = *((_QWORD *)v50 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v50 + 220) & *((_DWORD *)v50 + 221));
                  *(_DWORD *)v54 = 1044672615;
                  *(_QWORD *)(v54 + 8) = 0LL;
                  *(_QWORD *)(v54 + 16) = v41;
                  *(_QWORD *)(v54 + 24) = v53;
                }
                if ( v53 )
                {
                  UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v53, 12, v107, 0LL, 0, 0LL, 0LL);
                  v51 = v104;
                }
              }
            }
            v55 = DeviceObject->DeviceExtension;
            v56 = v106;
            if ( !v55 )
              goto LABEL_149;
            if ( *v55 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v55);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v57 = v98;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                75,
                (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                v98);
              v51 = v104;
            }
            else
            {
              v57 = v98;
            }
            if ( (UsbhLogMask & 8) != 0 )
            {
              v58 = DeviceObject->DeviceExtension;
              if ( v58 )
              {
                v59 = *((_QWORD *)v58 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v58 + 220) & *((_DWORD *)v58 + 221));
                *(_DWORD *)v59 = 1413771367;
                *(_QWORD *)(v59 + 8) = 0LL;
                *(_QWORD *)(v59 + 16) = v57;
                *(_QWORD *)(v59 + 24) = 0LL;
              }
            }
            v60 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v60 )
              goto LABEL_149;
            if ( *(_DWORD *)v60 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, v60);
            if ( v57 <= v60[2938] )
            {
              v61 = *((_QWORD *)v60 + 382);
              if ( v61 )
              {
                v62 = v61 + v51;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v63 = *((_QWORD *)v60 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v60 + 220) & *((_DWORD *)v60 + 221));
                  *(_DWORD *)v63 = 1044672615;
                  *(_QWORD *)(v63 + 8) = 0LL;
                  *(_QWORD *)(v63 + 16) = v57;
                  *(_QWORD *)(v63 + 24) = v62;
                }
                if ( v62 )
                  UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v62, 4, v107, v56, 0, 0LL, 0LL);
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                76,
                (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                v57);
            }
            if ( (UsbhLogMask & 4) != 0 )
            {
              v64 = DeviceObject->DeviceExtension;
              if ( v64 )
              {
                v65 = *((_QWORD *)v64 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v64 + 220) & *((_DWORD *)v64 + 221));
                *(_DWORD *)v65 = 1734894417;
                *(_QWORD *)(v65 + 16) = v57;
                *(_QWORD *)(v65 + 24) = &v106;
                *(_QWORD *)(v65 + 8) = 0LL;
              }
            }
LABEL_112:
            v66 = (struct _KEVENT *)DeviceObject->DeviceExtension;
            if ( v66 )
            {
              if ( v66->Header.LockNV != 541218120 )
                UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
              v66[142].Header.Type = 1;
              KeWaitForSingleObject(&v66[139], Executive, 0, 0, 0LL);
              v67 = v66[142].Header.Signalling;
              v68 = v67;
              if ( (UsbhLogMask & 0x10000) != 0 )
              {
                v69 = DeviceObject->DeviceExtension;
                if ( v69 )
                {
                  v70 = *((_QWORD *)v69 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v69 + 220) & *((_DWORD *)v69 + 221));
                  *(_DWORD *)v70 = 1667581000;
                  *(_QWORD *)(v70 + 24) = v67;
                  *(_QWORD *)(v70 + 8) = 0LL;
                  *(_QWORD *)(v70 + 16) = v13;
                  v68 = v66[142].Header.Signalling;
                }
              }
              if ( !v68 )
                goto LABEL_123;
              if ( v13 == 1936941672 )
              {
                Lock = v66[130].Header.Lock;
                if ( Lock )
                  v66[130].Header.LockNV = Lock - 1;
                goto LABEL_123;
              }
              if ( !v13 )
              {
LABEL_123:
                KeSetEvent(v66 + 139, 0, 0);
                _InterlockedDecrement(&v7[114].Header.Lock);
                UsbhPostInterrupt(DeviceObject);
                LockNV = v7[114].Header.LockNV;
                if ( (UsbhLogMask & 4) != 0 )
                {
                  v75 = DeviceObject->DeviceExtension;
                  if ( v75 )
                  {
                    v76 = *((_QWORD *)v75 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v75 + 220) & *((_DWORD *)v75 + 221));
                    *(_DWORD *)v76 = 826177385;
                    *(_QWORD *)(v76 + 8) = 0LL;
                    *(_QWORD *)(v76 + 16) = 0LL;
                    *(_QWORD *)(v76 + 24) = LockNV;
                  }
                }
                result = &WPP_RECORDER_INITIALIZED;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                                          WPP_GLOBAL_Control->DeviceExtension,
                                          0,
                                          1,
                                          37,
                                          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
                                          v101);
                }
                return result;
              }
              v71 = *(_QWORD *)(v13 + 8);
              v72 = (_QWORD *)(v13 + 8);
              if ( *(_QWORD *)(v71 + 8) == v13 + 8 )
              {
                v73 = *(_QWORD **)(v13 + 16);
                if ( (_QWORD *)*v73 == v72 )
                {
                  *v73 = v71;
                  *(_QWORD *)(v71 + 8) = v73;
                  *(_QWORD *)(v13 + 16) = v13 + 8;
                  *v72 = v72;
                  ExFreePoolWithTag((PVOID)v13, 0);
                  goto LABEL_123;
                }
              }
LABEL_153:
              __fastfail(3u);
            }
LABEL_149:
            UsbhTrapFatal_Dbg(DeviceObject, 0LL);
          }
        }
        KeSetEvent(v7 + 112, 0, 0);
        if ( Usb_Disconnected(v32) )
        {
          Log((_DWORD)DeviceObject, 4, 1769436977, 0, v80);
          UsbhQueuePauseChange(DeviceObject, v16, v107);
          UsbhPCE_HW_Stop(DeviceObject, v16, v107);
        }
        else
        {
          Log((_DWORD)DeviceObject, 4, 1769436978, 0, v80);
          LOBYTE(v95) = 1;
          UsbhException((int)DeviceObject, v16, 1, v83, 0, v32, v100, usbfile_bus_c, 3213, v95);
        }
        LOBYTE(v3) = v101;
      }
      else
      {
LABEL_163:
        Log((_DWORD)DeviceObject, 4, 1769437016, 0, -1073741811LL);
        LOBYTE(v95) = 0;
        UsbhException((int)DeviceObject, (unsigned __int8)v3, 1, v84, 0, -1073741811, 0, usbfile_bus_c, 3118, v95);
        KeSetEvent(v7 + 112, 0, 0);
      }
      goto LABEL_157;
    }
LABEL_187:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  }
  v99 = 0;
  HubState = UsbhQueryHubState((_DWORD)DeviceObject);
  v86 = HubState;
  Log((_DWORD)DeviceObject, 4, 1364551795, 0, HubState);
  Log((_DWORD)DeviceObject, 4, 1364551779, 0, 0LL);
  if ( HubState < 0 )
    goto LABEL_179;
  v7[127].Header.LockNV = 500;
  if ( (v99 & 0x10000) != 0 )
    LODWORD(v7[126].Header.WaitListHead.Flink) = 500;
  HubState = UsbhHubAckHubChange(DeviceObject, &v99, &v100);
  v86 = HubState;
  Log((_DWORD)DeviceObject, 4, 1095263080, 0, HubState);
  if ( HubState < 0 || (v99 & 2) != 0 || !BYTE1(v7[125].Header.WaitListHead.Flink) && (v99 & 0x20000) != 0 )
  {
LABEL_179:
    KeSetEvent(v7 + 112, 0, 0);
    if ( (v99 & 2) != 0 || !BYTE1(v7[125].Header.WaitListHead.Flink) && (v99 & 0x20000) != 0 )
    {
      Log((_DWORD)DeviceObject, 4, 1749512054, 0, v86);
      if ( !BYTE2(v7[125].Header.WaitListHead.Flink) )
      {
        BYTE2(v7[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx((__int64)DeviceObject, 1u, (int)UsbhSetHubOvercurrentDetectedKey, v89, 0, 1666340431, 0LL);
      }
      LOBYTE(v95) = 0;
      UsbhException((int)DeviceObject, 0, 75, (int)&v99, 4, HubState, v100, usbfile_bus_c, 3318, v95);
    }
    else if ( !Usb_Disconnected(HubState) )
    {
      Log((_DWORD)DeviceObject, 4, 1769433138, 0, v86);
      LOBYTE(v95) = 0;
      UsbhException((int)DeviceObject, 0, 1, v88, 0, HubState, v100, usbfile_bus_c, 3331, v95);
    }
LABEL_157:
    Log((_DWORD)DeviceObject, 4, 1769422386, 0, v7[114].Header.LockNV);
    _InterlockedDecrement(&v7[114].Header.Lock);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) != v82 )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        39,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        v3);
    }
    return (_UNKNOWN **)UsbhDecHubBusy(DeviceObject, v81, v13);
  }
  LOBYTE(v95) = 0;
  if ( (v99 & 0x20000) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 72, (int)&v99, 4, HubState, v100, usbfile_bus_c, 3270, v95);
  }
  else if ( (v99 & 0x10000) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 73, (int)&v99, 4, HubState, v100, usbfile_bus_c, 3273, v95);
  }
  else
  {
    UsbhException((int)DeviceObject, 0, 74, (int)&v99, 4, HubState, v100, usbfile_bus_c, 3277, v95);
  }
  _InterlockedDecrement(&v7[114].Header.Lock);
  UsbhDecHubBusy(DeviceObject, v87, v13);
  UsbhPostInterrupt(DeviceObject);
  Log((_DWORD)DeviceObject, 4, 1769422387, 0, v7[114].Header.LockNV);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          WPP_GLOBAL_Control->DeviceExtension,
                          0,
                          1,
                          38,
                          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
  return result;
}
