/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x140941B54
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406F34A0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenContext @ 0x140756290 (DrvDbOpenContext.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407578F8 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbUnregisterDatabase @ 0x140941AF8 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406F407C (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbDestroyDatabaseNode(__int64 a1, void ***a2)
{
  int v3; // esi
  void **v4; // rcx
  void **v5; // rdx
  void **v6; // rdi

  v3 = DrvDbUnloadDatabaseNode(a1, (__int64)a2);
  if ( v3 >= 0 )
  {
    v4 = *a2;
    if ( (*a2)[1] != a2 || (v5 = a2[1], *v5 != a2) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = a2[18];
    if ( v6 )
    {
      ExDeleteResourceLite((PERESOURCE)a2[18]);
      ExFreePoolWithTag(v6, 0);
    }
    RtlFreeAnsiString((PUNICODE_STRING)a2 + 1);
    RtlFreeAnsiString((PUNICODE_STRING)(a2 + 5));
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v3;
}
