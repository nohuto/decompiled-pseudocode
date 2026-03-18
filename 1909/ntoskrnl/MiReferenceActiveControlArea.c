/*
 * XREFs of MiReferenceActiveControlArea @ 0x140074684
 * Callers:
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x1400C0370 (MiReferenceExistingControlArea.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x14007463C (MiBuildWakeList.c)
 */

__int64 *__fastcall MiReferenceActiveControlArea(_DWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rsi

  v4 = MiBuildWakeList(a2, 4);
  ++*(_QWORD *)(a2 + 24);
  v5 = v4;
  MiRemoveUnusedSegment(a2);
  if ( (*a1 & 1) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(a2 + 48);
  return v5;
}
