/*
 * XREFs of TopologyFreeFunctionUnits @ 0x1C002548C
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0021804 (FilterCreateFilterFactory.c)
 *     TopologyBuildFilterTopology @ 0x1C002505C (TopologyBuildFilterTopology.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TopologyFreeFunctionUnits(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL);
  while ( 1 )
  {
    result = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)result[1] != v1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v1 = v2;
    v2[1] = v1;
    ExFreePool(result);
  }
  return result;
}
