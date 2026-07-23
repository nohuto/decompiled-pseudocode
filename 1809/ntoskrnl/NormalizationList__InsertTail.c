/*
 * XREFs of NormalizationList__InsertTail @ 0x1402FC818
 * Callers:
 *     RtlpGetNormalization @ 0x14089B764 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _QWORD *result; // rax

  result = off_140402B50;
  if ( *off_140402B50 != (_UNKNOWN *)&NormalizationListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_140402B50 = (_UNKNOWN **)a1;
  return result;
}
