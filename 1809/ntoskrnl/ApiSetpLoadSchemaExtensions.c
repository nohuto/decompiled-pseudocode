/*
 * XREFs of ApiSetpLoadSchemaExtensions @ 0x1408DEBD0
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1408DE8A0 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ApiSetpLoadSchemaExtension @ 0x1408DEAD8 (ApiSetpLoadSchemaExtension.c)
 */

__int64 __fastcall ApiSetpLoadSchemaExtensions(HANDLE KeyHandle, char **a2, __int64 a3)
{
  ULONG v4; // edi
  ULONG v5; // edx
  HANDLE v7; // rsi
  int SchemaExtension; // ebx
  NTSTATUS v9; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v14; // [rsp+48h] [rbp-B8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v17; // [rsp+8Ch] [rbp-74h]
  char v18; // [rsp+90h] [rbp-70h] BYREF

  v4 = 0;
  v5 = 0;
  v7 = KeyHandle;
  while ( 1 )
  {
    v9 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
    SchemaExtension = v9;
    if ( v9 < 0 )
      break;
    ObjectAttributes.Length = 48;
    v14 = &v18;
    v13[0] = v17;
    v13[1] = v17;
    ObjectAttributes.RootDirectory = v7;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SchemaExtension = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
    if ( SchemaExtension < 0 )
      return (unsigned int)SchemaExtension;
    SchemaExtension = ApiSetpLoadSchemaExtension(KeyHandlea, a2, a3);
    ZwClose(KeyHandlea);
    if ( SchemaExtension < 0 )
      return (unsigned int)SchemaExtension;
    ++v4;
    KeyHandle = v7;
    v5 = v4;
  }
  if ( v9 == -2147483622 )
    return 0;
  return (unsigned int)SchemaExtension;
}
