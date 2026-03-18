/*
 * XREFs of PspSiloLoadApiSets @ 0x1408C6034
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     ApiSetReleaseSchema @ 0x140343440 (ApiSetReleaseSchema.c)
 *     PspQueryForwardersEnabled @ 0x14075F3EC (PspQueryForwardersEnabled.c)
 *     PspApiSetCopyToSystemSpace @ 0x1408C4E58 (PspApiSetCopyToSystemSpace.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14091B348 (ApiSetLoadSchemaWithExtensions.c)
 */

__int64 __fastcall PspSiloLoadApiSets(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // r14
  int v3; // esi
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-18h] BYREF
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v7[0] = 4980810LL;
  v7[1] = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaWithExtensions(v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v10, &v6);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[128] = v10;
      ServerSiloGlobals[129] = v6;
      *((_BYTE *)ServerSiloGlobals + 1040) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema((ULONG_PTR)Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
