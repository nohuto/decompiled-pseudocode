/*
 * XREFs of CiNdisOpenDevice @ 0x1C000BB30
 * Callers:
 *     CsInitialize @ 0x1C000D0B0 (CsInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00047B0 (WPP_SF_d.c)
 */

NTSTATUS CiNdisOpenDevice()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CiNdisDevceName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&CiNdisDeviceHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  v1 = result;
  if ( result < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_42cc0ede54843cc3a352346ca9803b15_Traceguids,
        result);
    return v1;
  }
  return result;
}
