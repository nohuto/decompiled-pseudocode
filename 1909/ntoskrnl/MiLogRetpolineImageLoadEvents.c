/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x140710AC4
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x1407108C8 (MiFinalizeImageRetpolineState.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0AC8 (MiApplyRetpolineToBootDrivers.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x140154A88 (RtlIsImageFullyRetpolined.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140748AFC (MiLogNonRetpolineImageLoadEvent.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x14078170C (MiConstructNonRetpolineImageLoadRecord.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( hProvider )
    {
      return (_QWORD *)MiLogNonRetpolineImageLoadEvent(
                         a1 + 88,
                         *(unsigned int *)(a1 + 120),
                         *(unsigned int *)(a1 + 156));
    }
    else
    {
      result = (_QWORD *)MiConstructNonRetpolineImageLoadRecord(a1);
      if ( result )
      {
        v3 = (_QWORD *)qword_140464580;
        if ( *(PVOID **)qword_140464580 != &qword_140464578 )
          __fastfail(3u);
        *result = &qword_140464578;
        result[1] = v3;
        *v3 = result;
        qword_140464580 = (__int64)result;
      }
    }
  }
  return result;
}
