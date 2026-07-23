/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x1402ECF34
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x14067D420 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14067D480 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  _BYTE *v8; // r10
  int i; // ebp
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // r9
  __int16 v16; // dx
  unsigned int v17; // eax

  v5 = a5;
  v8 = a1;
  for ( i = (int)a1; v5; --v5 )
  {
    if ( !a2 )
      break;
    v10 = *a4++;
    v11 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v10);
    v12 = NlsLeadByteInfoTable[(unsigned __int64)v11 >> 8];
    if ( v12 )
    {
      v13 = (unsigned __int8)v11 + (unsigned __int64)v12;
      v14 = NlsMbAnsiCodePageTables;
    }
    else
    {
      v14 = NlsAnsiToUnicodeData;
      v13 = (unsigned __int8)v11;
    }
    v15 = *(_WORD *)(v14 + 2 * v13);
    if ( v15 >= 0x61u )
    {
      if ( v15 > 0x7Au )
        v15 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v15 & 0xF)
                                                                       + 2
                                                                       * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v15 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v15 >> 8)]]];
      else
        v15 -= 32;
    }
    v16 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * v15);
    if ( HIBYTE(v16) )
    {
      v17 = a2--;
      if ( v17 < 2 )
        break;
      *v8++ = HIBYTE(v16);
    }
    *v8 = v16;
    --a2;
    ++v8;
  }
  if ( a3 )
    *a3 = (_DWORD)v8 - i;
  return a2 < v5 ? 0x80000005 : 0;
}
