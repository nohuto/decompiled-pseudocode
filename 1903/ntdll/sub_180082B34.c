/*
 * XREFs of sub_180082B34 @ 0x180082B34
 * Callers:
 *     sub_180070C28 @ 0x180070C28 (sub_180070C28.c)
 *     sub_180082AC4 @ 0x180082AC4 (sub_180082AC4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

int __fastcall sub_180082B34(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int i; // edi
  _QWORD *v4; // rsi
  void *v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a1 )
  {
    v1 = &retaddr;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v1 = *(_UNKNOWN ***)(a1 + 8);
      v4 = v1[i];
      if ( v4 )
      {
        v5 = (void *)v4[3];
        *((_DWORD *)v4 + 2) = 0;
        v4[2] = 0LL;
        if ( v5 )
        {
          ZwClose(v5);
          v4[3] = 0LL;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * i) = 0LL;
        LODWORD(v1) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      LODWORD(v1) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return (int)v1;
}
