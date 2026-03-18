/*
 * XREFs of ACPIThermalCancelRequest @ 0x1C005F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C00093B8 (WPP_RECORDER_SF_qqssdddd.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalCancelRequest(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  void *v2; // rsi
  _QWORD *DeviceExtension; // rbx
  void *v6; // rbp
  __int64 v7; // rax
  KIRQL v8; // al
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *Blink; // r8
  __int64 v11; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER v12; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS v13; // [rsp+78h] [rbp-30h] BYREF

  v2 = &unk_1C006FE7D;
  *(_QWORD *)&v13.Year = 0LL;
  *(_QWORD *)&v13.Minute = 0LL;
  LOBYTE(DeviceExtension) = 0;
  v6 = &unk_1C006FE7D;
  v12.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v12, &v13);
  if ( ACPIInternalGetDeviceExtension(BugCheckParameter3) )
  {
    DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
    v7 = DeviceExtension[1];
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = (void *)DeviceExtension[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (void *)DeviceExtension[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqssdddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)v13.Minute,
      (unsigned int)v13.Hour,
      0xAu,
      v11,
      (char)Irp,
      (char)DeviceExtension,
      (__int64)v2,
      (__int64)v6);
  IoReleaseCancelSpinLock(Irp->CancelIrql);
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  Flink = Irp->Tail.Overlay.ListEntry.Flink;
  if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
    || (Blink = Irp->Tail.Overlay.ListEntry.Blink, (void **)Blink->Flink != &Irp->Tail.CompletionKey + 6) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseSpinLock(&AcpiThermalLock, v8);
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
}
