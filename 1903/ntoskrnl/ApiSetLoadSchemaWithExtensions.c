/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x14091B348
 * Callers:
 *     PspSiloLoadApiSets @ 0x1408C6034 (PspSiloLoadApiSets.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ApiSetReleaseSchema @ 0x140343440 (ApiSetReleaseSchema.c)
 *     ApiSetIsSchemaSealed @ 0x140343A88 (ApiSetIsSchemaSealed.c)
 *     ApiSetLoadSchemaEx @ 0x14091B27C (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14091B630 (ApiSetpLoadSchemaExtensions.c)
 *     ApiSetpOpenSchemaExtensionsRootNode @ 0x14091B8DC (ApiSetpOpenSchemaExtensionsRootNode.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, ULONG_PTR *a2, SIZE_T *a3)
{
  int v5; // eax
  ULONG_PTR v6; // rdi
  int v7; // ebx
  int v8; // eax
  int SchemaExtensions; // eax
  SIZE_T v10; // rax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  SIZE_T v13; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR v14; // [rsp+68h] [rbp+38h] BYREF

  Handle = (HANDLE)-1LL;
  v14 = 0LL;
  v5 = ApiSetLoadSchemaEx(a1, &v14, &v13);
  v6 = v14;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( !(unsigned __int8)ApiSetIsSchemaSealed(v14) )
    {
      v8 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
      v7 = v8;
      if ( v8 >= 0 )
      {
        SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
        v6 = v14;
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
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v6 )
    ApiSetReleaseSchema(v6);
  return (unsigned int)v7;
}
