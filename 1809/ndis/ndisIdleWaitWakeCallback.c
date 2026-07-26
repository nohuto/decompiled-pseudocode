/*
 * XREFs of ndisIdleWaitWakeCallback @ 0x1C0074B70
 * Callers:
 *     <none>
 * Callees:
 *     ndisCompleteWaitWake @ 0x1C0011420 (ndisCompleteWaitWake.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     McTemplateK0jqx @ 0x1C00694D8 (McTemplateK0jqx.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00726E8 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007E93C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  int Status; // r8d
  KIRQL v8; // si
  __int64 v9; // rcx

  v6 = *((_QWORD *)Context + 561);
  Status = IoStatus->Status;
  if ( IoStatus->Status < 0 )
  {
    if ( Status != -1073741536 )
    {
      NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x5C7u, Status);
      *(_WORD *)(v6 + 626) = *(_WORD *)(v6 + 624);
      *(_WORD *)(v6 + 624) = 1479;
      if ( (unsigned __int8)byte_1C00A025E >= 2u )
        WPP_SF_dq(0x19u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, IoStatus->Status, Context);
    }
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 561));
    if ( (*(_DWORD *)(v6 + 504) & 0xC4) == 4 )
    {
      *(_DWORD *)(v6 + 504) |= 0x40u;
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v6, 1, 0x41u, 0);
      if ( (byte_1C00A2083 & 4) != 0 )
        McTemplateK0jqx(
          v9,
          &DeviceWaitWakeComplete,
          (const GUID *)(Context + 4040),
          (__int64)(Context + 4040),
          *((_DWORD *)Context + 1022),
          *((_QWORD *)Context + 507));
      if ( (unsigned __int8)byte_1C00A0258 >= 4u )
        WPP_SF_qZ(
          0x18u,
          &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids,
          (__int64)Context,
          *((const wchar_t **)Context + 486));
      ndisScheduleWorkItemInternal(v6 + 376);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v8);
  }
  ndisCompleteWaitWake((__int64)Context);
}
