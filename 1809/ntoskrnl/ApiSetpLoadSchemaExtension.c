/*
 * XREFs of ApiSetpLoadSchemaExtension @ 0x1408DEAD8
 * Callers:
 *     ApiSetpLoadSchemaExtensions @ 0x1408DEBD0 (ApiSetpLoadSchemaExtensions.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ApiSetComposeSchema @ 0x140322008 (ApiSetComposeSchema.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ApiSetLoadSchemaEx @ 0x1408DE7D4 (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DE9A4 (ApiSetpConstructPathToExtension.c)
 */

__int64 __fastcall ApiSetpLoadSchemaExtension(void *a1, char **a2, __int64 a3)
{
  int v5; // ebx
  int v6; // r9d
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v9; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-B0h] BYREF
  SIZE_T v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  int v14; // [rsp+78h] [rbp-88h]
  WCHAR Source[138]; // [rsp+7Ch] [rbp-84h] BYREF

  v11.Buffer = 0LL;
  ValueName.Buffer = L"FileName";
  *(_DWORD *)&ValueName.Length = 1179664;
  v5 = ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x114u, &ResultLength);
  if ( v5 >= 0 )
  {
    v5 = ApiSetpConstructPathToExtension(Source, v14, &v11);
    if ( v5 >= 0 )
    {
      v5 = ApiSetLoadSchemaEx((__int64)&v11, &v9, v12);
      if ( v5 >= 0 )
        v5 = ApiSetComposeSchema(a2, a3, v9, v6);
    }
  }
  if ( v11.Buffer )
    ExFreePoolWithTag(v11.Buffer, 0);
  return (unsigned int)v5;
}
