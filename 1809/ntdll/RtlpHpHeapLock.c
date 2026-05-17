/*
 * XREFs of RtlpHpHeapLock @ 0x18006D704
 * Callers:
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x18009F724 (RtlpHpAcquireQueuedLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1, _BYTE *a2, unsigned __int64 *a3, __int64 a4)
{
  int v6; // ecx
  struct _TEB *result; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 220);
    if ( v6 && (result = NtCurrentTeb(), v6 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 216);
    }
    else
    {
      RtlAcquireSRWLockExclusive(a1 + 904, (unsigned __int64)a2, a3, a4);
      v9 = *(_DWORD *)(a1 + 20);
      *a2 = -1;
      if ( (v9 & 1) == 0 )
      {
        RtlpHpAcquireQueuedLockExclusive(a1 + 640, v8, v19);
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(a1 + 320, v10, v11, v12);
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive(a1 + 512, v13, v14, v15);
            if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive(a1 + 64, v16, v17, v18);
          }
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 220) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 216) = 1;
    }
  }
  return result;
}
