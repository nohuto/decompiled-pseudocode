/*
 * XREFs of TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C00227B0
 * Callers:
 *     TranslateToExtendedSrb @ 0x1C00225E4 (TranslateToExtendedSrb.c)
 * Callees:
 *     memmove @ 0x1C002C080 (memmove.c)
 */

void *__fastcall TranslateScsiRequestBlockToScsiCdb16SrbExData(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  unsigned __int8 v3; // al
  void *result; // rax

  *(_DWORD *)a1 = 64;
  *(_DWORD *)(a1 + 4) = 32;
  *(_BYTE *)(a1 + 10) = *(_BYTE *)(a2 + 10);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 9) = *(_BYTE *)(a2 + 11);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 32);
  v2 = (_QWORD *)(a1 + 24);
  v3 = *(_BYTE *)(a2 + 10);
  if ( v3 )
    return memmove(v2, (const void *)(a2 + 72), v3);
  result = 0LL;
  *v2 = 0LL;
  v2[1] = 0LL;
  return result;
}
