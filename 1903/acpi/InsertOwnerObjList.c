/*
 * XREFs of InsertOwnerObjList @ 0x1C0006C70
 * Callers:
 *     InitializeNativeNamespace @ 0x1C00067B8 (InitializeNativeNamespace.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x1C0065010 (MigrateDefunctObjectsToNewOwner.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall InsertOwnerObjList(struct _EX_RUNDOWN_REF *a1, struct _EX_RUNDOWN_REF *a2)
{
  BOOLEAN result; // al

  a2[6].Count = (unsigned __int64)a1;
  if ( a1 )
  {
    a2[7].Count = a1[3].Count;
    a1[3].Count = (unsigned __int64)a2;
    return ExAcquireRundownProtection(a1 + 4);
  }
  return result;
}
