/*
 * XREFs of EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C011E660
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C011E6C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C011E808 (TransformVectorWithInputTargetPrecedence.c)
 */

__int64 __fastcall EditionPhysicalToLogicalDPIPointWithInputDestHint(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = *(_QWORD *)(a4 + 72);
  if ( !v4 || !(unsigned int)TransformVectorWithInputTargetPrecedence(*(_QWORD *)(a4 + 72), &v8) )
    PhysicalToLogicalDPIPointWithHitTest(&v8, &v8, a3, v4);
  result = v8;
  *a1 = v8;
  return result;
}
