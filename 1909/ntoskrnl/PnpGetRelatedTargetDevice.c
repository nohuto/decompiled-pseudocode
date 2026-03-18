/*
 * XREFs of PnpGetRelatedTargetDevice @ 0x1400ED9FC
 * Callers:
 *     IoGetRelatedTargetDevice @ 0x1406911F8 (IoGetRelatedTargetDevice.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14071D818 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     IoRegisterPlugPlayNotification @ 0x140722750 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     PnpSendIrp @ 0x1400ED8EC (PnpSendIrp.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRelatedTargetDevice(PFILE_OBJECT FileObject, _QWORD *a2)
{
  KIRQL v4; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD v11[10]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  if ( !RelatedDeviceObject )
    return 3221225486LL;
  memset(v11, 0, 0x48uLL);
  LOWORD(v11[0]) = 1819;
  LODWORD(v11[1]) = 4;
  v11[5] = RelatedDeviceObject;
  v11[6] = FileObject;
  result = PnpSendIrp((__int64)RelatedDeviceObject, (__int64)v11, v6, 0LL, (__int64)&P);
  v8 = result;
  if ( (int)result < 0 )
    return result;
  if ( !P )
    return 3221225486LL;
  v9 = *(_DWORD *)P == 1 ? *((_QWORD *)P + 1) : 0LL;
  ExFreePoolWithTag(P, 0);
  if ( !v9 )
    return 3221225486LL;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
  if ( !v10 )
    return 3221225486LL;
  *a2 = v10;
  return v8;
}
