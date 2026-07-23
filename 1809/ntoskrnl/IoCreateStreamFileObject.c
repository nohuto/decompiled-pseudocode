/*
 * XREFs of IoCreateStreamFileObject @ 0x140706A80
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x1405A45A0 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObject(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]
  struct _FILE_OBJECT *v5; // [rsp+60h] [rbp+18h] BYREF

  v3[1] = 0;
  v4 = 0LL;
  v3[0] = 65552;
  IoCreateStreamFileObjectEx2((__int64)v3, (__int64)FileObject, (__int64)DeviceObject, &v5, 0LL);
  return v5;
}
