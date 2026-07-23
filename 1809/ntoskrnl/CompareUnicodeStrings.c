/*
 * XREFs of CompareUnicodeStrings @ 0x1406A3B10
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x1406A38A0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x1406A3A00 (RtlFindUnicodePrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareUnicodeStrings(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r14d
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r10
  unsigned int v10; // r11d
  unsigned __int16 *v11; // rsi
  unsigned __int16 *v12; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx

  v5 = *a1 >> 1;
  v6 = *a2 >> 1;
  if ( (_DWORD)v5 == 1 && **((_WORD **)a1 + 1) == 92 && v6 > 1 && **((_WORD **)a2 + 1) == 92 )
    return 1LL;
  v7 = *a1 >> 1;
  if ( (unsigned int)v5 >= v6 )
    v7 = *a2 >> 1;
  if ( a3 > v7 )
    a3 = v7;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    v14 = *((_QWORD *)a1 + 1);
    v15 = *((_QWORD *)a2 + 1);
    do
    {
      v8 = *(_WORD *)(v14 + 2LL * v10);
      v9 = *(_WORD *)(v15 + 2LL * v10);
      if ( v8 != v9 )
        break;
      ++v10;
    }
    while ( v10 < a3 );
  }
  if ( v10 == a3 )
  {
    v11 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v10);
    v12 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v10);
    if ( v10 >= v7 )
      goto LABEL_23;
    do
    {
      v8 = *v11++;
      v9 = *v12++;
      if ( v8 != v9 )
      {
        if ( v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
            v8 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v8 & 0xF)
                                                                          + 2
                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v8 >> 8)]]];
          else
            v8 -= 32;
        }
        if ( v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v9 & 0xF)
                                                                          + 2
                                                                          * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v9 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v9 >> 8)]]];
          else
            v9 -= 32;
        }
        if ( v8 != v9 )
          break;
      }
      ++v10;
    }
    while ( v10 < v7 );
  }
  if ( v10 < v7 )
  {
    if ( v8 == 92 )
      return 0LL;
    if ( v9 == 92 )
      return 3LL;
    if ( v8 < v9 )
      return 0LL;
    if ( v8 > v9 )
      return 3LL;
  }
LABEL_23:
  if ( (unsigned int)v5 < v6 )
    return *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v5) == 92;
  if ( (unsigned int)v5 > v6 )
    return 3LL;
  return 2LL;
}
