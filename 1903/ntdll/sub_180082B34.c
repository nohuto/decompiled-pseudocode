/*
 * XREFs of sub_180082B34 @ 0x180082B34
 * Callers:
 *     sub_180070C28 @ 0x180070C28 (sub_180070C28.c)
 *     sub_180082AC4 @ 0x180082AC4 (sub_180082AC4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

_UNKNOWN **__fastcall sub_180082B34(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  __int64 v4; // rsi
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      result = *(_UNKNOWN ***)(a1 + 8);
      v4 = (__int64)result[i];
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 24);
        *(_DWORD *)(v4 + 8) = 0;
        *(_QWORD *)(v4 + 16) = 0LL;
        if ( v5 )
        {
          ZwClose(v5);
          *(_QWORD *)(v4 + 24) = 0LL;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * i) = 0LL;
        result = (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      result = (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
