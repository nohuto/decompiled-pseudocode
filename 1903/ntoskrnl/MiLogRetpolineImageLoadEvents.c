/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x14070ECE4
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x14070EAE8 (MiFinalizeImageRetpolineState.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0BB8 (MiApplyRetpolineToBootDrivers.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1401543E8 (RtlIsImageFullyRetpolined.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140746BFC (MiLogNonRetpolineImageLoadEvent.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x14077ECEC (MiConstructNonRetpolineImageLoadRecord.c)
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
        v3 = (_QWORD *)qword_140464880;
        if ( *(PVOID **)qword_140464880 != &qword_140464878 )
          __fastfail(3u);
        *result = &qword_140464878;
        result[1] = v3;
        *v3 = result;
        qword_140464880 = (__int64)result;
      }
    }
  }
  return result;
}
