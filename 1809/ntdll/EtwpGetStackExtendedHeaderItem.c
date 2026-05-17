/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x18010F50C
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18004DFCC (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180003830 (RtlWalkFrameChain.c)
 */

__int64 __fastcall EtwpGetStackExtendedHeaderItem(__int64 *a1, _WORD *a2)
{
  __int64 result; // rax
  __int16 v5; // r8

  result = RtlWalkFrameChain(*a1 + 16, 256, 0);
  v5 = 8 * result;
  if ( 8 * (_WORD)result )
  {
    *a2 = v5 + 16;
    *(_QWORD *)(*a1 + 8) = 0LL;
    *(_WORD *)*a1 = v5 + 16;
    *(_WORD *)(*a1 + 2) = 6;
    *(_WORD *)(*a1 + 6) = v5;
    *(_WORD *)(*a1 + 4) &= ~1u;
    result = *a1;
    *(_WORD *)(*a1 + 4) &= 1u;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
