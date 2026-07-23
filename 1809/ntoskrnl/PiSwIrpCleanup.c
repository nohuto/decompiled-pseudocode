/*
 * XREFs of PiSwIrpCleanup @ 0x1406D9CE8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x1406D88E0 (PiSwDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwCloseDevice @ 0x1406DA3B0 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x1406EE5B8 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1406EE5EC (PiSwFindSwDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  IRP *v2; // rsi
  int v4; // eax
  bool v5; // di
  __int64 i; // rax
  const wchar_t *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v4 = *(_DWORD *)(a1 + 180);
  v5 = v4 == 0;
  if ( v4 )
  {
    for ( i = *(_QWORD *)(a1 + 112); ; i = *(_QWORD *)(SwDevice + 112) )
    {
      v7 = *(const wchar_t **)(i + 8);
      if ( wcsnicmp(v7, L"SWD\\", 4uLL) )
        break;
      SwDevice = PiSwFindSwDevice(v7);
      if ( !SwDevice )
        goto LABEL_11;
      if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
        goto LABEL_6;
    }
    RtlInitUnicodeString(&DestinationString, v7);
    v8 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      goto LABEL_6;
    }
LABEL_11:
    v5 = 1;
  }
LABEL_6:
  v9 = *(_QWORD *)(a1 + 144);
  if ( v9 && _InterlockedExchange64((volatile __int64 *)(v9 + 104), 0LL) )
  {
    v2 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v5 )
  {
    PiSwCloseDescendants(a1 + 72);
    PiSwCloseDevice(a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 )
  {
    v2->IoStatus.Information = 0LL;
    v2->IoStatus.Status = -1073741536;
    IofCompleteRequest(v2, 0);
  }
}
