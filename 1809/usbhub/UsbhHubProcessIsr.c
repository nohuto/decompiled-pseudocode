/*
 * XREFs of UsbhHubProcessIsr @ 0x1C0011670
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C000FAA0 (UsbhHubIsrWorker.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     UsbhPostInterrupt @ 0x1C000FCA0 (UsbhPostInterrupt.c)
 *     UsbhQueueWorkItemEx @ 0x1C00111F0 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhHubAckPortChange @ 0x1C001A2A0 (UsbhHubAckPortChange.c)
 *     UsbhQueryHubState @ 0x1C001DC3C (UsbhQueryHubState.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001FF30 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C0044AB0 (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C004527C (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0047A90 (UsbhHubAckHubChange.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

LONG __fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  void *DeviceExtension; // rcx
  __int64 v7; // rdx
  struct _KEVENT *v8; // r15
  unsigned __int8 Signalling; // r8
  unsigned __int8 v10; // dl
  void *v11; // rcx
  __int64 v12; // rdx
  PVOID PoolWithTag; // rax
  _LIST_ENTRY *v14; // rax
  void **p_Flink; // rdx
  unsigned __int16 v16; // r12
  void *v17; // rdx
  __int64 v18; // rcx
  void *v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r9
  void *v26; // rdx
  __int64 v27; // rcx
  void *v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r13
  void *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int16 v36; // bx
  __int64 v37; // r8
  void *v38; // rdx
  __int64 v39; // rcx
  void *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // ecx
  void *v44; // rdx
  __int64 v45; // rcx
  unsigned __int16 v46; // ax
  _DWORD *v47; // rdx
  void *v48; // rdx
  __int64 v49; // rcx
  void *v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r10
  void *v55; // rdx
  __int64 v56; // rcx
  _DWORD *v57; // rdx
  __int64 v58; // rbx
  void *v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // r14
  __int64 v62; // rax
  __int64 v63; // r10
  void *v64; // rdx
  __int64 v65; // rcx
  void *v66; // rdx
  __int64 v67; // rcx
  struct _KEVENT *v68; // rbx
  unsigned __int8 v69; // r8
  _QWORD *v70; // r9
  unsigned __int8 v71; // cl
  void *v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // rax
  _QWORD *v76; // r8
  LONG result; // eax
  __int64 LockNV; // r9
  void *v79; // rdx
  __int64 v80; // rcx
  volatile int Lock; // eax
  __int64 v82; // rdx
  int v83; // r9d
  int v84; // r9d
  int HubState; // ebx
  __int64 v86; // rsi
  int v87; // eax
  char v88; // r9
  __int64 v89; // rdx
  __int16 v90; // r9
  int v91; // r9d
  __int64 v92; // r9
  __int64 v93; // rdx
  __int16 v94; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v96; // [rsp+28h] [rbp-D8h]
  int *v97; // [rsp+30h] [rbp-D0h]
  __int64 v98; // [rsp+38h] [rbp-C8h]
  _WORD *v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+48h] [rbp-B8h]
  __int64 v101; // [rsp+50h] [rbp-B0h]
  _WORD v102[2]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int16 v103; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v104; // [rsp+6Ah] [rbp-96h]
  int v105; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+74h] [rbp-8Ch]
  PVOID P; // [rsp+78h] [rbp-88h]
  int v109; // [rsp+80h] [rbp-80h] BYREF
  __int64 v110; // [rsp+88h] [rbp-78h]
  unsigned int v111; // [rsp+90h] [rbp-70h] BYREF
  __int64 v112; // [rsp+98h] [rbp-68h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  int v115; // [rsp+B0h] [rbp-50h]
  int v116; // [rsp+B8h] [rbp-48h]
  __int16 v117; // [rsp+BCh] [rbp-44h]
  __int16 v118; // [rsp+BEh] [rbp-42h]
  __int16 v119; // [rsp+C0h] [rbp-40h]
  __int16 v120; // [rsp+C2h] [rbp-3Eh]
  _BYTE v121[40]; // [rsp+C8h] [rbp-38h] BYREF

  v3 = a2;
  v4 = 0LL;
  v106 = a2;
  v105 = 0;
  v110 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      a2);
    a3 = v110;
  }
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( !DeviceObject )
      goto LABEL_126;
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v7 = 1467052649;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = a3;
      *(_QWORD *)(v7 + 24) = v3;
    }
  }
  if ( !DeviceObject )
LABEL_126:
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  v8 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v8 )
    goto LABEL_185;
  if ( v8->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v8[142].Header.Type = 1;
  KeWaitForSingleObject(&v8[139], Executive, 0, 0, 0LL);
  Signalling = v8[142].Header.Signalling;
  v10 = Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v11 = DeviceObject->DeviceExtension;
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
      *(_DWORD *)v12 = 1668172104;
      *(_QWORD *)(v12 + 24) = Signalling;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      v10 = v8[142].Header.Signalling;
    }
  }
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    P = PoolWithTag;
    v4 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      *(_DWORD *)v4 = 1215918946;
      *(_QWORD *)(v4 + 24) = DeviceObject;
      v14 = (_LIST_ENTRY *)(v4 + 8);
      *(_DWORD *)(v4 + 32) = 826438515;
      p_Flink = (void **)&v8[129].Header.WaitListHead.Blink->Flink;
      if ( *p_Flink != &v8[129].Header.WaitListHead )
        goto LABEL_151;
      v14->Flink = &v8[129].Header.WaitListHead;
      *(_QWORD *)(v4 + 16) = p_Flink;
      *p_Flink = v14;
      v8[129].Header.WaitListHead.Blink = v14;
    }
    else
    {
      ++v8[130].Header.LockNV;
      v4 = 1936941672LL;
      P = (PVOID)1936941672;
    }
    KeSetEvent(v8 + 139, 0, 0);
  }
  else
  {
    KeSetEvent(v8 + 139, 0, 0);
    P = 0LL;
  }
  _InterlockedIncrement(&v8[114].Header.Lock);
  v16 = (unsigned __int8)v3;
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
    v21 = DeviceObject->DeviceExtension;
    if ( v21 )
    {
      if ( *(_DWORD *)v21 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
      if ( (unsigned __int8)v3 <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
      {
        v22 = v21[382];
        if ( v22 )
        {
          v23 = (unsigned __int8)v3;
          v24 = 2928LL * (unsigned __int8)v3 - 2928;
          v114 = v24;
          v25 = v22 + v24;
          v113 = v22 + v24;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v26 = DeviceObject->DeviceExtension;
            if ( v26 )
            {
              v27 = *((_QWORD *)v26 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
              *(_DWORD *)v27 = 1044672615;
              *(_QWORD *)(v27 + 8) = 0LL;
              *(_QWORD *)(v27 + 16) = v16;
              *(_QWORD *)(v27 + 24) = v25;
            }
          }
          if ( v25 )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                19,
                (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
                v16);
              v23 = v16;
            }
            v107 = 0;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v28 = DeviceObject->DeviceExtension;
              if ( v28 )
              {
                v29 = *((_QWORD *)v28 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
                *(_DWORD *)v29 = 1413771367;
                *(_QWORD *)(v29 + 8) = 0LL;
                *(_QWORD *)(v29 + 16) = v23;
                *(_QWORD *)(v29 + 24) = 0LL;
              }
            }
            v30 = DeviceObject->DeviceExtension;
            if ( !v30 )
              UsbhTrapFatal_Dbg(DeviceObject, 0LL);
            if ( *(_DWORD *)v30 != 541218120 )
              UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
            if ( v16 > *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
            {
              v32 = 0LL;
            }
            else
            {
              v31 = v30[382];
              if ( v31 )
              {
                v32 = v31 + v24;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v33 = DeviceObject->DeviceExtension;
                  if ( v33 )
                  {
                    v34 = *((_QWORD *)v33 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
                    *(_DWORD *)v34 = 1044672615;
                    *(_QWORD *)(v34 + 16) = v16;
                    *(_QWORD *)(v34 + 8) = 0LL;
                    *(_QWORD *)(v34 + 24) = v32;
                  }
                }
              }
              else
              {
                v32 = 0LL;
              }
            }
            v102[0] = 0;
            LODWORD(v35) = UsbhQueryPortState((_DWORD)DeviceObject);
            if ( (int)v35 >= 0 )
            {
              v36 = 1;
              if ( (v109 & 0x10000) == 0 )
              {
                while ( 1 )
                {
                  v36 *= 2;
                  if ( (v36 & 0xFFE0) != 0 )
                    break;
                  if ( ((unsigned __int16)v36 & HIWORD(v109)) != 0 )
                    goto LABEL_49;
                }
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    20,
                    (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
                Log((_DWORD)DeviceObject, 4, 1666076515, 0, 0LL);
                if ( (*(_DWORD *)(FdoExt(DeviceObject) + 2560) & 1) == 0
                  || (++*(_DWORD *)(v32 + 408), *(int *)(v32 + 408) >= 3) )
                {
                  LOBYTE(v100) = 0;
                  v107 = -1073704960;
                  UsbhException((int)DeviceObject, v16, 10, (int)&v109, 4, v35, -1073704960, usbfile_bus_c, 1463, v100);
                  LODWORD(v35) = -1073741823;
                  v36 = 0;
                }
              }
LABEL_49:
              if ( (v36 & 0x1F) != 0 )
                v102[0] |= v36;
            }
            if ( v102[0] )
              *(_DWORD *)(v32 + 408) = 0;
            v37 = v102[0];
            if ( (UsbhLogMask & 4) != 0 )
            {
              v38 = DeviceObject->DeviceExtension;
              if ( v38 )
              {
                v39 = *((_QWORD *)v38 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v38 + 220) & *((_DWORD *)v38 + 221));
                *(_DWORD *)v39 = 1734894416;
                *(_QWORD *)(v39 + 24) = (int)v35;
                *(_QWORD *)(v39 + 8) = 0LL;
                *(_QWORD *)(v39 + 16) = v37;
              }
            }
            v105 = v107;
            if ( (UsbhLogMask & 4) != 0 )
            {
              v40 = DeviceObject->DeviceExtension;
              if ( v40 )
              {
                v41 = *((_QWORD *)v40 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v40 + 220) & *((_DWORD *)v40 + 221));
                *(_DWORD *)v41 = 1751340369;
                *(_QWORD *)(v41 + 24) = (int)v35;
                *(_QWORD *)(v41 + 8) = 0LL;
                *(_QWORD *)(v41 + 16) = v16;
              }
            }
            if ( (v35 & 0xC0000000) != 0xC0000000 )
            {
              v111 = v106;
              if ( dword_1C006E650 )
              {
                v42 = FdoExt(DeviceObject);
                v116 = *(_DWORD *)(v42 + 5192);
                v117 = *(_WORD *)(v42 + 5196);
                v43 = *(_DWORD *)(v42 + 5200);
                v118 = v43;
                v115 = v43;
                v119 = *(_WORD *)(v42 + 5228);
                v120 = *(_WORD *)(v42 + 5230);
                UsbhEtwGetHubInfo(v42, v121);
                v101 = 0LL;
                v100 = 2;
                v99 = v102;
                v98 = 4LL;
                v97 = (int *)&v111;
                v96 = 36LL;
                Timeout = (PLARGE_INTEGER)v121;
                UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL);
              }
              if ( !v102[0] )
                goto LABEL_109;
              v35 = (int)UsbhHubAckPortChange(DeviceObject, v16, v102, &v105, Timeout, v96, v97, v98, v99, v100, v101);
              if ( (UsbhLogMask & 4) != 0 )
              {
                v44 = DeviceObject->DeviceExtension;
                if ( v44 )
                {
                  v45 = *((_QWORD *)v44 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v44 + 220) & *((_DWORD *)v44 + 221));
                  *(_DWORD *)v45 = 1734894401;
                  *(_QWORD *)(v45 + 8) = 0LL;
                  *(_QWORD *)(v45 + 16) = v16;
                  *(_QWORD *)(v45 + 24) = v35;
                }
              }
              if ( (v35 & 0xC0000000) != 0xC0000000 )
              {
                v46 = v102[0];
                if ( (v102[0] & 1) != 0 )
                {
                  Log((_DWORD)DeviceObject, 4, 1112425259, v16, 0LL);
                  _InterlockedIncrement((volatile signed __int32 *)(v113 + 404));
                  v46 = v102[0];
                }
                v47 = DeviceObject->DeviceExtension;
                LODWORD(v112) = v46;
                if ( !v47 )
                  goto LABEL_147;
                if ( *v47 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v47);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    62,
                    (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                    v16);
                if ( (UsbhLogMask & 0x200) != 0 )
                {
                  v48 = DeviceObject->DeviceExtension;
                  if ( v48 )
                  {
                    v49 = *((_QWORD *)v48 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v48 + 220) & *((_DWORD *)v48 + 221));
                    *(_DWORD *)v49 = 842089808;
                    *(_QWORD *)(v49 + 8) = 0LL;
                    *(_QWORD *)(v49 + 16) = 0LL;
                    *(_QWORD *)(v49 + 24) = v16;
                  }
                }
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v50 = DeviceObject->DeviceExtension;
                  if ( v50 )
                  {
                    v51 = *((_QWORD *)v50 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v50 + 220) & *((_DWORD *)v50 + 221));
                    *(_DWORD *)v51 = 1413771367;
                    *(_QWORD *)(v51 + 8) = 0LL;
                    *(_QWORD *)(v51 + 16) = v16;
                    *(_QWORD *)(v51 + 24) = 0LL;
                  }
                }
                v52 = DeviceObject->DeviceExtension;
                if ( !v52 )
                  goto LABEL_147;
                if ( *(_DWORD *)v52 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
                if ( v16 <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
                {
                  v53 = v52[382];
                  if ( v53 )
                  {
                    v54 = v53 + v114;
                    if ( (UsbhLogMask & 8) != 0 )
                    {
                      v55 = DeviceObject->DeviceExtension;
                      if ( v55 )
                      {
                        v56 = *((_QWORD *)v55 + 111)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v55 + 220) & *((_DWORD *)v55 + 221));
                        *(_DWORD *)v56 = 1044672615;
                        *(_QWORD *)(v56 + 8) = 0LL;
                        *(_QWORD *)(v56 + 16) = v16;
                        *(_QWORD *)(v56 + 24) = v54;
                      }
                    }
                    if ( v54 )
                    {
                      LODWORD(v113) = 0;
                      UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v54, 12, v110, v113, 0, 0LL, 0LL);
                    }
                  }
                }
                v57 = DeviceObject->DeviceExtension;
                v58 = v112;
                if ( !v57 )
                  goto LABEL_147;
                if ( *v57 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v57);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    75,
                    (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                    v16);
                if ( (UsbhLogMask & 8) != 0 )
                {
                  v59 = DeviceObject->DeviceExtension;
                  if ( v59 )
                  {
                    v60 = *((_QWORD *)v59 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v59 + 220) & *((_DWORD *)v59 + 221));
                    *(_DWORD *)v60 = 1413771367;
                    *(_QWORD *)(v60 + 8) = 0LL;
                    *(_QWORD *)(v60 + 16) = v16;
                    *(_QWORD *)(v60 + 24) = 0LL;
                  }
                }
                v61 = DeviceObject->DeviceExtension;
                if ( !v61 )
                  goto LABEL_147;
                if ( *(_DWORD *)v61 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
                if ( v16 <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
                {
                  v62 = v61[382];
                  if ( v62 )
                  {
                    v63 = v62 + v114;
                    if ( (UsbhLogMask & 8) != 0 )
                    {
                      v64 = DeviceObject->DeviceExtension;
                      if ( v64 )
                      {
                        v65 = *((_QWORD *)v64 + 111)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v64 + 220) & *((_DWORD *)v64 + 221));
                        *(_DWORD *)v65 = 1044672615;
                        *(_QWORD *)(v65 + 8) = 0LL;
                        *(_QWORD *)(v65 + 16) = v16;
                        *(_QWORD *)(v65 + 24) = v63;
                      }
                    }
                    if ( v63 )
                      UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v63, 4, v110, v58, 0, 0LL, 0LL);
                  }
                }
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    76,
                    (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                    v16);
                if ( (UsbhLogMask & 4) != 0 )
                {
                  v66 = DeviceObject->DeviceExtension;
                  if ( v66 )
                  {
                    v67 = *((_QWORD *)v66 + 111)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v66 + 220) & *((_DWORD *)v66 + 221));
                    *(_DWORD *)v67 = 1734894417;
                    *(_QWORD *)(v67 + 24) = &v112;
                    *(_QWORD *)(v67 + 8) = 0LL;
                    *(_QWORD *)(v67 + 16) = v16;
                  }
                }
LABEL_109:
                v68 = (struct _KEVENT *)DeviceObject->DeviceExtension;
                if ( v68 )
                {
                  if ( v68->Header.LockNV != 541218120 )
                    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
                  v68[142].Header.Type = 1;
                  KeWaitForSingleObject(&v68[139], Executive, 0, 0, 0LL);
                  v69 = v68[142].Header.Signalling;
                  v70 = P;
                  v71 = v69;
                  if ( (UsbhLogMask & 0x10000) != 0 )
                  {
                    v72 = DeviceObject->DeviceExtension;
                    if ( v72 )
                    {
                      v73 = *((_QWORD *)v72 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v72 + 220) & *((_DWORD *)v72 + 221));
                      *(_DWORD *)v73 = 1667581000;
                      *(_QWORD *)(v73 + 24) = v69;
                      *(_QWORD *)(v73 + 8) = 0LL;
                      *(_QWORD *)(v73 + 16) = v70;
                      v71 = v68[142].Header.Signalling;
                    }
                  }
                  if ( !v71 )
                    goto LABEL_120;
                  if ( v70 == (_QWORD *)1936941672 )
                  {
                    Lock = v68[130].Header.Lock;
                    if ( Lock )
                      v68[130].Header.LockNV = Lock - 1;
                    goto LABEL_120;
                  }
                  if ( !v70 )
                  {
LABEL_120:
                    KeSetEvent(v68 + 139, 0, 0);
                    _InterlockedDecrement(&v8[114].Header.Lock);
                    UsbhPostInterrupt(DeviceObject);
                    result = UsbhLogMask;
                    LockNV = v8[114].Header.LockNV;
                    if ( (UsbhLogMask & 4) != 0 )
                    {
                      v79 = DeviceObject->DeviceExtension;
                      if ( v79 )
                      {
                        result = 826177385;
                        v80 = *((_QWORD *)v79 + 111)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v79 + 220) & *((_DWORD *)v79 + 221));
                        *(_DWORD *)v80 = 826177385;
                        *(_QWORD *)(v80 + 8) = 0LL;
                        *(_QWORD *)(v80 + 16) = 0LL;
                        *(_QWORD *)(v80 + 24) = LockNV;
                      }
                    }
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      return WPP_RECORDER_SF_d(
                               WPP_GLOBAL_Control->DeviceExtension,
                               0,
                               1,
                               37,
                               (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
                               v106);
                    return result;
                  }
                  v74 = v70[1];
                  v75 = v70 + 1;
                  if ( *(_QWORD **)(v74 + 8) == v70 + 1 )
                  {
                    v76 = (_QWORD *)v70[2];
                    if ( (_QWORD *)*v76 == v75 )
                    {
                      *v76 = v74;
                      *(_QWORD *)(v74 + 8) = v76;
                      v70[2] = v70 + 1;
                      *v75 = v75;
                      ExFreePoolWithTag(v70, 0);
                      goto LABEL_120;
                    }
                  }
LABEL_151:
                  __fastfail(3u);
                }
LABEL_147:
                UsbhTrapFatal_Dbg(DeviceObject, 0LL);
              }
            }
            KeSetEvent(v8 + 112, 0, 0);
            if ( Usb_Disconnected(v35) )
            {
              Log((_DWORD)DeviceObject, 4, 1769436977, 0, v82);
              UsbhQueuePauseChange(DeviceObject, v16, v110);
              UsbhPCE_HW_Stop(DeviceObject, v16, v110);
            }
            else
            {
              Log((_DWORD)DeviceObject, 4, 1769436978, 0, v82);
              LOBYTE(v100) = 1;
              UsbhException((int)DeviceObject, v16, 1, v83, 0, v35, v105, usbfile_bus_c, 3213, v100);
            }
            v4 = (__int64)P;
            LOBYTE(v3) = v106;
            goto LABEL_182;
          }
          LOBYTE(v3) = v106;
        }
      }
      Log((_DWORD)DeviceObject, 4, 1769437016, 0, -1073741811LL);
      LOBYTE(v100) = v84;
      UsbhException((int)DeviceObject, v16, 1, v84, 0, -1073741811, 0, usbfile_bus_c, 3118, v100);
      KeSetEvent(v8 + 112, 0, 0);
LABEL_182:
      Log((_DWORD)DeviceObject, 4, 1769422386, 0, v8[114].Header.LockNV);
      _InterlockedDecrement(&v8[114].Header.Lock);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v94 )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          39,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          v3);
      return UsbhDecHubBusy((__int64)DeviceObject, v93, (_QWORD *)v4);
    }
LABEL_185:
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  }
  HubState = UsbhQueryHubState((_DWORD)DeviceObject);
  v86 = HubState;
  Log((_DWORD)DeviceObject, 4, 1364551795, 0, HubState);
  Log((_DWORD)DeviceObject, 4, 1364551779, v104, v103);
  if ( HubState < 0 )
    goto LABEL_174;
  v87 = 100;
  if ( (v103 & 1) == 0 )
    v87 = 500;
  v8[127].Header.LockNV = v87;
  if ( (v104 & 1) != 0 )
    LODWORD(v8[126].Header.WaitListHead.Flink) = v87;
  HubState = UsbhHubAckHubChange(DeviceObject, &v103, &v105);
  v86 = HubState;
  Log((_DWORD)DeviceObject, 4, 1095263080, 0, HubState);
  if ( HubState < 0 || (v103 & 2) != 0 || BYTE1(v8[125].Header.WaitListHead.Flink) == v88 && (v104 & 2) != 0 )
  {
LABEL_174:
    KeSetEvent(v8 + 112, 0, 0);
    if ( (v103 & 2) != 0 || !BYTE1(v8[125].Header.WaitListHead.Flink) && (v104 & 2) != 0 )
    {
      Log((_DWORD)DeviceObject, 4, 1749512054, 0, v86);
      if ( BYTE2(v8[125].Header.WaitListHead.Flink) == (_BYTE)v92 )
      {
        BYTE2(v8[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx((__int64)DeviceObject, 1u, (int)UsbhSetHubOvercurrentDetectedKey, v92, 0, 1666340431, 0LL);
      }
      LOBYTE(v100) = 0;
      UsbhException((int)DeviceObject, 0, 75, (int)&v103, 4, HubState, v105, usbfile_bus_c, 3318, v100);
    }
    else if ( !Usb_Disconnected(HubState) )
    {
      Log((_DWORD)DeviceObject, 4, 1769433138, 0, v86);
      LOBYTE(v100) = 0;
      UsbhException((int)DeviceObject, 0, 1, v91, 0, HubState, v105, usbfile_bus_c, 3331, v100);
    }
    goto LABEL_182;
  }
  LOBYTE(v100) = 0;
  if ( (v104 & 2) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 72, (int)&v103, 4, HubState, v105, usbfile_bus_c, 3270, v100);
  }
  else if ( (v104 & 1) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 73, (int)&v103, 4, HubState, v105, usbfile_bus_c, 3273, v100);
  }
  else
  {
    UsbhException((int)DeviceObject, 0, 74, (int)&v103, 4, HubState, v105, usbfile_bus_c, 3277, v100);
  }
  _InterlockedDecrement(&v8[114].Header.Lock);
  UsbhDecHubBusy((__int64)DeviceObject, v89, (_QWORD *)v4);
  UsbhPostInterrupt(DeviceObject);
  result = Log((_DWORD)DeviceObject, 4, 1769422387, 0, v8[114].Header.LockNV);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v90 )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             1,
             38,
             (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
  return result;
}
