/*
 * XREFs of RtlUmsThreadYield @ 0x1800F3B10
 * Callers:
 *     <none>
 * Callees:
 *     ZwUmsThreadYield @ 0x18009FEB0 (ZwUmsThreadYield.c)
 *     RtlpUmsThreadYield @ 0x1800A1453 (RtlpUmsThreadYield.c)
 */

__int64 __fastcall RtlUmsThreadYield(void *a1)
{
  void *v1; // rdi
  _DWORD *v2; // rbx

  v1 = a1;
  v2 = NtCurrentTeb()->TlsSlots[4];
  if ( (v2[316] & 1) == 0 )
    return 3221225485LL;
  v2[316] |= 0x40u;
  if ( (v2[316] & 0x20) == 0 )
  {
    ++v2[325];
    goto LABEL_7;
  }
  ++v2[323];
  if ( ZwUmsThreadYield(a1) < 0 )
  {
    ++v2[324];
    a1 = v1;
LABEL_7:
    RtlpUmsThreadYield(a1);
  }
  v2[316] &= ~0x40u;
  return 0LL;
}
