/*
 * XREFs of ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C0009B10
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00140B4 (ndisIfDereferenceCompartmentForUser.c)
 */

void __fastcall ndisCmDeleteStateObject(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( v4 )
    ndisIfDereferenceCompartmentForUser(v4, a2, a3, a4);
}
