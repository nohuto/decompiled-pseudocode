/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x140124020
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiReduceShareCount @ 0x1401240AC (MiReduceShareCount.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rbx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 168);
  MiFlushTbList((int *)v4, a2, a3, a4);
  if ( *(_DWORD *)(v4 + 204) )
  {
    v8 = 48LL * *(_QWORD *)(v4 + 216) - 0x58000000000LL;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9, v5, v6);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    MiReduceShareCount(v8, *(unsigned int *)(v4 + 204));
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v4 + 204) = 0;
  }
  return 0LL;
}
