/*
 * XREFs of InitCreateObjectDirectory @ 0x1C026612C
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 InitCreateObjectDirectory()
{
  int v0; // edx
  unsigned int v1; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v0, 14, 19, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  }
  RtlInitUnicodeString(&DestinationString, szWindowStationDirectory);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)gpsdInitWinSta;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v1 = ZwCreateDirectoryObject(&ghWinstaDirectory, 4u, &ObjectAttributes);
  Win32FreePool(gpsdInitWinSta);
  gpsdInitWinSta = 0LL;
  return v1;
}
