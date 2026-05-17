/*
 * XREFs of RtlpMuiRegDupLanguageList @ 0x18003BA10
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x18003BAA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18003C454 (RtlpMuiRegCreateLanguageList.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegDupLanguageList(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 LanguageList; // rax
  __int64 v6; // rdi

  if ( !a1 )
    return 0LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  LOBYTE(a2) = *(_BYTE *)(a1 + 8);
  LanguageList = RtlpMuiRegCreateLanguageList(v4, a2, *(_QWORD *)(a1 + 16));
  v6 = LanguageList;
  if ( !LanguageList )
    return 0LL;
  if ( (_DWORD)v4 )
  {
    memmove(*(void **)(LanguageList + 24), *(const void **)(a1 + 24), 6 * v4);
    *(_WORD *)(v6 + 4) = v4;
  }
  *(_BYTE *)(v6 + 8) = *(_BYTE *)(a1 + 8);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(v6 + 40) = *(_DWORD *)(a1 + 40);
  return v6;
}
