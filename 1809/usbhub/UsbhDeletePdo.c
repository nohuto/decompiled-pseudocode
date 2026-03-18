/*
 * XREFs of UsbhDeletePdo @ 0x1C005898C
 * Callers:
 *     UsbhRequestPortSuspend @ 0x1C000BA08 (UsbhRequestPortSuspend.c)
 *     UsbhWaitConnect @ 0x1C0017FC0 (UsbhWaitConnect.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0048B04 (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0048C88 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0048E14 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0048FC4 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0049264 (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0049368 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00494D0 (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0008C18 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0010320 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     UsbhDisconnectPdoFromHub @ 0x1C003E074 (UsbhDisconnectPdoFromHub.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0046900 (SET_PDO_HWPNPSTATE.c)
 *     UsbhBillboardCleanup @ 0x1C005843C (UsbhBillboardCleanup.c)
 *     UsbhDeleteOrphanPdo @ 0x1C00587E8 (UsbhDeleteOrphanPdo.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C005A08C (UsbhRemoveAndDeletePdo.c)
 *     UsbhResetPortData @ 0x1C005A1EC (UsbhResetPortData.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005CB38 (UsbhEtwLogDeviceInformation.c)
 */

void __fastcall UsbhDeletePdo(__int64 a1, struct _DEVICE_OBJECT *a2, int a3, int a4, __int64 a5)
{
  __int64 v9; // r15
  char v10; // r12
  __int64 v11; // rdx
  int v12; // r10d
  _DWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // r8

  v9 = 0LL;
  v10 = 0;
  Log(a1, 256, 1682981967, (__int64)a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v12 )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v12 + 1,
      v12 + 25,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
      a2);
  v13 = PdoExt((__int64)a2);
  if ( a1 )
  {
    FdoExt(a1);
    v9 = a5 + 132;
  }
  else
  {
    UsbhDeleteOrphanPdo(a2);
  }
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    if ( a3 != 1 )
      UsbhEtwLogDeviceInformation(v13, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0LL);
    v14 = v13 + 330;
    v15 = *((_QWORD *)v13 + 165);
    if ( v15 || *((_QWORD *)v13 + 166) )
    {
      if ( *(_QWORD **)(v15 + 8) != v14 || (v16 = (_QWORD *)*((_QWORD *)v13 + 166), (_QWORD *)*v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      *((_QWORD *)v13 + 166) = 0LL;
    }
    if ( (v13[356] & 8) != 0 )
    {
      UsbhResetPortData(a1, a2, v9);
      v10 = 1;
    }
    SET_PDO_HWPNPSTATE((__int64)a2, 6, a4);
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
    if ( v10 )
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v13 + 714), 1, 0);
    if ( a1 )
      UsbhDisableTimerObject(a1, (__int64)(v13 + 426));
    KeWaitForSingleObject(v13 + 324, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v13 + 301) )
      UsbhBillboardCleanup(a2);
    v17 = (void *)*((_QWORD *)v13 + 142);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)v13 + 142) = 0LL;
    }
    v18 = (void *)*((_QWORD *)v13 + 143);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)v13 + 143) = 0LL;
    }
    v19 = (void *)*((_QWORD *)v13 + 280);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)v13 + 280) = 0LL;
    }
    v20 = (void *)*((_QWORD *)v13 + 355);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)v13 + 355) = 0LL;
    }
    v21 = (void *)*((_QWORD *)v13 + 299);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v13 + 299) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v13 + 300);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v13 + 300) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v13 + 316);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v13 + 316) = 0LL;
    }
    v24 = (void *)*((_QWORD *)v13 + 106);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *((_QWORD *)v13 + 106) = 0LL;
    }
    UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740855, 1);
    Log(a1, 256, 1682457649, (__int64)a2, 0LL);
    if ( (v13[356] & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a2);
      KeWaitForSingleObject(v13 + 310, Executive, 0, 0, 0LL);
    }
    v26 = (_QWORD *)*((_QWORD *)v13 + 107);
    if ( v26 )
    {
      UsbhDecHubBusy(a1, v25, v26);
      *((_QWORD *)v13 + 107) = 0LL;
    }
    if ( (v13[356] & 2) != 0 )
      UsbhDisconnectPdoFromHub((__int64)a2);
    v13[356] = 16;
    UsbhRemoveAndDeletePdo(a2);
  }
}
