/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x1406C8FE0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C8BD0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406C8CB0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C8F20 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406541F0 (RtlpIsUtf8Process.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  char v3; // bl
  unsigned int v5; // r10d
  unsigned int v6; // edx
  unsigned int v8; // r9d
  unsigned int v9; // r11d
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf

  v3 = 1;
  if ( !RtlpIsUtf8Process(1) )
  {
    v5 = *a1;
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v8 = 0;
      v9 = 0;
      if ( !*a1 )
        return v3;
      v10 = *((_QWORD *)a1 + 1);
      while ( 1 )
      {
        v11 = *(unsigned __int8 *)(v8 + v10);
        if ( NlsOemLeadByteInfoTable[v11] && (v12 = v8 + 1, (unsigned int)v12 < v5) )
        {
          ++v8;
          v13 = ((char)v11 << 8) + *(unsigned __int8 *)(v12 + v10) == OemDefaultChar;
        }
        else
        {
          v13 = (char)v11 == (unsigned __int8)OemDefaultChar;
        }
        if ( v13 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v9) != OemTransUniDefaultChar )
          break;
        ++v8;
        ++v9;
        if ( v8 >= v5 )
          return v3;
      }
      return 0;
    }
    v6 = 0;
    if ( *a1 )
    {
      while ( *(char *)(v6 + *((_QWORD *)a1 + 1)) != (unsigned __int8)OemDefaultChar
           || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v6) == OemTransUniDefaultChar )
      {
        if ( ++v6 >= v5 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}
