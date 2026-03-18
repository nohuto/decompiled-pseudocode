/*
 * XREFs of SepRmDereferenceCap @ 0x14031CF58
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x14031CF78 (SepRmDereferenceCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    return SepRmDereferenceCapTable(v3, a2, a3);
  return result;
}
