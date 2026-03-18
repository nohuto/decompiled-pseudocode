/*
 * XREFs of NormalizationList__InsertTail @ 0x14031AF68
 * Callers:
 *     RtlpGetNormalization @ 0x1408D9070 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _QWORD *result; // rax

  result = off_140427F30;
  if ( *off_140427F30 != (_UNKNOWN *)&NormalizationListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_140427F30 = (_UNKNOWN **)a1;
  return result;
}
