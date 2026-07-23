/*
 * XREFs of RtlpHpSegHeapRemoveSegment @ 0x1402FCD60
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1401B6530 (RtlpHpSegContextCompact.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlpHpSegHeapRemoveSegment(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  v2 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (result = (_QWORD *)a2[1], (_QWORD *)*result != a2) )
    __fastfail(3u);
  *result = v2;
  *(_QWORD *)(v2 + 8) = result;
  --*(_QWORD *)(a1 + 88);
  return result;
}
