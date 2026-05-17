/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x1800220B0
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x180022080 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005F440 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeSize(int *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( a3 )
      RtlUTF8ToUnicodeN(0, 0, (_DWORD)a1, (_DWORD)a2, a3);
    else
      *a1 = 0;
  }
  else
  {
    if ( NlsMbCodePageTag )
    {
      while ( a3 )
      {
        v5 = *a2;
        --a3;
        ++a2;
        if ( NlsLeadByteInfoTable[v5] )
        {
          if ( !a3 )
          {
            v3 += 2;
            break;
          }
          --a3;
          ++a2;
        }
        v3 += 2;
      }
    }
    else
    {
      v3 = 2 * a3;
    }
    *a1 = v3;
  }
  return 0LL;
}
