/*
 * XREFs of RtlDeleteHashTable @ 0x180079E20
 * Callers:
 *     RtlCreateHashTableEx_0 @ 0x18006FA08 (RtlCreateHashTableEx_0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteHashTable(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v4; // ebp
  __int64 *v5; // rsi

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) <= 0x80u )
  {
    if ( !v2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v4 = 0;
    v5 = *(__int64 **)(a1 + 32);
    do
    {
      if ( !*v5 )
        break;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *v5);
      ++v4;
      ++v5;
    }
    while ( v4 < 0x10 );
LABEL_3:
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
LABEL_4:
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
