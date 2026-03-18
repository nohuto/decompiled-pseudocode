/*
 * XREFs of IopGetBasicInformationFile @ 0x1406DF59C
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1406DF314 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     IopGetFileInformation @ 0x14062BCD4 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, struct _IRP *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rdi
  void *v7; // rbx
  __int64 v8; // rdx
  char v9; // r14
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
  FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
  v7 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
  v8 = Object->Flags >> 1;
  LOBYTE(v8) = (Object->Flags & 2) != 0;
  v9 = FastIoQueryBasicInfo(Object, v8, a2, v11, RelatedDeviceObject);
  if ( v7 )
    VfFastIoCheckState(v7);
  if ( v9 )
    return LODWORD(v11[0]);
  else
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v12);
}
