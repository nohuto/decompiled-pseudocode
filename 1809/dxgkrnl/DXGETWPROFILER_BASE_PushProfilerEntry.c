/*
 * XREFs of DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C00142C0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall DXGETWPROFILER_BASE_PushProfilerEntry(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax

  if ( *(_QWORD *)(a1 + 8) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 336LL;
    WdLogEvent5_WdAssertion(v4);
  }
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v7 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v7);
    }
    result = PsGetCurrentProcessSessionId(a1);
    v8 = result;
    if ( (_DWORD)result
      && (result = PsGetThreadSessionId(CurrentThread), (_DWORD)result == v8)
      && (result = IsThreadCrossSessionAttached(v9), !(_DWORD)result)
      && (result = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)result )
    {
      v10 = *(_QWORD *)(*(_QWORD *)result + 80LL);
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)(a1 + 8) = v10;
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 140);
      if ( !v11 )
        *(_DWORD *)(v10 + 144) = a2;
      result = (unsigned int)(v11 + 1);
      *(_DWORD *)(v10 + 140) = result;
    }
  }
  return result;
}
