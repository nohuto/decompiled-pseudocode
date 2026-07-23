/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x1408DE8A0
 * Callers:
 *     PspSiloLoadApiSets @ 0x140888EB8 (PspSiloLoadApiSets.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ApiSetReleaseSchema @ 0x140321FF0 (ApiSetReleaseSchema.c)
 *     ApiSetIsSchemaSealed @ 0x1403222FC (ApiSetIsSchemaSealed.c)
 *     ApiSetLoadSchemaEx @ 0x1408DE7D4 (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1408DEBD0 (ApiSetpLoadSchemaExtensions.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, _QWORD *a2, SIZE_T *a3)
{
  int v5; // eax
  void *v6; // rbx
  int v7; // edi
  NTSTATUS v8; // eax
  int SchemaExtensions; // eax
  SIZE_T v10; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  SIZE_T v13; // [rsp+28h] [rbp-48h] BYREF
  int v14; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v15; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *v17; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = (HANDLE)-1LL;
  v17 = 0LL;
  v5 = ApiSetLoadSchemaEx(a1, &v17, &v13);
  v6 = v17;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( !(unsigned __int8)ApiSetIsSchemaSealed((__int64)v17) )
    {
      ObjectAttributes.RootDirectory = 0LL;
      v15 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\ApiSetSchemaExtensions";
      v14 = 11796658;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
      v7 = v8;
      if ( v8 >= 0 )
      {
        SchemaExtensions = ApiSetpLoadSchemaExtensions(KeyHandle);
        v6 = v17;
        v7 = SchemaExtensions;
      }
      else if ( v8 == -1073741772 )
      {
        v7 = 0;
      }
    }
    if ( v7 >= 0 )
    {
      v10 = v13;
      *a2 = v6;
      v6 = 0LL;
      *a3 = v10;
    }
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  if ( v6 )
    ApiSetReleaseSchema(v6);
  return (unsigned int)v7;
}
