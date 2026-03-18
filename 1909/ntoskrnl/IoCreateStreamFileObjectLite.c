/*
 * XREFs of IoCreateStreamFileObjectLite @ 0x1406A07E0
 * Callers:
 *     RawMountVolume @ 0x140691310 (RawMountVolume.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x1406A0820 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectLite(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]
  struct _FILE_OBJECT *v5; // [rsp+60h] [rbp+18h] BYREF

  v3[1] = 0;
  v4 = 0LL;
  v3[0] = 196624;
  IoCreateStreamFileObjectEx2(v3, FileObject, DeviceObject, &v5, 0LL);
  return v5;
}
