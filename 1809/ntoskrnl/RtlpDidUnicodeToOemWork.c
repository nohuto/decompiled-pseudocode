/*
 * XREFs of RtlpDidUnicodeToOemWork @ 0x14067D3A0
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x14067D080 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067D2E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406D0160 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, __int64 a2)
{
  char v3; // r9
  unsigned int v4; // r11d
  unsigned int v5; // edx
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  bool v12; // zf

  v3 = 1;
  if ( !BYTE4(NlsMbCodePageTag) )
  {
    v4 = *a1;
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v7 = 0;
      v8 = 0;
      if ( !*a1 )
        return v3;
      v9 = *((_QWORD *)a1 + 1);
      while ( 1 )
      {
        v10 = *(unsigned __int8 *)(v7 + v9);
        if ( NlsOemLeadByteInfoTable[v10] && (v11 = v7 + 1, (unsigned int)v11 < v4) )
        {
          ++v7;
          v12 = ((char)v10 << 8) + *(unsigned __int8 *)(v11 + v9) == OemDefaultChar;
        }
        else
        {
          v12 = (char)v10 == (unsigned __int8)OemDefaultChar;
        }
        if ( v12 && *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v8) != OemTransUniDefaultChar )
          break;
        ++v7;
        ++v8;
        if ( v7 >= v4 )
          return v3;
      }
      return 0;
    }
    v5 = 0;
    if ( *a1 )
    {
      while ( *(char *)(v5 + *((_QWORD *)a1 + 1)) != (unsigned __int8)OemDefaultChar
           || *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * v5) == OemTransUniDefaultChar )
      {
        if ( ++v5 >= v4 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}
