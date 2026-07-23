/*
 * XREFs of RtlpHashStringToAtom @ 0x1405F64C0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400895A0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x140126880 (RtlpFreeAllAtom.c)
 *     RtlLookupAtomInAtomTable @ 0x1405F6280 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlpLookupOrCreateLowBox @ 0x140088BAC (RtlpLookupOrCreateLowBox.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405F6614 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlpHashStringToAtom(
        __int64 a1,
        wchar_t *a2,
        char a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 j; // rsi
  wchar_t v12; // ax
  wchar_t *v13; // rbx
  unsigned int i; // edi
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 LowBox; // rax

  j = 0LL;
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = *a2;
    v13 = a2;
    for ( i = 0; *v13; i += v15 )
    {
      ++v13;
      if ( v12 >= 0x61u )
      {
        if ( v12 > 0x7Au )
          v12 = RtlUpcaseUnicodeChar(v12);
        else
          v12 -= 32;
      }
      v15 = v12 + (v12 >> 1) + 2 * v12;
      v12 = *v13;
    }
    v16 = v13 - a2;
    if ( (unsigned int)v16 > 0xFF )
    {
      v18 = 0LL;
    }
    else
    {
      v17 = i % *(_DWORD *)(a1 + 28);
      v18 = *(_QWORD *)(a1 + 32 + 8 * v17);
      for ( j = a1 + 32 + 8LL * (unsigned int)v17; v18; v18 = *(_QWORD *)v18 )
      {
        if ( *(unsigned __int8 *)(v18 + 40) == (_DWORD)v16 && !wcsicmp((const wchar_t *)(v18 + 42), a2) )
          break;
        j = v18;
      }
    }
    if ( a4 )
      *a4 = j;
    if ( !v18 )
    {
      if ( a5 )
        *a5 = 2 * v16;
      goto LABEL_19;
    }
  }
  else
  {
    v18 = 0LL;
    if ( (unsigned __int16)a2 >= 0xC000u )
      v18 = RtlpAtomMapAtomToHandleEntry(a1, (unsigned __int16)a2 & 0x3FFF);
    if ( a4 )
      *a4 = 0LL;
    if ( !v18 )
      goto LABEL_19;
  }
  if ( !a6 )
  {
LABEL_19:
    *a7 = v18;
    return 0LL;
  }
  LowBox = RtlpLookupOrCreateLowBox(a1, v18, a3);
  if ( LowBox )
  {
    *a6 = LowBox;
    goto LABEL_19;
  }
  return 3221225495LL;
}
