/*
 * XREFs of SepRmDereferenceCap @ 0x14031C9A8
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 * Callees:
 *     SepRmDereferenceCapTable @ 0x14031C9C8 (SepRmDereferenceCapTable.c)
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
