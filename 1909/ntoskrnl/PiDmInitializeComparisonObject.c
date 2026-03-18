/*
 * XREFs of PiDmInitializeComparisonObject @ 0x1405BF060
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x1405BD82C (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x1405BEFB0 (PiDmLookupObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406FB944 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmInitializeComparisonObject(_WORD *a1, int a2, __int64 a3)
{
  _WORD *v3; // rax
  unsigned int v4; // esi
  unsigned __int16 *v7; // r10
  _WORD *v8; // rax
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  int v11; // eax
  int *v12; // rdi
  int v13; // r11d
  unsigned __int16 v14; // r9

  v3 = 0LL;
  *(_QWORD *)(a3 + 16) = a1;
  v4 = 0;
  *(_DWORD *)(a3 + 28) = a2;
  v7 = 0LL;
  if ( a1 )
  {
    v8 = a1;
    v9 = 0x7FFFLL;
    while ( *v8 )
    {
      ++v8;
      if ( !--v9 )
        return 3221225485LL;
    }
    v3 = a1;
    v10 = 2 * (0x7FFF - v9);
    v7 = a1;
  }
  else
  {
    v10 = 0;
  }
  if ( a2 == 3 )
  {
    if ( v10 <= 8u )
      return 3221225524LL;
    v7 = v3 + 4;
    v10 -= 8;
  }
  v11 = 0;
  v12 = (int *)(a3 + 24);
  if ( a3 == -24 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = v10 >> 1;
    for ( *v12 = 0; v13; v11 = v14 + 65599 * v11 )
    {
      v14 = *v7++;
      --v13;
      if ( v14 >= 0x61u )
      {
        if ( v14 > 0x7Au )
        {
          if ( Nls844UnicodeUpcaseTable )
          {
            if ( v14 >= 0xC0u )
              v14 += *(_WORD *)(Nls844UnicodeUpcaseTable
                              + 2LL
                              * ((v14 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                   + 2LL
                                                                   * (((v14 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v14 >> 8))))));
          }
        }
        else
        {
          v14 -= 32;
        }
      }
    }
    *v12 = v11;
  }
  return v4;
}
