/*
 * XREFs of CmRegUtilCreateUcKey @ 0x1C017C580
 * Callers:
 *     CmRegUtilCreateWstrKey @ 0x1C017C520 (CmRegUtilCreateWstrKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilCreateUcKey(
        void *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        ULONG a4,
        void *KeyHandle,
        ULONG *a6,
        _QWORD *a7)
{
  NTSTATUS v7; // r8d
  ULONG v8; // ecx
  void *v9; // rdx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp+28h] BYREF

  Disposition = a4;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.SecurityDescriptor = KeyHandle;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = a2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v7 < 0 )
  {
    v9 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = Disposition;
    v9 = KeyHandle;
  }
  *a7 = v9;
  if ( a6 )
    *a6 = v8;
  return (unsigned int)v7;
}
