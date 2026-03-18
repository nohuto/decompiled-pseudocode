/*
 * XREFs of UsbhQueryBusRelations @ 0x1C0010640
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0010590 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001FF30 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002B4C0 (memmove.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0046900 (SET_PDO_HWPNPSTATE.c)
 */

__int64 __fastcall UsbhQueryBusRelations(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  unsigned int v4; // r13d
  int ActivityIdIrp; // eax
  int *DeviceExtension; // r14
  __int128 *v7; // rdi
  __int64 v8; // rax
  const GUID *v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  void *v12; // rdx
  __int64 v13; // rcx
  PVOID *Information; // r12
  _DWORD *v15; // r8
  unsigned __int8 *v16; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v18; // r15
  unsigned __int8 *v19; // rcx
  void *v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rdi
  _DWORD *v23; // rdi
  int *v24; // r12
  int *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  KSPIN_LOCK **v28; // rdi
  KSPIN_LOCK *v29; // r12
  void *v30; // rax
  unsigned int v31; // edi
  __int128 *v32; // rsi
  __int64 v33; // rax
  const GUID *v34; // rdx
  NTSTATUS v36; // eax
  unsigned int v37; // r10d
  KSPIN_LOCK *v38; // rax
  KSPIN_LOCK *v39; // r13
  KIRQL v40; // al
  KSPIN_LOCK v41; // rcx
  KSPIN_LOCK **v42; // rcx
  unsigned __int64 v43; // r10
  PVOID *v44; // r14
  __int64 v45; // r15
  KIRQL v46; // [rsp+64h] [rbp-9Ch]
  int v47; // [rsp+68h] [rbp-98h]
  _BYTE v48[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-28h] BYREF
  char v51[40]; // [rsp+E8h] [rbp-18h] BYREF
  char v52[40]; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, v48);
  else
    ActivityIdIrp = -1073741823;
  v47 = ActivityIdIrp;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (int *)a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_78;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  if ( ActivityIdIrp >= 0 )
    v7 = (__int128 *)v48;
  else
    v7 = 0LL;
  if ( dword_1C006E650 )
  {
    v8 = FdoExt(a1);
    UsbhEtwGetHubInfo(v8, v51);
    if ( v7 )
    {
      v9 = (const GUID *)&v49;
      v49 = *v7;
    }
    else
    {
      v9 = 0LL;
    }
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, v9);
  }
  v10 = DeviceExtension[340];
  v11 = DeviceExtension[340];
  if ( (UsbhLogMask & 2) != 0 )
  {
    v12 = a1->DeviceExtension;
    if ( v12 )
    {
      v13 = *((_QWORD *)v12 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
      *(_DWORD *)v13 = 827474513;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = a2;
      *(_QWORD *)(v13 + 24) = v10;
      v11 = DeviceExtension[340];
    }
  }
  Information = (PVOID *)a2->IoStatus.Information;
  if ( Information )
    v4 = *(_DWORD *)Information;
  if ( v11 != 5 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = 0;
    v36 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), a2);
    Log((_DWORD)a1, 2, 1363300897, 0, v36);
    return v37;
  }
  v15 = a1->DeviceExtension;
  if ( !v15 )
    goto LABEL_78;
  if ( *v15 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  Usbh_SSH_Event(a1, 6u, (__int64)(v15 + 346));
  v16 = (unsigned __int8 *)a1->DeviceExtension;
  if ( !v16 )
    goto LABEL_78;
  if ( *(_DWORD *)v16 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  ExDefaultNonPagedPoolType,
                                  8LL * (v4 + v16[2938] - 1) + 16,
                                  0x42554855u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v31 = -1073741670;
    Log((_DWORD)a1, 2, 1363300915, (_DWORD)a2, 0LL);
    a2->IoStatus.Information = v43;
    if ( v4 )
    {
      v44 = Information + 1;
      v45 = v4;
      do
      {
        ObfDereferenceObject(*v44++);
        --v45;
      }
      while ( v45 );
    }
    if ( Information )
      ExFreePoolWithTag(Information, 0);
    a2->IoStatus.Status = -1073741670;
    IofCompleteRequest(a2, 0);
    goto LABEL_44;
  }
  v19 = (unsigned __int8 *)a1->DeviceExtension;
  if ( !v19 )
    goto LABEL_78;
  if ( *(_DWORD *)v19 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  memset(PoolWithTag, 0, 8LL * (v4 + v19[2938] - 1) + 16);
  if ( v4 )
  {
    *v18 = v4;
    memmove(v18 + 4, Information + 1, 8LL * v4);
  }
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v20 = a1->DeviceExtension;
    if ( v20 )
    {
      v21 = *((_QWORD *)v20 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
      *(_DWORD *)v21 = 844251729;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = a2;
      *(_QWORD *)(v21 + 24) = v18;
    }
  }
  v22 = a1->DeviceExtension;
  if ( !v22 )
    goto LABEL_78;
  if ( *v22 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v23 = v22 + 346;
  *((_BYTE *)v23 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v23[34] = 1;
  v23[22] = 2018460752;
  v23[23] = 8;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v23;
  *((_QWORD *)v23 + 3) = KeGetCurrentThread();
  v24 = (int *)*((_QWORD *)DeviceExtension + 601);
  for ( DeviceExtension[226] = 0; v24 != DeviceExtension + 1202; v24 = *(int **)v24 )
  {
    v25 = v24 - 330;
    Log((_DWORD)a1, 2, 1902277169, (_DWORD)v24 - 1320, 0LL);
    FdoExt(a1);
    if ( !*((_QWORD *)v24 + 152) )
      *((_QWORD *)v25 + 317) = MEMORY[0xFFFFF78000000014];
    ObfReferenceObject(*((PVOID *)v25 + 105));
    *(_QWORD *)&v18[2 * (*v18)++ + 2] = *((_QWORD *)v25 + 105);
    v26 = PdoExt(*((_QWORD *)v25 + 105));
    v27 = ((unsigned __int8)*(_DWORD *)(v26 + 4) + 1) & 7;
    *(_DWORD *)(v26 + 4) = v27;
    v27 *= 32LL;
    *(_DWORD *)(v27 + v26 + 16) = 8;
    *(_DWORD *)(v27 + v26 + 20) = *(_DWORD *)(v26 + 1124);
    *(_DWORD *)(v27 + v26 + 24) = 3;
    *(_DWORD *)(v26 + 1124) = 3;
  }
  v28 = (KSPIN_LOCK **)(DeviceExtension + 1206);
  while ( 1 )
  {
    v29 = *v28;
    if ( *v28 == (KSPIN_LOCK *)v28 )
      break;
    if ( (KSPIN_LOCK **)v29[1] != v28 )
      goto LABEL_68;
    v38 = (KSPIN_LOCK *)*v29;
    if ( *(KSPIN_LOCK **)(*v29 + 8) != v29 )
      goto LABEL_68;
    *v28 = v38;
    v39 = v29 - 165;
    v38[1] = (KSPIN_LOCK)v28;
    Log((_DWORD)a1, 2, 1902277170, (_DWORD)v29 - 1320, 0LL);
    SET_PDO_HWPNPSTATE(*(v29 - 60), 5LL, 9LL);
    *v29 = 0LL;
    v29[1] = 0LL;
    v40 = KeAcquireSpinLockRaiseToDpc(v29 + 186);
    v46 = v40;
    if ( *((_DWORD *)v29 + 374) == 1 )
    {
      v41 = v39[105];
      *((_DWORD *)v39 + 704) = 0;
      USBD_RemoveDeviceFromGlobalList(v41);
      v40 = v46;
    }
    KeReleaseSpinLock(v39 + 351, v40);
    v42 = (KSPIN_LOCK **)*((_QWORD *)DeviceExtension + 606);
    if ( *v42 != (KSPIN_LOCK *)(DeviceExtension + 1210) )
LABEL_68:
      __fastfail(3u);
    *v29 = (KSPIN_LOCK)(DeviceExtension + 1210);
    v29[1] = (KSPIN_LOCK)v42;
    *v42 = v29;
    *((_QWORD *)DeviceExtension + 606) = v29;
  }
  v30 = a1->DeviceExtension;
  if ( !v30 )
LABEL_78:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v30 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  *((_DWORD *)v30 + 380) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *((_DWORD *)v30 + 368) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v30 + 1516));
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = (unsigned __int64)v18;
  v31 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), a2);
LABEL_44:
  if ( v47 >= 0 )
    v32 = (__int128 *)v48;
  else
    v32 = 0LL;
  if ( dword_1C006E650 )
  {
    v33 = FdoExt(a1);
    UsbhEtwGetHubInfo(v33, v52);
    if ( v32 )
    {
      v34 = (const GUID *)&v50;
      v50 = *v32;
    }
    else
    {
      v34 = 0LL;
    }
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v34);
  }
  return v31;
}
