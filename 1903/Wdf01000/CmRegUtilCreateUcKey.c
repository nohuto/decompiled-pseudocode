/*
 * XREFs of CmRegUtilCreateUcKey @ 0x1C00C95EC
 * Callers:
 *     CmRegUtilCreateWstrKey @ 0x1C00C968C (CmRegUtilCreateWstrKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilCreateUcKey(
        void *BaseHandle,
        _UNICODE_STRING *KeyName,
        unsigned int SecurityDescriptor,
        unsigned int Disposition,
        void *Handle,
        unsigned int *BaseHandle_0,
        void **KeyName_0)
{
  NTSTATUS v7; // r8d
  void *v8; // rdx
  unsigned int v9; // ecx
  _OBJECT_ATTRIBUTES objectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int disposition; // [rsp+98h] [rbp+28h] BYREF

  disposition = Disposition;
  *(&objectAttributes.Length + 1) = 0;
  *(&objectAttributes.Attributes + 1) = 0;
  objectAttributes.SecurityQualityOfService = 0LL;
  objectAttributes.SecurityDescriptor = Handle;
  objectAttributes.RootDirectory = BaseHandle;
  objectAttributes.ObjectName = KeyName;
  objectAttributes.Length = 48;
  objectAttributes.Attributes = 576;
  v7 = ZwCreateKey(&Handle, 0xF003Fu, &objectAttributes, 0, 0LL, 0, &disposition);
  if ( v7 >= 0 )
  {
    v9 = disposition;
    v8 = Handle;
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
  }
  *KeyName_0 = v8;
  if ( BaseHandle_0 )
    *BaseHandle_0 = v9;
  return (unsigned int)v7;
}
