/*
 * XREFs of RtlpHpVsChunkSize @ 0x18005BCDC
 * Callers:
 *     RtlpHpSegSizeInternal @ 0x180016158 (RtlpHpSegSizeInternal.c)
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsSubsegmentWalk @ 0x18005BAF0 (RtlpHpVsSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int16 v9; // r8
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = a2 - 16;
  v6 = *(_DWORD *)(a1 + 176) & 1;
  if ( v6 && (a2 & 0xFFF) == 0 )
    v5 = a2 - 32;
  if ( ((v5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v5) & 0xFF000000000000LL) == 0 )
    return -1LL;
  v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
  if ( v6 && ((v5 + 32) & 0xFFF) == 0 )
    v7 -= 16LL;
  if ( (*(_DWORD *)(v5 + 8) & 0x100) != 0 )
  {
    v8 = *(unsigned __int16 *)((unsigned int)v7 + a2 - 2);
    v9 = *(_WORD *)((unsigned int)v7 + a2 - 2);
    if ( (v8 & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v9 = *(_WORD *)((unsigned int)v7 + a2 - 2);
    }
    v10 = (v8 >> 14) & 1;
    if ( v9 < 0 )
      --v7;
    else
      v7 -= v9 & 0x1FFF;
  }
  else
  {
    v10 = 0;
  }
  if ( a4 )
    *a4 = v10;
  return v7;
}
