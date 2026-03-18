/*
 * XREFs of ExpAddCurrentThreadToThreadHistory @ 0x140045B20
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140044350 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall ExpAddCurrentThreadToThreadHistory(__int64 a1)
{
  struct _KTHREAD **v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edx
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rdi

  LOBYTE(v2) = *(_DWORD *)(a1 + 312) & 7;
  if ( (_BYTE)v2 != 4 )
  {
    v3 = 0LL;
    v4 = 0;
    CurrentThread = KeGetCurrentThread();
    v6 = (_QWORD *)(a1 + 72);
    v2 = (struct _KTHREAD **)(a1 + 72);
    while ( *v2 != CurrentThread )
    {
      ++v4;
      ++v2;
      if ( v4 >= 4 )
      {
        LOBYTE(v2) = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
        while ( *v6 )
        {
          v3 = (unsigned int)(v3 + 1);
          ++v6;
          if ( (unsigned int)v3 >= 4 )
          {
            v7 = *(_DWORD *)(a1 + 312) & 7;
            ObfDereferenceObjectWithTag(*(PVOID *)(8 * v7 + a1 + 72), 0x746C6644u);
            *(_QWORD *)(8 * v7 + a1 + 72) = CurrentThread;
            LODWORD(v2) = *(_DWORD *)(a1 + 312) & 0xFFFFFFF8;
            *(_DWORD *)(a1 + 312) = (unsigned int)v2 | ((_BYTE)v7 + 1) & 3;
            return (char)v2;
          }
        }
        *(_QWORD *)(a1 + 8 * v3 + 72) = CurrentThread;
        return (char)v2;
      }
    }
  }
  return (char)v2;
}
