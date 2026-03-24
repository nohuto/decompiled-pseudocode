/*
 * XREFs of CompareFileTimeType @ 0x14090421C
 * Callers:
 *     PropertyEval @ 0x140591A70 (PropertyEval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareFileTimeType(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
