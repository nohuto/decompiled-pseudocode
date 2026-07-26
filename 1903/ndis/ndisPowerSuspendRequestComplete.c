/*
 * XREFs of ndisPowerSuspendRequestComplete @ 0x1C00B8690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00143F4 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3B50 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisPowerSuspendRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rdi
  KIRQL v7; // bl
  bool v8; // zf
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  KIRQL v13; // al
  KIRQL v14; // bl

  v5 = *((_QWORD *)Context + 556);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      22,
      (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
      (char)Context,
      IoStatus->Status);
  ndisLogMiniportEvent((__int64)Context, 0xFu);
  if ( IoStatus->Status < 0 )
  {
    v12 = *((_QWORD *)Context + 556);
    NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)Context, 5u, IoStatus->Status);
    *(_WORD *)(v12 + 626) = *(_WORD *)(v12 + 624);
    *(_WORD *)(v12 + 624) = 5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x18u,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        IoStatus->Status,
        Context);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 504) &= ~8u;
    v14 = v13;
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v14);
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 504) = *(_DWORD *)(v5 + 504) & 0xFFFFFFE7 | 0x10;
    KeClearEvent((PRKEVENT)(v5 + 248));
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    ++*(_DWORD *)(v5 + 644);
    v8 = *(_DWORD *)(v5 + 628) == 0;
    *(_QWORD *)(v5 + 648) = MEMORY[0xFFFFF78000000014];
    if ( !v8 )
    {
      v9 = *(_DWORD *)(v5 + 628);
      if ( v9 > 0xF )
      {
        if ( v9 - 33 > 0x20 )
          v9 = -1;
        else
          v9 -= 17;
      }
      if ( v9 <= 0x30 )
        *(_QWORD *)(v5 + 16LL * (int)v9 + 744) += (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 656)) / 10000LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v7);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)Context, *(_DWORD *)(v5 + 696));
    if ( (byte_1C00E8041 & 8) != 0 )
      McTemplateK0jqxqd(
        v11,
        &DevicePowerStateChange,
        (const GUID *)(Context + 4008),
        (__int64)(Context + 4008),
        *((_DWORD *)Context + 1014),
        *((_QWORD *)Context + 503),
        1,
        *(_DWORD *)(v5 + 696));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        9u,
        0x17u,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        (char)Context,
        *((unsigned __int16 **)Context + 482));
  }
}
