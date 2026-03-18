/*
 * XREFs of ?GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z @ 0x1C01D0DA0
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C00EAC1C (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLangIdMatchLevel(HKL a1, unsigned __int16 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a2 )
    return 3LL;
  if ( ((**(_DWORD **)(gptiCurrent + 472LL) >> 9) & 1) != 0 && (WORD1(a1) & 0xF000) != 0xE000 )
    return 0LL;
  if ( (_WORD)a1 == a2 )
    return 3LL;
  if ( (unsigned __int16)LODWORD(KeGetPcr()->NtTib.Self[4].ArbitraryUserPointer) == a2 )
    return 2LL;
  if ( !glcidSystem )
    ZwQueryDefaultLocale(0, &glcidSystem);
  LOBYTE(v3) = (_WORD)glcidSystem == a2;
  return v3;
}
