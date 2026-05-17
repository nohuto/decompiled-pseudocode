/*
 * XREFs of LdrpDestroyNode @ 0x180080A3C
 * Callers:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpCondenseGraphRecurse @ 0x180029398 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpDestroyNode(unsigned __int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v4; // rbx

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)*v1;
      RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v1);
      v1 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap(LdrpHeap, 0, a1);
}
