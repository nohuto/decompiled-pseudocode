/*
 * XREFs of RtlpHpStackTraceAllocFindMapping @ 0x180102040
 * Callers:
 *     RtlpHpStackTraceAllocRemove @ 0x180102108 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180102670 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpStackTraceAllocFindMapping(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v6; // [rsp+8h] [rbp+8h]

  v2 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v3 = a2 & v2;
  if ( *(_DWORD *)(a1 + 20) >= 0x20u )
  {
    v6 = a2 & v2;
    v4 = *(_QWORD *)(a1 + 24)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v3 + 11623883)))))))
         + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v3 == (v2 & *(_QWORD *)(v4 + 8)) )
        return v4;
    }
  }
  return 0LL;
}
