/*
 * XREFs of SepSecureBootFindMatchingRegistryRule @ 0x1408E1C18
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x14078AA90 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     SepEqualAsciiWideStringCaseInSensitive @ 0x1408E1990 (SepEqualAsciiWideStringCaseInSensitive.c)
 */

_DWORD *__fastcall SepSecureBootFindMatchingRegistryRule(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  _DWORD *v5; // r11
  unsigned __int64 v6; // rbx
  _WORD *v7; // rcx
  _WORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  _WORD *v11; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v11 = 0LL;
  v5 = (_DWORD *)qword_14050ECC0;
  v6 = qword_14050ECC0 + 16LL * *((unsigned __int16 *)qword_140509E00 + 19);
  while ( 1 )
  {
    if ( (unsigned __int64)v5 >= v6 )
      return 0LL;
    if ( *v5 == -2130706432 )
    {
      v7 = (_WORD *)(qword_14050ECD0 + (unsigned int)v5[1]);
      v11 = v7 + 1;
      LOWORD(v10) = *v7;
      WORD1(v10) = v10 + 2;
      if ( SepEqualAsciiWideStringCaseInSensitive(a2, (unsigned __int16 *)&v10) )
      {
        v8 = (_WORD *)(qword_14050ECD0 + (unsigned int)v5[2]);
        v11 = v8 + 1;
        LOWORD(v10) = *v8;
        WORD1(v10) = v10 + 2;
        if ( SepEqualAsciiWideStringCaseInSensitive(a3, (unsigned __int16 *)&v10) )
          break;
      }
    }
    v5 += 4;
  }
  return v5;
}
