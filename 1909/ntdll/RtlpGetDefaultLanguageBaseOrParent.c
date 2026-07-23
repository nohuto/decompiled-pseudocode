/*
 * XREFs of RtlpGetDefaultLanguageBaseOrParent @ 0x1800ECE4C
 * Callers:
 *     RtlpGetCompleteLanguageFallback @ 0x1800ECCF8 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlULongToUShort @ 0x180076DEC (RtlULongToUShort.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1800FE1D8 (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegGetString @ 0x1800FE524 (RtlpMuiRegGetString.c)
 */

__int64 __fastcall RtlpGetDefaultLanguageBaseOrParent(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        wchar_t *a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  __int64 v11; // r10
  int v12; // ebp
  char v13; // r12
  unsigned __int16 v14; // r13
  __int64 v15; // rdx
  int v17; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+34h] [rbp-44h] BYREF
  _UNICODE_STRING String; // [rsp+38h] [rbp-40h] BYREF

  v7 = 0;
  v11 = a1;
  if ( !a1 || !a2 || !a4 || (*(_BYTE *)a2 & 2) == 0 && (*(_BYTE *)a2 & 4) == 0 )
    return (unsigned int)-1073741811;
  if ( a3 )
    *a3 = 0LL;
  v12 = 0;
  v13 = 0;
  while ( v12 < 4 )
  {
    v14 = *(_WORD *)(a2 + 2LL * v12 + 12);
    if ( ((*(_WORD *)(a2 + 8) >> (2 * v12)) & 3) == 1 )
    {
      if ( (*(_BYTE *)a2 & 4) != 0 )
        goto LABEL_25;
      String.Buffer = a4;
      if ( (int)RtlULongToUShort(2 * (unsigned int)(unsigned __int16)a5, (__int16 *)&String.MaximumLength) < 0
        || !RtlLCIDToCultureName((__int16)v14, &String) )
      {
        goto LABEL_25;
      }
    }
    else if ( ((*(_WORD *)(a2 + 8) >> (2 * v12)) & 3) == 2 )
    {
      if ( (int)RtlpMuiRegGetInstalledLanguageInfoByIndex(v11, v14, (unsigned int)&v18, (_DWORD)a4, a5, (__int64)&v17) < 0
        || (v17 & 0x1000) != 0 )
      {
        goto LABEL_25;
      }
      if ( a3 )
        *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * (__int16)v14;
    }
    else if ( ((*(_WORD *)(a2 + 8) >> (2 * v12)) & 3) == 3
           && ((*(_BYTE *)a2 & 4) != 0 || (int)RtlpMuiRegGetString(v11, v14, a4, a5) < 0 || (*(_WORD *)a2 & 0x1000) != 0) )
    {
      goto LABEL_25;
    }
    v13 = 1;
LABEL_25:
    v11 = a1;
    ++v12;
    if ( v13 )
      break;
  }
  if ( v13 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    if ( (unsigned int)v15 < a5 )
    {
      if ( a6 )
        *a6 = &a4[(unsigned int)v15];
      if ( a7 )
        *a7 = a5 - (unsigned int)v15;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v7;
}
