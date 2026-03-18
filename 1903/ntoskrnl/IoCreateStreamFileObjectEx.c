/*
 * XREFs of IoCreateStreamFileObjectEx @ 0x14073B120
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x1406822C0 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectEx(
        PFILE_OBJECT FileObject,
        PDEVICE_OBJECT DeviceObject,
        PHANDLE FileHandle)
{
  _DWORD v4[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]
  struct _FILE_OBJECT *v6; // [rsp+68h] [rbp+20h] BYREF

  v4[1] = 0;
  v5 = 0LL;
  v4[0] = 65552;
  IoCreateStreamFileObjectEx2((__int64)v4, (__int64)FileObject, (ULONG_PTR)DeviceObject, &v6, FileHandle);
  return v6;
}
