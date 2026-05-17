/*
 * XREFs of RtlPrefixUnicodeString @ 0x180019FB0
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     sub_180077094 @ 0x180077094 (sub_180077094.c)
 *     sub_1800CDE60 @ 0x1800CDE60 (sub_1800CDE60.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
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
          sub_18001A234(v6);
          v9 = sub_18001A234(*v8);
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
