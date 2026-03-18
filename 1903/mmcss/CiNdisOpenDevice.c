/*
 * XREFs of CiNdisOpenDevice @ 0x1C000B980
 * Callers:
 *     CsInitialize @ 0x1C000D0B0 (CsInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00045A8 (WPP_SF_d.c)
 */

NTSTATUS CiNdisOpenDevice()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v3; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  v3.RootDirectory = 0LL;
  v2.Pointer = 0LL;
  v2.Information = 0LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  v3.ObjectName = (PUNICODE_STRING)&CiNdisDevceName;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&CiNdisDeviceHandle, 0x12019Fu, &v3, &v2, 7u, 0x20u);
  v1 = result;
  if ( result < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_fa7bcead4b433d29329dcbc1e8fae404_Traceguids,
        result);
    return v1;
  }
  return result;
}
