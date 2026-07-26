/*
 * XREFs of NdisIMInitializeDeviceInstanceEx @ 0x1C007F9E0
 * Callers:
 *     NdisIMInitializeDeviceInstance @ 0x1C007F9C0 (NdisIMInitializeDeviceInstance.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C007F64C (-ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ndisIMInitializeDeviceInstanceInternal @ 0x1C00802A0 (ndisIMInitializeDeviceInstanceInternal.c)
 *     ndisMiniportFatalError @ 0x1C0118E10 (ndisMiniportFatalError.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C013A410 (ndisFindMiniportOnGlobalList.c)
 */

NDIS_STATUS __stdcall NdisIMInitializeDeviceInstanceEx(
        NDIS_HANDLE DriverHandle,
        PNDIS_STRING DriverInstance,
        NDIS_HANDLE DeviceContext)
{
  PNDIS_STRING v4; // r14
  __int64 MiniportOnGlobalList; // rax
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // rdi
  int v9; // edx
  NDIS_STATUS v10; // ebx
  int v11; // edx
  char v13; // [rsp+30h] [rbp-38h]
  char v14[4]; // [rsp+40h] [rbp-28h]

  v4 = DriverInstance;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)DriverInstance;
    LOBYTE(DriverInstance) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)DriverInstance,
      1,
      42,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)DriverHandle,
      v13,
      (char)DeviceContext);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  KeWaitForSingleObject((char *)DriverHandle + 416, Executive, 0, 0, 0LL);
  *((_QWORD *)DriverHandle + 59) = KeGetCurrentThread();
  MiniportOnGlobalList = ndisFindMiniportOnGlobalList(v4);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)MiniportOnGlobalList;
  if ( MiniportOnGlobalList && (*(_DWORD *)(MiniportOnGlobalList + 124) & 0x14010) == 0x10000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        1,
        43,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        MiniportOnGlobalList);
    }
    if ( ndisIsMiniportStarted(v8) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          1,
          44,
          &WPP_a3868331fe073391203672ef2b551460_Traceguids,
          (char)v8);
      }
      v10 = 65539;
    }
    else
    {
      v10 = ndisIMInitializeDeviceInstanceInternal((char)v8, (char)DeviceContext);
      if ( v10 )
        ndisMiniportFatalError((char)v8);
    }
  }
  else
  {
    v10 = ndisIMQueueDeviceInstance((struct _NDIS_M_DRIVER_BLOCK *)DriverHandle, v4, DeviceContext);
  }
  *((_QWORD *)DriverHandle + 59) = 0LL;
  KeReleaseMutex((PRKMUTEX)((char *)DriverHandle + 416), 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v10;
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0x2Du,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)DriverHandle,
      (char)v4,
      (char)DeviceContext,
      *(_DWORD *)v14);
  }
  return v10;
}
