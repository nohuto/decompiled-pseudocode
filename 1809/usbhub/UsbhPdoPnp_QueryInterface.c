/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x1C00261A0
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C000E5D0 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhBusifGetSSHub @ 0x1C00273E4 (UsbhBusifGetSSHub.c)
 *     UsbhBusIfLocationReference @ 0x1C0029990 (UsbhBusIfLocationReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int Status; // esi
  __int64 v10; // r15
  unsigned __int16 v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  KIRQL v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  SIZE_T v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  KIRQL v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rsi
  _QWORD *v40; // rdi
  _QWORD *v41; // rdx
  _QWORD *v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  unsigned int SSHub; // r12d
  _DWORD *v50; // rcx
  _IO_STACK_LOCATION *v51; // rax
  _LARGE_INTEGER ByteOffset; // rax
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  KIRQL v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rsi
  _QWORD *v60; // rdi
  _QWORD *v61; // rdx
  _QWORD *v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  _QWORD *v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  KSPIN_LOCK *v73; // r13
  KIRQL v74; // al
  __int64 v75; // r12
  __int64 v76; // rdx
  unsigned int v77; // ecx
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // r10
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 (__fastcall *v84)(_QWORD, __int64, IRP *, __int64); // rax
  int v85; // ecx
  __int64 v86; // r12
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // rax
  KSPIN_LOCK *v95; // rsi
  KIRQL v96; // r13
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  void (__fastcall *v102)(_QWORD, __int64, IRP *, __int64); // rax
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  KIRQL v109; // r14
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rsi
  _QWORD *v113; // rdi
  _QWORD *v114; // rdx
  _QWORD *v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  _QWORD *v118; // rcx
  _QWORD *v119; // rax
  _QWORD *v120; // rdx
  __int64 v121; // rdx
  _LARGE_INTEGER v122; // rax
  int v123; // eax
  unsigned int v124; // ebx
  int v125; // eax
  _DWORD *v126; // rax
  int v127; // eax
  int v128; // r10d
  int v129; // r10d
  int v130; // eax
  int v131; // [rsp+48h] [rbp-50h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+50h] [rbp-48h]
  KIRQL v133; // [rsp+A0h] [rbp+8h]
  unsigned int v134; // [rsp+B8h] [rbp+20h]

  if ( !a1 )
    goto LABEL_236;
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    goto LABEL_235;
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5 = *(_QWORD *)(v4 + 1184);
  v6 = v5;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 812018033;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = a1;
        v6 = *(_QWORD *)(v4 + 1184);
      }
    }
  }
  Status = a2->IoStatus.Status;
  v134 = Status;
  if ( !v6 )
  {
LABEL_234:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  v10 = 0LL;
  v11 = *(_WORD *)(v4 + 1428);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v12 = *(_QWORD *)(v6 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1329877100;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = 1364543814LL;
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v15 = *(_QWORD *)(v6 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 1413771367;
      *(_QWORD *)(v16 + 16) = v11;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 24) = 0LL;
    }
  }
  if ( v11 )
  {
    v17 = *(_QWORD *)(v6 + 64);
    if ( !v17 )
      UsbhTrapFatal_Dbg(v6, 0LL);
    if ( *(_DWORD *)v17 != 541218120 )
      UsbhTrapFatal_Dbg(v6, v17);
    if ( v11 <= *(unsigned __int8 *)(v17 + 2938) )
    {
      v18 = *(_QWORD *)(v17 + 3056);
      if ( v18 )
      {
        v19 = 2928LL * v11 - 2928 + v18;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v20 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v20 = 1044672615;
          *(_QWORD *)(v20 + 16) = v11;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 24) = v19;
        }
        if ( v19 )
        {
          v10 = *(_QWORD *)(v19 + 392);
          if ( v10 )
          {
            v21 = *(_QWORD *)(v10 + 64);
            if ( !v21 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v19 + 392), 0LL);
            if ( *(_DWORD *)v21 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v19 + 392), *(_QWORD *)(v10 + 64));
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            if ( PoolWithTag )
            {
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              PoolWithTag[3] = 0LL;
              *(_DWORD *)PoolWithTag = 1668571500;
              PoolWithTag[4] = v10;
              *((_DWORD *)PoolWithTag + 6) = 1364543814;
              PoolWithTag[5] = a2;
              v23 = PoolWithTag + 1;
              v24 = *(_QWORD **)(v21 + 1280);
              if ( *v24 != v21 + 1272 )
                goto LABEL_226;
              *v23 = v21 + 1272;
              v23[1] = v24;
              *v24 = v23;
              *(_QWORD *)(v21 + 1280) = v23;
            }
            else
            {
              ++*(_DWORD *)(v21 + 1288);
            }
          }
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14);
  if ( !v10 )
  {
    Status = v134;
    goto LABEL_234;
  }
  v25 = *(_QWORD *)(v4 + 1184);
  if ( !v25 )
    goto LABEL_236;
  v26 = *(_QWORD *)(v25 + 64);
  if ( !v26 )
    UsbhTrapFatal_Dbg(v25, 0LL);
  if ( *(_DWORD *)v26 != 541218120 )
    UsbhTrapFatal_Dbg(v25, *(_QWORD *)(v25 + 64));
  DeviceObject = *(struct _DEVICE_OBJECT **)(v26 + 1216);
  if ( !DeviceObject )
    goto LABEL_232;
  v27 = *(_DWORD **)(a1 + 64);
  if ( !v27 )
    goto LABEL_235;
  if ( *v27 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( v27[281] != 3 )
  {
LABEL_232:
    Log(v25, 256, 1902522657, (__int64)a2, a1);
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1184), v10, (__int64)a2, 0x51554946u);
    SSHub = v134;
    goto LABEL_70;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v4 + 1184), 256, 1902728019, (__int64)a2, a1);
    SSHub = UsbhBusifGetSSHub(*(_QWORD *)(v4 + 1184), v121, a2);
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1184), v10, (__int64)a2, 0x51554946u);
LABEL_70:
    a2->IoStatus.Status = SSHub;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v50 = *(_DWORD **)(a1 + 64);
    if ( v50 )
    {
      if ( *v50 != 1329877064 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v51 = a2->Tail.Overlay.CurrentStackLocation;
      if ( v51->Parameters.QueryInterface.Size < 0x28u )
      {
        SSHub = -1073741823;
      }
      else
      {
        ByteOffset = v51->Parameters.Read.ByteOffset;
        SSHub = 0;
        *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhBusIfLocationReference;
        *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhBusIfLocationDereference;
        *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhBusIfLocationGetLocationStrings;
        *(_DWORD *)ByteOffset.QuadPart = 65576;
        *(_QWORD *)(ByteOffset.QuadPart + 8) = v50;
        UsbhBusIfLocationReference();
      }
      a2->IoStatus.Status = SSHub;
      a2->IoStatus.Information = 0LL;
      v53 = *(_QWORD *)(v4 + 1184);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v53 )
        {
          v54 = *(_QWORD *)(v53 + 64);
          if ( v54 )
          {
            v55 = *(_QWORD *)(v54 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v54 + 880)) & *(_DWORD *)(v54 + 884));
            *(_DWORD *)v55 = 1329877109;
            *(_QWORD *)(v55 + 8) = 0LL;
            *(_QWORD *)(v55 + 16) = v10;
            *(_QWORD *)(v55 + 24) = 1364543814LL;
          }
        }
      }
      v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v53 )
        {
          v57 = *(_QWORD *)(v53 + 64);
          if ( v57 )
          {
            v58 = *(_QWORD *)(v57 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v57 + 880)) & *(_DWORD *)(v57 + 884));
            *(_DWORD *)v58 = 1348891236;
            *(_QWORD *)(v58 + 8) = 0LL;
            *(_QWORD *)(v58 + 16) = v10;
            *(_QWORD *)(v58 + 24) = 1364543814LL;
          }
        }
      }
      v59 = *(_QWORD *)(v10 + 64);
      if ( v59 )
      {
        if ( *(_DWORD *)v59 != 1329877064 )
          UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64));
        v60 = (_QWORD *)(v59 + 1272);
        v61 = *(_QWORD **)(v59 + 1272);
        if ( v61 == (_QWORD *)(v59 + 1272) )
        {
LABEL_193:
          v123 = *(_DWORD *)(v59 + 1288);
          if ( v123 )
            *(_DWORD *)(v59 + 1288) = v123 - 1;
        }
        else
        {
          while ( 1 )
          {
            v62 = v61 - 1;
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              if ( v53 )
              {
                v63 = *(_QWORD *)(v53 + 64);
                if ( v63 )
                {
                  v64 = *(_QWORD *)(v63 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v63 + 880)) & *(_DWORD *)(v63 + 884));
                  *(_DWORD *)v64 = 1064591724;
                  *(_QWORD *)(v64 + 8) = 0LL;
                  *(_QWORD *)(v64 + 16) = v59;
                  *(_QWORD *)(v64 + 24) = 1364543814LL;
                }
              }
            }
            if ( *((_DWORD *)v62 + 6) == 1364543814 && (IRP *)v62[5] == a2 )
              break;
            v61 = (_QWORD *)*v61;
            if ( v61 == v60 )
              goto LABEL_193;
          }
          v65 = (_QWORD *)*v61;
          v66 = v61;
          if ( *(_QWORD **)(*v61 + 8LL) != v61 )
            goto LABEL_226;
          v67 = (_QWORD *)v62[2];
          if ( (_QWORD *)*v67 != v66 )
            goto LABEL_226;
          *v67 = v65;
          v65[1] = v67;
          ExFreePoolWithTag(v62, 0);
        }
        if ( (_QWORD *)*v60 == v60 && !*(_DWORD *)(v59 + 1288) )
          KeSetEvent((PRKEVENT)(v59 + 1296), 0, 0);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v56);
        goto LABEL_70;
      }
LABEL_224:
      UsbhTrapFatal_Dbg(v10, 0LL);
    }
    goto LABEL_235;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_USBDI_GUID, 0x10uLL) == 16
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_HUB_GUID, 0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
         0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS_GUID,
         0x10uLL) == 16 )
  {
    v68 = *(_QWORD *)(v4 + 1184);
    v69 = v68;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v68 )
      {
        v70 = *(_QWORD *)(v68 + 64);
        if ( v70 )
        {
          v71 = *(_QWORD *)(v70 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 880)) & *(_DWORD *)(v70 + 884));
          *(_DWORD *)v71 = 845572465;
          *(_QWORD *)(v71 + 8) = 0LL;
          *(_QWORD *)(v71 + 16) = a2;
          *(_QWORD *)(v71 + 24) = a1;
          v69 = *(_QWORD *)(v4 + 1184);
        }
      }
    }
    if ( !v69 )
      goto LABEL_236;
    v72 = *(_QWORD *)(v69 + 64);
    if ( !v72 )
      goto LABEL_231;
    if ( *(_DWORD *)v72 != 541218120 )
      UsbhTrapFatal_Dbg(v69, *(_QWORD *)(v69 + 64));
    v73 = (KSPIN_LOCK *)(v72 + 3720);
    v74 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v72 + 3720));
    v75 = *(_QWORD *)(a1 + 64);
    v133 = v74;
    if ( v75 )
    {
      if ( *(_DWORD *)v75 != 1329877064 )
        UsbhTrapFatal_Dbg(a1, v75);
      v76 = *(int *)(v75 + 1152);
      v77 = *(_DWORD *)(v75 + 1152);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v78 = *(_QWORD *)(v69 + 64);
        if ( v78 )
        {
          v79 = *(_QWORD *)(v78 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v78 + 880)) & *(_DWORD *)(v78 + 884));
          *(_DWORD *)v79 = 824923716;
          *(_QWORD *)(v79 + 8) = 0LL;
          *(_QWORD *)(v79 + 16) = a1;
          *(_QWORD *)(v79 + 24) = v76;
          v77 = *(_DWORD *)(v75 + 1152);
        }
      }
      if ( v77 != 2 )
      {
        if ( v77 <= 1 )
          Log(v69, 256, 1146497825, a1, (int)v77);
        v86 = 0LL;
        goto LABEL_126;
      }
      v80 = *(_QWORD *)(v75 + 1160);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v81 = *(_QWORD *)(v69 + 64);
        if ( v81 )
        {
          v82 = *(_QWORD *)(v81 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v81 + 880)) & *(_DWORD *)(v81 + 884));
          *(_DWORD *)v82 = 724260420;
          *(_QWORD *)(v82 + 8) = 0LL;
          *(_QWORD *)(v82 + 16) = 1212442225LL;
          *(_QWORD *)(v82 + 24) = v80;
        }
      }
      v83 = *(_QWORD *)(v69 + 64);
      if ( v83 )
      {
        if ( *(_DWORD *)v83 != 541218120 )
          UsbhTrapFatal_Dbg(v69, *(_QWORD *)(v69 + 64));
        v84 = *(__int64 (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v83 + 4464);
        if ( v84 )
        {
          v85 = v84(*(_QWORD *)(v83 + 4232), v80, a2, 1212442225LL);
          if ( v85 >= 0 )
          {
            v86 = *(_QWORD *)(v75 + 1160);
LABEL_123:
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v87 = *(_QWORD *)(v69 + 64);
              if ( v87 )
              {
                v88 = *(_QWORD *)(v87 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v87 + 880)) & *(_DWORD *)(v87 + 884));
                *(_DWORD *)v88 = 841700932;
                *(_QWORD *)(v88 + 16) = v85;
                *(_QWORD *)(v88 + 8) = 0LL;
                *(_QWORD *)(v88 + 24) = v86;
              }
            }
LABEL_126:
            KeReleaseSpinLock(v73, v133);
            if ( !v86 )
            {
              v126 = PdoExt(a1);
              v127 = UsbhSyncResetDeviceInternal(*(PDEVICE_OBJECT *)(v4 + 1184), (__int64)(v126 + 236), a1);
              Log(*(_QWORD *)(v4 + 1184), 256, 1902732882, (__int64)a2, v127);
              if ( (v128 & 0xC0000000) == 0xC0000000 )
              {
                if ( !Usb_Disconnected(v128) )
                {
                  LOBYTE(v131) = 0;
                  UsbhException(
                    *(_QWORD *)(v4 + 1184),
                    *(unsigned __int16 *)(v4 + 1428),
                    121,
                    0,
                    0,
                    v129,
                    -1,
                    usbfile_pdo_c,
                    535,
                    v131);
                }
                SSHub = v134;
                a2->IoStatus.Status = v134;
                IofCompleteRequest(a2, 0);
                UsbhUnlatchPdo(*(_QWORD *)(v4 + 1184), v10, (__int64)a2, 0x51554946u);
                return SSHub;
              }
              v86 = UsbhRefPdoDeviceHandle(*(_QWORD *)(v4 + 1184), a1, (__int64)a2, 0x48446671u);
              Log(*(_QWORD *)(v4 + 1184), 256, 1902732872, *(_QWORD *)(v4 + 1160), a1);
              CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v86;
            }
            v89 = *(_QWORD *)(v4 + 1160);
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v90 = *(_QWORD *)(v4 + 1184);
              if ( v90 )
              {
                v91 = *(_QWORD *)(v90 + 64);
                if ( v91 )
                {
                  v92 = *(_QWORD *)(v91 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v91 + 880)) & *(_DWORD *)(v91 + 884));
                  *(_DWORD *)v92 = 1214671217;
                  *(_QWORD *)(v92 + 8) = 0LL;
                  *(_QWORD *)(v92 + 16) = v89;
                  *(_QWORD *)(v92 + 24) = a1;
                }
              }
            }
            CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v86;
            if ( !v86 )
            {
LABEL_146:
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v103 = *(_QWORD *)(v4 + 1184);
                if ( v103 )
                {
                  v104 = *(_QWORD *)(v103 + 64);
                  if ( v104 )
                  {
                    v105 = *(_QWORD *)(v104 + 888)
                         + 32LL
                         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v104 + 880)) & *(_DWORD *)(v104 + 884));
                    *(_DWORD *)v105 = 862349681;
                    *(_QWORD *)(v105 + 8) = 0LL;
                    *(_QWORD *)(v105 + 16) = a2;
                    *(_QWORD *)(v105 + 24) = a1;
                  }
                }
              }
              ++a2->CurrentLocation;
              ++a2->Tail.Overlay.CurrentStackLocation;
              SSHub = IofCallDriver(DeviceObject, a2);
              v106 = *(_QWORD *)(v4 + 1184);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                if ( v106 )
                {
                  v107 = *(_QWORD *)(v106 + 64);
                  if ( v107 )
                  {
                    v108 = *(_QWORD *)(v107 + 888)
                         + 32LL
                         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v107 + 880)) & *(_DWORD *)(v107 + 884));
                    *(_DWORD *)v108 = 1329877109;
                    *(_QWORD *)(v108 + 8) = 0LL;
                    *(_QWORD *)(v108 + 16) = v10;
                    *(_QWORD *)(v108 + 24) = 1364543814LL;
                  }
                }
              }
              v109 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                if ( v106 )
                {
                  v110 = *(_QWORD *)(v106 + 64);
                  if ( v110 )
                  {
                    v111 = *(_QWORD *)(v110 + 888)
                         + 32LL
                         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v110 + 880)) & *(_DWORD *)(v110 + 884));
                    *(_DWORD *)v111 = 1348891236;
                    *(_QWORD *)(v111 + 8) = 0LL;
                    *(_QWORD *)(v111 + 16) = v10;
                    *(_QWORD *)(v111 + 24) = 1364543814LL;
                  }
                }
              }
              v112 = *(_QWORD *)(v10 + 64);
              if ( v112 )
              {
                if ( *(_DWORD *)v112 != 1329877064 )
                  UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64));
                v113 = (_QWORD *)(v112 + 1272);
                v114 = *(_QWORD **)(v112 + 1272);
                if ( v114 == (_QWORD *)(v112 + 1272) )
                {
LABEL_227:
                  v130 = *(_DWORD *)(v112 + 1288);
                  if ( v130 )
                    *(_DWORD *)(v112 + 1288) = v130 - 1;
                }
                else
                {
                  while ( 1 )
                  {
                    v115 = v114 - 1;
                    if ( (UsbhLogMask & 0x100) != 0 )
                    {
                      if ( v106 )
                      {
                        v116 = *(_QWORD *)(v106 + 64);
                        if ( v116 )
                        {
                          v117 = *(_QWORD *)(v116 + 888)
                               + 32LL
                               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v116 + 880)) & *(_DWORD *)(v116 + 884));
                          *(_DWORD *)v117 = 1064591724;
                          *(_QWORD *)(v117 + 8) = 0LL;
                          *(_QWORD *)(v117 + 16) = v112;
                          *(_QWORD *)(v117 + 24) = 1364543814LL;
                        }
                      }
                    }
                    if ( *((_DWORD *)v115 + 6) == 1364543814 && (IRP *)v115[5] == a2 )
                      break;
                    v114 = (_QWORD *)*v114;
                    if ( v114 == v113 )
                      goto LABEL_227;
                  }
                  v118 = (_QWORD *)*v114;
                  v119 = v114;
                  if ( *(_QWORD **)(*v114 + 8LL) != v114 )
                    goto LABEL_226;
                  v120 = (_QWORD *)v115[2];
                  if ( (_QWORD *)*v120 != v119 )
                    goto LABEL_226;
                  *v120 = v118;
                  v118[1] = v120;
                  ExFreePoolWithTag(v115, 0);
                }
                if ( (_QWORD *)*v113 == v113 && !*(_DWORD *)(v112 + 1288) )
                  KeSetEvent((PRKEVENT)(v112 + 1296), 0, 0);
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v109);
                return SSHub;
              }
              goto LABEL_224;
            }
            v93 = *(_QWORD *)(v4 + 1184);
            if ( v93 )
            {
              v94 = *(_QWORD *)(v93 + 64);
              if ( !v94 )
                goto LABEL_222;
              if ( *(_DWORD *)v94 != 541218120 )
                UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1184), *(_QWORD *)(v93 + 64));
              v95 = (KSPIN_LOCK *)(v94 + 3720);
              v96 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v94 + 3720));
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v97 = *(_QWORD *)(v93 + 64);
                if ( v97 )
                {
                  v98 = *(_QWORD *)(v97 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v97 + 880)) & *(_DWORD *)(v97 + 884));
                  *(_DWORD *)v98 = 825054788;
                  *(_QWORD *)(v98 + 8) = 0LL;
                  *(_QWORD *)(v98 + 16) = v86;
                  *(_QWORD *)(v98 + 24) = a2;
                }
                if ( (UsbhLogMask & 0x100) != 0 )
                {
                  v99 = *(_QWORD *)(v93 + 64);
                  if ( v99 )
                  {
                    v100 = *(_QWORD *)(v99 + 888)
                         + 32LL
                         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v99 + 880)) & *(_DWORD *)(v99 + 884));
                    *(_DWORD *)v100 = 841832004;
                    *(_QWORD *)(v100 + 8) = 0LL;
                    *(_QWORD *)(v100 + 16) = v86;
                    *(_QWORD *)(v100 + 24) = 1212442225LL;
                  }
                }
              }
              v101 = *(_QWORD *)(v93 + 64);
              if ( !v101 )
LABEL_222:
                UsbhTrapFatal_Dbg(v93, 0LL);
              if ( *(_DWORD *)v101 != 541218120 )
                UsbhTrapFatal_Dbg(v93, *(_QWORD *)(v93 + 64));
              v102 = *(void (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v101 + 4472);
              if ( v102 )
                v102(*(_QWORD *)(v101 + 4232), v86, a2, 1212442225LL);
              KeReleaseSpinLock(v95, v96);
              goto LABEL_146;
            }
LABEL_236:
            UsbhTrapFatal_Dbg(0LL, 0LL);
          }
        }
        else
        {
          v85 = -1073741822;
        }
        v86 = 0LL;
        goto LABEL_123;
      }
LABEL_231:
      UsbhTrapFatal_Dbg(v69, 0LL);
    }
LABEL_235:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  v29 = RtlCompareMemory(
          CurrentStackLocation->Parameters.Create.SecurityContext,
          &GUID_D3COLD_SUPPORT_INTERFACE,
          0x10uLL);
  v30 = *(_QWORD *)(v4 + 1184);
  if ( v29 != 16 )
  {
    v31 = *(_QWORD *)(v4 + 1184);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v30 )
      {
        v32 = *(_QWORD *)(v30 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 879126897;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = a2;
          *(_QWORD *)(v33 + 24) = a1;
          v31 = *(_QWORD *)(v4 + 1184);
        }
      }
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v31 )
        {
          v34 = *(_QWORD *)(v31 + 64);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v34 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
            *(_DWORD *)v35 = 1329877109;
            *(_QWORD *)(v35 + 8) = 0LL;
            *(_QWORD *)(v35 + 16) = v10;
            *(_QWORD *)(v35 + 24) = 1364543814LL;
          }
        }
      }
    }
    v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v31 )
      {
        v37 = *(_QWORD *)(v31 + 64);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
          *(_DWORD *)v38 = 1348891236;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = v10;
          *(_QWORD *)(v38 + 24) = 1364543814LL;
        }
      }
    }
    v39 = *(_QWORD *)(v10 + 64);
    if ( v39 )
    {
      if ( *(_DWORD *)v39 != 1329877064 )
        UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64));
      v40 = (_QWORD *)(v39 + 1272);
      v41 = *(_QWORD **)(v39 + 1272);
      if ( v41 == (_QWORD *)(v39 + 1272) )
      {
LABEL_203:
        v125 = *(_DWORD *)(v39 + 1288);
        if ( v125 )
          *(_DWORD *)(v39 + 1288) = v125 - 1;
        goto LABEL_68;
      }
      while ( 1 )
      {
        v42 = v41 - 1;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v31 )
          {
            v43 = *(_QWORD *)(v31 + 64);
            if ( v43 )
            {
              v44 = *(_QWORD *)(v43 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
              *(_DWORD *)v44 = 1064591724;
              *(_QWORD *)(v44 + 8) = 0LL;
              *(_QWORD *)(v44 + 16) = v39;
              *(_QWORD *)(v44 + 24) = 1364543814LL;
            }
          }
        }
        if ( *((_DWORD *)v42 + 6) == 1364543814 && (IRP *)v42[5] == a2 )
          break;
        v41 = (_QWORD *)*v41;
        if ( v41 == v40 )
          goto LABEL_203;
      }
      v45 = (_QWORD *)*v41;
      v46 = v41;
      if ( *(_QWORD **)(*v41 + 8LL) == v41 )
      {
        v47 = (_QWORD *)v42[2];
        if ( (_QWORD *)*v47 == v46 )
        {
          *v47 = v45;
          v45[1] = v47;
          ExFreePoolWithTag(v42, 0);
LABEL_68:
          if ( (_QWORD *)*v40 == v40 && !*(_DWORD *)(v39 + 1288) )
            KeSetEvent((PRKEVENT)(v39 + 1296), 0, 0);
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v36);
          SSHub = v134;
          goto LABEL_70;
        }
      }
LABEL_226:
      __fastfail(3u);
    }
    goto LABEL_224;
  }
  Log(v30, 256, 1902732853, (__int64)a2, a1);
  if ( CurrentStackLocation->Parameters.CreatePipe.Parameters != (_NAMED_PIPE_CREATE_PARAMETERS *)v4
    && CurrentStackLocation->Parameters.QueryInterface.Size == 72
    && CurrentStackLocation->Parameters.QueryInterface.Version == 1 )
  {
    v122 = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( a2->IoStatus.Status )
    {
      *(_DWORD *)v122.QuadPart = 65608;
LABEL_180:
      *(_QWORD *)(v122.QuadPart + 8) = v4;
      *(_QWORD *)(v122.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
      *(_QWORD *)(v122.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
      *(_QWORD *)(v122.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
      *(_QWORD *)(v122.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
      *(_QWORD *)(v122.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
      *(_QWORD *)(v122.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
      *(_QWORD *)(v122.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
      UsbhUnlatchPdo(*(_QWORD *)(v4 + 1184), v10, (__int64)a2, 0x51554946u);
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    }
    if ( *(_WORD *)v122.QuadPart == 72 && *(_WORD *)(v122.QuadPart + 2) == 1 )
    {
      *(_OWORD *)(v4 + 2976) = *(_OWORD *)v122.QuadPart;
      *(_OWORD *)(v4 + 2992) = *(_OWORD *)(v122.QuadPart + 16);
      *(_OWORD *)(v4 + 3008) = *(_OWORD *)(v122.QuadPart + 32);
      *(_OWORD *)(v4 + 3024) = *(_OWORD *)(v122.QuadPart + 48);
      *(_QWORD *)(v4 + 3040) = *(_QWORD *)(v122.QuadPart + 64);
      goto LABEL_180;
    }
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1184), v10, (__int64)a2, 0x51554946u);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  else
  {
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1184), v10, (__int64)a2, 0x51554946u);
    v124 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v124;
  }
}
