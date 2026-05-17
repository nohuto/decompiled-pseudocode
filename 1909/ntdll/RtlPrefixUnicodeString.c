/*
 * XREFs of RtlPrefixUnicodeString @ 0x180019FB0
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180073914 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180077514 (RtlpDetermineDosPathNameType4.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CDF20 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     NLS_UPCASE @ 0x18001A234 (NLS_UPCASE.c)
 */

char __fastcall RtlPrefixUnicodeString(unsigned __int16 *a1, __int64 a2, char a3)
{
  char *v3; // r10
  char *v4; // r11
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int16 *v8; // r10
  __int16 v9; // ax
  __int16 v10; // r9
  __int64 v11; // rcx

  v3 = (char *)*((_QWORD *)a1 + 1);
  if ( *(_WORD *)a2 >= *a1 )
  {
    v4 = &v3[*a1];
    if ( v3 >= v4 )
      return 1;
    if ( a3 )
    {
      v5 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
      while ( 1 )
      {
        v6 = *(unsigned __int16 *)&v3[v5];
        if ( *(_WORD *)v3 != (_WORD)v6 )
        {
          NLS_UPCASE(v6);
          v9 = NLS_UPCASE(*v8);
          if ( v9 != v10 )
            break;
        }
        v3 += 2;
        if ( v3 >= v4 )
          return 1;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
      while ( *(_WORD *)v3 == *(_WORD *)&v3[v11] )
      {
        v3 += 2;
        if ( v3 >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
