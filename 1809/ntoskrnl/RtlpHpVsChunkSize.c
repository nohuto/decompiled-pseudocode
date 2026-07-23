/*
 * XREFs of RtlpHpVsChunkSize @ 0x1400BC170
 * Callers:
 *     RtlpHpSegSizeInternal @ 0x1400BEB90 (RtlpHpSegSizeInternal.c)
 *     RtlpSizeHeapInternal @ 0x1402F2F94 (RtlpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  unsigned int v8; // eax
  __int16 v9; // cx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = a2 - 16;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && (a2 & 0xFFF) == 0 )
    v4 = a2 - 32;
  if ( ((v4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v4) & 0xFF000000000000LL) == 0 )
    return -1LL;
  v5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v4) ^ *(unsigned __int16 *)(v4 + 2)) - 16;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v4 + 32) & 0xFFF) == 0 )
    v5 -= 16LL;
  if ( (*(_DWORD *)(v4 + 8) & 0x100) != 0 )
  {
    v8 = *(unsigned __int16 *)((unsigned int)v5 + a2 - 2);
    v9 = *(_WORD *)((unsigned int)v5 + a2 - 2);
    if ( (v8 & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v9 = *(_WORD *)((unsigned int)v5 + a2 - 2);
    }
    v6 = (v8 >> 14) & 1;
    if ( v9 < 0 )
      --v5;
    else
      v5 -= v9 & 0x1FFF;
  }
  else
  {
    v6 = 0;
  }
  if ( a4 )
    *a4 = v6;
  return v5;
}
