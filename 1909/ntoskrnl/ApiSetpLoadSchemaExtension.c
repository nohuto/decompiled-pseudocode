/*
 * XREFs of ApiSetpLoadSchemaExtension @ 0x14091AF94
 * Callers:
 *     ApiSetpLoadSchemaExtensions @ 0x14091B090 (ApiSetpLoadSchemaExtensions.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ApiSetComposeSchema @ 0x140342EB8 (ApiSetComposeSchema.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ApiSetLoadSchemaEx @ 0x14091ACDC (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x14091AE68 (ApiSetpConstructPathToExtension.c)
 */

__int64 __fastcall ApiSetpLoadSchemaExtension(void *a1, unsigned int **a2, unsigned int *a3)
{
  int v5; // ebx
  int v6; // r9d
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v11; // [rsp+58h] [rbp-A8h] BYREF
  SIZE_T v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  int v14; // [rsp+78h] [rbp-88h]
  WCHAR Source[138]; // [rsp+7Ch] [rbp-84h] BYREF

  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  ValueName.Buffer = L"FileName";
  *(_QWORD *)&ValueName.Length = 1179664LL;
  v5 = ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x114u, &ResultLength);
  if ( v5 >= 0 )
  {
    v5 = ApiSetpConstructPathToExtension(Source, v14, &v9);
    if ( v5 >= 0 )
    {
      v5 = ApiSetLoadSchemaEx((__int64)&v9, &v11, v12);
      if ( v5 >= 0 )
        v5 = ApiSetComposeSchema(a2, a3, v11, v6);
    }
  }
  if ( v9.Buffer )
    ExFreePoolWithTag(v9.Buffer, 0);
  return (unsigned int)v5;
}
