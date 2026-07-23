/*
 * XREFs of RtlpHpTagContextFindMapping @ 0x1800650DC
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x180010D10 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagContextAllocateTag @ 0x180064ED0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagQueryTags @ 0x18007B480 (RtlpHpTagQueryTags.c)
 *     RtlpHpTagContextGetTag @ 0x180106E98 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlpHpTagMappingComparison @ 0x18007A0E4 (RtlpHpTagMappingComparison.c)
 */

__int64 __fastcall RtlpHpTagContextFindMapping(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  __int64 v8; // [rsp+60h] [rbp+18h]

  v8 = a3;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = a3 & (-1LL << (*(_BYTE *)(a1 + 12) & 0x1F));
    if ( v5 )
      goto LABEL_5;
    if ( *(_DWORD *)(a1 + 12) < 0x20u )
      return 0LL;
    v5 = *(_QWORD *)(a1 + 16)
       + 8
       * ((HIBYTE(v6)
         + 37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 12) >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v6 == ((-1LL << (*(_BYTE *)(a1 + 12) & 0x1F)) & *(_QWORD *)(v5 + 8)) )
        goto LABEL_7;
    }
    v5 = 0LL;
LABEL_7:
    if ( !v5 || (unsigned int)RtlpHpTagMappingComparison(v5, a2, HIWORD(v6)) )
      return v5;
    a3 = v8;
  }
}
