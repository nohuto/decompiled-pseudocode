/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x1C00164A0
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0045A44 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C0001EB8 (UsbhSignalResumeEvent.c)
 *     UsbhHandleSuspend @ 0x1C000C2BC (UsbhHandleSuspend.c)
 *     UsbhSignalDriverResetEvent @ 0x1C000C6DC (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C000CFB4 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhEnumerate1 @ 0x1C000FF08 (UsbhEnumerate1.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0011AF8 (UsbhAcquireEnumBusLock.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhWaitConnect @ 0x1C0018760 (UsbhWaitConnect.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C001ADB4 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhEnumerate2 @ 0x1C002C33C (UsbhEnumerate2.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00417A4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C0046EC8 (UsbhSignalSuspendEvent.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhDropDevice @ 0x1C0056E2C (UsbhDropDevice.c)
 *     UsbhHandleOvercurrent @ 0x1C0056FD0 (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v5; // r9
  void *DeviceExtension; // r15
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // cx
  __int64 v11; // rcx
  unsigned __int16 v12; // r8
  void *v13; // rdx
  __int64 v14; // rcx
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  unsigned __int16 v18; // bp
  void *v19; // rdx
  __int64 v20; // rcx
  KIRQL v21; // r14
  void *v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int16 v28; // r9
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // r12
  void *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // r8
  void *v40; // rdx
  __int64 v41; // rcx
  int v42; // ecx
  int v43; // ebp
  __int64 v44; // r14
  __int16 v45; // dx
  int v46; // eax
  __int64 v47; // r14
  _QWORD *v48; // rcx
  void (__fastcall *v49)(_QWORD, int *, __int64, __int64); // rax
  int v50; // eax
  void *v51; // rdx
  __int64 v52; // rcx
  __int64 v54; // rbp
  char *PoolWithTag; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  __int64 v58; // rbp
  __int64 v59; // r9
  _DWORD *v60; // rbp
  __int64 *v61; // r14
  __int64 *v62; // r8
  void *v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // rdx
  __int64 **v66; // rcx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  __int64 v71; // r9
  __int64 v72; // rax
  int v73; // ebp
  __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // rdx
  struct _KEVENT *v77; // rcx
  __int64 v78; // r10
  int v79; // eax
  __int64 v80; // rbp
  int v81; // eax
  int v82; // [rsp+48h] [rbp-50h]
  int v83; // [rsp+50h] [rbp-48h] BYREF
  KIRQL v84; // [rsp+58h] [rbp-40h]

  v5 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_173;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v9 = *(_WORD *)(a2 + 4);
  v10 = v9;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v11 = *((_QWORD *)DeviceExtension + 111)
        + 32LL
        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
    *(_DWORD *)v11 = 729179504;
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = a2;
    v10 = *(_WORD *)(a2 + 4);
  }
  v12 = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      v10,
      88,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v10,
      0);
    v12 = *(_WORD *)(a2 + 4);
    v5 = a3;
  }
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v13 = a1->DeviceExtension;
    if ( v13 )
    {
      v14 = *((_QWORD *)v13 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
      *(_DWORD *)v14 = 1313891184;
      *(_QWORD *)(v14 + 16) = v12;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v15 = a1->DeviceExtension;
      if ( v15 )
      {
        v16 = *((_QWORD *)v15 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
        *(_DWORD *)v16 = 1145332592;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = a2;
        *(_QWORD *)(v16 + 24) = v5;
      }
    }
  }
  v17 = 0LL;
  v18 = *(_WORD *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v19 = a1->DeviceExtension;
    if ( v19 )
    {
      v20 = *((_QWORD *)v19 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
      *(_DWORD *)v20 = 1329877100;
      *(_QWORD *)(v20 + 16) = v18;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 24) = 1884308559LL;
    }
  }
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v22 = a1->DeviceExtension;
    if ( v22 )
    {
      v23 = *((_QWORD *)v22 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
      *(_DWORD *)v23 = 1413771367;
      *(_QWORD *)(v23 + 16) = v18;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 24) = 0LL;
    }
  }
  if ( !v18 )
    goto LABEL_30;
  v24 = (unsigned __int8 *)a1->DeviceExtension;
  if ( !v24 )
LABEL_173:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v24 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v24);
  if ( v18 <= v24[2938] )
  {
    v25 = *((_QWORD *)v24 + 382);
    if ( v25 )
    {
      v26 = 2928LL * v18 + v25 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v27 = *((_QWORD *)v24 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
        *(_DWORD *)v27 = 1044672615;
        *(_QWORD *)(v27 + 16) = v18;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 24) = v26;
      }
      if ( v26 )
      {
        v17 = *(_QWORD *)(v26 + 392);
        if ( v17 )
        {
          v54 = *(_QWORD *)(v17 + 64);
          if ( !v54 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), 0LL);
          if ( *(_DWORD *)v54 != 1329877064 )
            UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), *(_QWORD *)(v17 + 64));
          PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
          if ( PoolWithTag )
          {
            *(_QWORD *)(PoolWithTag + 4) = 0LL;
            *(_QWORD *)(PoolWithTag + 12) = 0LL;
            *((_DWORD *)PoolWithTag + 5) = 0;
            *((_QWORD *)PoolWithTag + 5) = 0LL;
            *((_QWORD *)PoolWithTag + 3) = 1884308559LL;
            *(_DWORD *)PoolWithTag = 1668571500;
            *((_QWORD *)PoolWithTag + 4) = v17;
            v56 = PoolWithTag + 8;
            v57 = *(_QWORD **)(v54 + 1280);
            if ( *v57 != v54 + 1272 )
              goto LABEL_168;
            *v56 = v54 + 1272;
            v56[1] = v57;
            *v57 = v56;
            *(_QWORD *)(v54 + 1280) = v56;
          }
          else
          {
            ++*(_DWORD *)(v54 + 1288);
          }
        }
      }
    }
  }
LABEL_30:
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21);
  if ( v17 )
    *(_DWORD *)(a2 + 416) = 1;
  v28 = *a4;
  v29 = (v17 != 0) | 0x10;
  if ( (*a4 & 1) == 0 )
    v29 = v17 != 0;
  v30 = v29 | 2;
  if ( (v28 & 4) == 0 )
    v30 = v29;
  if ( (v28 & 8) != 0 )
    v30 |= 4u;
  *(_WORD *)(a2 + 420) = v28;
  v31 = v30 | 8;
  if ( (v28 & 2) == 0 )
    v31 = v30;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v32 = a1->DeviceExtension;
    if ( v32 )
    {
      v33 = *((_QWORD *)v32 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
      *(_DWORD *)v33 = 1414087210;
      *(_QWORD *)(v33 + 16) = v28;
      *(_QWORD *)(v33 + 24) = v31;
      *(_QWORD *)(v33 + 8) = 0LL;
    }
  }
  v34 = *(unsigned __int16 *)(a2 + 4);
  v35 = *(unsigned int *)(a2 + 400);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v36 = a1->DeviceExtension;
    if ( v36 )
    {
      v37 = *((_QWORD *)v36 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
      *(_DWORD *)v37 = 844382762;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = v35;
      *(_QWORD *)(v37 + 24) = v34;
    }
  }
  v38 = a3;
  v39 = *(unsigned int *)(a3 + 8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v40 = a1->DeviceExtension;
    if ( v40 )
    {
      v41 = *((_QWORD *)v40 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v40 + 220) & *((_DWORD *)v40 + 221));
      *(_DWORD *)v41 = 861159978;
      *(_QWORD *)(v41 + 24) = v31;
      *(_QWORD *)(v41 + 8) = 0LL;
      *(_QWORD *)(v41 + 16) = v39;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v39,
        89,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_WORD *)(a2 + 420));
      v38 = a3;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int16 *)(a2 + 4),
          v39,
          90,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(a2 + 400));
        v38 = a3;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v39,
            91,
            (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
            *(_WORD *)(a2 + 4),
            *(_DWORD *)(v38 + 8));
          v38 = a3;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v39,
            92,
            (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
            *(_WORD *)(a2 + 4),
            v31);
          v38 = a3;
        }
      }
    }
  }
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 )
  {
    v72 = *(unsigned int *)(v38 + 8);
    if ( (v72 & 0x80008) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v73 = a3;
      }
      else
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          93,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          *(_WORD *)(a2 + 4));
        v73 = a3;
        v72 = *(unsigned int *)(a3 + 8);
      }
      Log((__int64)a1, 512, 1886353240, v31, v72);
      v31 &= ~8u;
      UsbhSignalResumeEvent((int)a1, a2);
      UsbhSignalSuspendEvent(a1, a2);
      LOBYTE(v82) = 0;
      UsbhException((int)a1, *(unsigned __int16 *)(a2 + 4), 60, v73, 56, 0, 0, usbfile_pchange_c, 5582, v82);
      v38 = a3;
    }
  }
  v42 = *(_DWORD *)(v38 + 8);
  v43 = *(_DWORD *)(v38 + 32);
  v44 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v45 = *(_WORD *)(a2 + 420);
  v46 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v44;
  v47 = a2 + 32 * (v44 + 27);
  *(_DWORD *)v47 = v46;
  *(_DWORD *)(v47 + 4) = v42;
  *(_BYTE *)(v47 + 18) = v31;
  *(_WORD *)(v47 + 16) = v45;
  *(_QWORD *)(v47 + 8) = v17;
  *(_BYTE *)(v47 + 19) = 0;
  *(_DWORD *)(v47 + 20) = v43;
  *(_DWORD *)(v47 + 28) = 1;
  v48 = a1->DeviceExtension;
  if ( !v48 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v48 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v49 = (void (__fastcall *)(_QWORD, int *, __int64, __int64))v48[574];
  if ( v49 )
  {
    v49(v48[570], &v83, v39, v35);
    LODWORD(v49) = v83;
    v38 = a3;
  }
  *(_DWORD *)(v47 + 24) = (_DWORD)v49 - v43;
  if ( !v17 )
  {
LABEL_67:
    if ( (*(_DWORD *)(v38 + 8) & 0x20000) == 0 || (v71 = *(_QWORD *)(v38 + 40), v71 == v17) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          94,
          (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
          *(_WORD *)(a2 + 4));
        v38 = a3;
      }
      v50 = *(_DWORD *)(a2 + 400);
      if ( v50 )
      {
        v67 = v50 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            v69 = v68 - 1;
            if ( v69 )
            {
              v70 = v69 - 1;
              if ( v70 )
              {
                if ( v70 == 1 )
                  *(_DWORD *)(a2 + 400) = UsbhHandleSuspend((__int64)a1, *(_QWORD *)(v38 + 8), v31, a2, v17);
              }
              else
              {
                if ( (*(_DWORD *)(v38 + 8) & 8) != 0 )
                {
                  *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent((int)a1, v17);
                }
                else
                {
                  *(_DWORD *)(a2 + 400) = 4;
                  v79 = *(_DWORD *)(v38 + 8);
                  if ( (v79 & 0x20000) != 0 )
                  {
                    UsbhSignalSyncDeviceResetPdo((__int64)a1, v17, -1073741823);
                    UsbhSignalDriverResetEvent((__int64)a1, a2);
                    v80 = a3;
                    v79 = *(_DWORD *)(a3 + 8);
                  }
                  else
                  {
                    v80 = a3;
                  }
                  if ( (v79 & 0x10000) != 0 )
                  {
                    UsbhSignalSyncDeviceResetPdo((__int64)a1, v17, -1073741823);
                    UsbhSignalDriverResetEvent((__int64)a1, a2);
                    v79 = *(_DWORD *)(v80 + 8);
                  }
                  if ( (v79 & 0x40000) != 0 )
                  {
                    UsbhSignalSuspendEvent(a1, a2);
                    v79 = *(_DWORD *)(v80 + 8);
                  }
                  if ( (v79 & 0x100000) != 0 )
                  {
                    UsbhSignalResumeEvent((int)a1, a2);
                    if ( v31 == 1 )
                    {
                      UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
                      UsbhDropDevice(a1, a2, v17);
                    }
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    96,
                    (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids);
                }
                Log((__int64)a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v31);
              }
            }
            else
            {
              if ( (*(_DWORD *)(v38 + 8) & 8) != 0 )
                UsbhHandleOvercurrent((int)a1, v17);
              *(_DWORD *)(a2 + 400) = 3;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  95,
                  (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids);
              }
              Log((__int64)a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v31);
            }
          }
          else
          {
            *(_DWORD *)(a2 + 400) = UsbhEnumerate2((_DWORD)a1, v17);
          }
        }
        else
        {
          *(_DWORD *)(a2 + 400) = UsbhEnumerate1((__int64)a1, *(_QWORD *)(v38 + 8), v31, a2, v17);
        }
      }
      else
      {
        *(_DWORD *)(a2 + 400) = UsbhWaitConnect((_DWORD)a1, v17);
      }
    }
    else
    {
      Log((__int64)a1, 512, 1685222994, v71, *(unsigned int *)(v38 + 8));
      UsbhSignalSyncDeviceResetPdo((__int64)a1, *(_QWORD *)(v78 + 40), -1073741810);
      UsbhSignalDriverResetEvent((__int64)a1, a2);
    }
    goto LABEL_73;
  }
  v58 = *(_QWORD *)(v17 + 64);
  if ( !v58 )
    UsbhTrapFatal_Dbg(v17, 0LL);
  if ( *(_DWORD *)v58 != 1329877064 )
    UsbhTrapFatal_Dbg(v17, *(_QWORD *)(v17 + 64));
  if ( !*(_BYTE *)(v58 + 2740) || (*(_BYTE *)(a2 + 420) & 1) != 0 )
  {
    if ( (*(_DWORD *)(v58 + 1420) & 0x400000) != 0 )
    {
      KeWaitForSingleObject((PVOID)(v58 + 2944), Executive, 0, 0, 0LL);
      if ( (*(_DWORD *)(v58 + 1420) & 0x4000000) != 0 && (*(_BYTE *)(a3 + 8) & 1) != 0 )
      {
        Log((__int64)a1, 512, 1144213585, HIBYTE(*(_DWORD *)(v58 + 1420)) & 1, *(unsigned __int16 *)(a2 + 420));
        *(_DWORD *)(v58 + 1420) |= 0x3000000u;
        v77 = (struct _KEVENT *)(v58 + 2920);
        if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
          KeSetEvent(v77, 0, 0);
        else
          KeResetEvent(v77);
        KeSetEvent((PRKEVENT)(v58 + 2944), 0, 0);
        goto LABEL_73;
      }
      KeSetEvent((PRKEVENT)(v58 + 2944), 0, 0);
      v38 = a3;
    }
    goto LABEL_67;
  }
  v74 = *(unsigned int *)(v38 + 8);
  if ( (v74 & 0x30008) != 0 )
  {
    if ( (v74 & 0x30000) != 0 )
    {
      Log((__int64)a1, 512, 1650742098, *(_QWORD *)(v38 + 40), *(unsigned int *)(v38 + 8));
      UsbhSignalSyncDeviceResetPdo((__int64)a1, v17, -1073741823);
      UsbhSignalDriverResetEvent((__int64)a1, a2);
      v74 = *(unsigned int *)(a3 + 8);
    }
    Log((__int64)a1, 512, 1650741836, 0LL, v74);
    v75 = *(unsigned __int16 *)(a2 + 4);
    if ( *((_DWORD *)DeviceExtension + 768) == (_DWORD)v75 )
    {
      v76 = *(_QWORD *)(a2 + 376);
      if ( *((_QWORD *)DeviceExtension + 385) == v76 )
        UsbhReleaseEnumBusLockEx(a1, v76, v75);
    }
    LOBYTE(v82) = 1;
    UsbhException((int)a1, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 5639, v82);
  }
LABEL_73:
  if ( !*(_DWORD *)(a2 + 416) )
    goto LABEL_74;
  Log((__int64)a1, 1024, 1970032689, v17, a2);
  v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  *(_DWORD *)(a2 + 416) = 0;
  Log((__int64)a1, 1024, 1970032690, v17, a2);
  Log((__int64)a1, 256, 1685218896, v59, 1884308559LL);
  v60 = PdoExt(v17);
  v61 = (__int64 *)(v60 + 318);
  v62 = (__int64 *)*((_QWORD *)v60 + 159);
  if ( v62 == (__int64 *)(v60 + 318) )
  {
LABEL_169:
    v81 = v60[322];
    if ( v81 )
      v60[322] = v81 - 1;
    goto LABEL_102;
  }
  while ( 1 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v63 = a1->DeviceExtension;
      if ( v63 )
      {
        v64 = *((_QWORD *)v63 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v63 + 220) & *((_DWORD *)v63 + 221));
        *(_DWORD *)v64 = 1064591724;
        *(_QWORD *)(v64 + 8) = 0LL;
        *(_QWORD *)(v64 + 16) = v60;
        *(_QWORD *)(v64 + 24) = 1884308559LL;
      }
    }
    if ( *((_DWORD *)v62 + 4) == 1884308559 && !v62[4] )
      break;
    v62 = (__int64 *)*v62;
    if ( v62 == v61 )
      goto LABEL_169;
  }
  v65 = (__int64 *)*v62;
  if ( *(__int64 **)(*v62 + 8) != v62 || (v66 = (__int64 **)v62[1], *v66 != v62) )
LABEL_168:
    __fastfail(3u);
  *v66 = v65;
  v65[1] = (__int64)v66;
  ExFreePoolWithTag(v62 - 1, 0);
LABEL_102:
  if ( (__int64 *)*v61 == v61 && !v60[322] )
    KeSetEvent((PRKEVENT)v60 + 54, 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v84);
LABEL_74:
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v51 = a1->DeviceExtension;
    if ( v51 )
    {
      v52 = *((_QWORD *)v51 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v51 + 220) & *((_DWORD *)v51 + 221));
      *(_DWORD *)v52 = 762733936;
      *(_QWORD *)(v52 + 8) = 0LL;
      *(_QWORD *)(v52 + 16) = a2;
      *(_QWORD *)(v52 + 24) = 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}
