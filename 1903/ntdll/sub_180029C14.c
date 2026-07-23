/*
 * XREFs of sub_180029C14 @ 0x180029C14
 * Callers:
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_180070758 @ 0x180070758 (sub_180070758.c)
 * Callees:
 *     sub_180029BCC @ 0x180029BCC (sub_180029BCC.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009CE80 (ZwQueryAttributesFile.c)
 */

NTSTATUS __fastcall sub_180029C14(_UNICODE_STRING *a1, _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  ULONG v4; // eax
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rcx
  _UNICODE_STRING v6; // xmm0
  _UNICODE_STRING *v7; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING v8; // [rsp+48h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp+Fh] BYREF

  result = sub_180029BCC(1, (__int64)a2, a1, a2, &v8, &v7);
  if ( result >= 0 )
  {
    if ( v7 == &v8 )
    {
      Buffer = (_OBJECT_BOUNDARY_DESCRIPTOR *)a2->Buffer;
      if ( &a2[1] != (_UNICODE_STRING *)Buffer )
        RtlDeleteBoundaryDescriptor(Buffer);
      v6 = v8;
      a2[1].Length = 0;
      *a2 = v6;
    }
    v4 = 64;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    if ( !byte_180165380 )
      v4 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v4;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  }
  return result;
}
