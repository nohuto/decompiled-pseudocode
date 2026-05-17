/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x18005BAF0
 * Callers:
 *     RtlpHpSegWalk @ 0x18005B85C (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18005BCDC (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v14; // rdx
  unsigned __int64 i; // rax

  if ( a3 == a2 )
  {
    v14 = a1 + 32;
    for ( i = *(_QWORD *)v14 ^ v14; i != v14; i ^= *(_QWORD *)i )
    {
      if ( i == a2 )
        goto LABEL_13;
    }
    if ( i == a2 )
    {
LABEL_13:
      v9 = a2 + 48;
      goto LABEL_4;
    }
  }
  else
  {
    v8 = a3 - 16;
    if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && (a3 & 0xFFF) == 0 )
      v8 = a3 - 32;
    v9 = 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v8 + 2) ^ ((unsigned __int64)(unsigned int)v8 >> 16))
       + v8;
LABEL_4:
    while ( v9 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      if ( ((v9 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v9) & 0xFF000000000000LL) != 0 && (*(_DWORD *)(v9 + 8) & 0x200) == 0 )
      {
        v10 = v9 + 16;
        if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v9 + 32) & 0xFFF) == 0 )
          v10 = v9 + 32;
        v11 = RtlpHpVsChunkSize(a1, v10, a3, a6);
        v12 = *(unsigned __int16 *)(v9 + 2);
        *a4 = v11;
        *a5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v9) ^ v12) - *(_DWORD *)a4 - 16;
        return v10;
      }
      v9 += 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v9 + 2) ^ ((unsigned __int64)(unsigned int)v9 >> 16));
    }
  }
  return 0LL;
}
