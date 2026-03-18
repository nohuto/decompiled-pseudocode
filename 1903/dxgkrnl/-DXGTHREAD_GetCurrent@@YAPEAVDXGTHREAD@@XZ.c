/*
 * XREFs of ?DXGTHREAD_GetCurrent@@YAPEAVDXGTHREAD@@XZ @ 0x1C003E0A0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 */

struct DXGTHREAD *__fastcall DXGTHREAD_GetCurrent(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !CurrentThread )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
  if ( CurrentProcessSessionId )
  {
    if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId && !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v7 = *ThreadWin32Thread;
        if ( v7 )
          return *(struct DXGTHREAD **)(v7 + 80);
      }
    }
  }
  return (struct DXGTHREAD *)v3;
}
