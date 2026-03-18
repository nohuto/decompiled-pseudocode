/*
 * XREFs of MiDereferenceDataSubsections @ 0x1402DE92C
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x1400734A0 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A72D4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 */

__int64 __fastcall MiDereferenceDataSubsections(_DWORD *a1, unsigned __int64 *a2, __int64 a3, int a4, int a5)
{
  __int64 *v9; // rbp
  unsigned __int64 v10; // r14
  bool v11; // cf
  unsigned int v12; // edi
  __int64 *SubsectionNode; // rax
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v9 = (__int64 *)MiOffsetToProtos(a1, *a2, &v15);
  v10 = a3 + v15;
  v11 = a5 != 0;
  a5 = -a5;
  v12 = v11 ? 0xFFFFFF80 : 0;
  if ( a4 )
  {
    SubsectionNode = MiLocateSubsectionNode((__int64)a1, (a3 << 12) + *a2 - 1, 0);
    MiDecrementLargeSubsections(v9, SubsectionNode);
  }
  return MiRemoveViewsFromSectionWithPfn(v9, v10, v12 + 264);
}
