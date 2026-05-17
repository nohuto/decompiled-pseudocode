/*
 * XREFs of RtlpHpStackTraceAllocFindMapping @ 0x1801048D8
 * Callers:
 *     RtlpHpStackTraceAllocRemove @ 0x1801049E4 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180104F80 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpStackTraceAllocFindMapping(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v3 = a2 & v2;
  v4 = (a2 & (unsigned __int64)v2) >> 56;
  v5 = (a2 & (unsigned __int64)v2) >> 48;
  v6 = (a2 & (unsigned __int64)v2) >> 40;
  v7 = (a2 & (unsigned __int64)v2) >> 32;
  v8 = a2 & v2;
  v9 = v8 >> 24;
  v10 = v8 >> 16;
  v11 = v8 >> 8;
  if ( *(_DWORD *)(a1 + 20) >= 0x20u )
  {
    v12 = *(_QWORD *)(a1 + 24)
        + 8LL
        * (((_DWORD)v4
          + 37
          * ((unsigned __int8)v5
           + 37
           * ((unsigned __int8)v6
            + 37
            * ((unsigned __int8)v7
             + 37
             * ((unsigned __int8)v9
              + 37 * ((unsigned __int8)v10 + 37 * ((unsigned __int8)v11 + 37 * ((unsigned __int8)v3 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1));
    while ( 1 )
    {
      v12 = *(_QWORD *)v12;
      if ( (v12 & 1) != 0 )
        break;
      if ( v3 == (v2 & *(_QWORD *)(v12 + 8)) )
        return v12;
    }
  }
  return 0LL;
}
