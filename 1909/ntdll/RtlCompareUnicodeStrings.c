/*
 * XREFs of RtlCompareUnicodeStrings @ 0x18001A040
 * Callers:
 *     ApiSetpSearchForApiSetHost @ 0x18002518C (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x1800290D0 (ApiSetpSearchForApiSet.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     LdrpIsSubstringFound @ 0x1800D4738 (LdrpIsSubstringFound.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800FFBE4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180100208 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x18001A234 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlCompareUnicodeStrings(_WORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v5; // rax
  int v6; // ebp
  int v7; // ebx
  _WORD *v8; // r10
  unsigned __int64 v9; // rdi
  __int64 v10; // r11
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // si
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // eax

  v5 = a2;
  v6 = a4;
  if ( a2 > a4 )
    v5 = a4;
  v7 = a2;
  v8 = a1;
  v9 = (unsigned __int64)&a1[v5];
  if ( (unsigned __int64)a1 >= v9 )
    return (unsigned int)(v7 - v6);
  v10 = a3 - (_QWORD)a1;
  if ( a5 )
  {
    while ( 1 )
    {
      if ( *v8 != *(_WORD *)((char *)v8 + v10) )
      {
        v13 = NLS_UPCASE((unsigned __int16)*v8);
        v14 = NLS_UPCASE(v12);
        if ( v13 != v14 )
          break;
      }
      if ( (unsigned __int64)++v8 >= v9 )
        return (unsigned int)(v7 - v6);
    }
    v15 = v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      LOWORD(v16) = *v8;
      LOWORD(v15) = *(_WORD *)((char *)v8 + v10);
      if ( *v8 != (_WORD)v15 )
        break;
      if ( (unsigned __int64)++v8 >= v9 )
        return (unsigned int)(v7 - v6);
    }
    v15 = (unsigned __int16)v15;
    v16 = (unsigned __int16)v16;
  }
  return (unsigned int)(v16 - v15);
}
