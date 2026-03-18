/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x1C0013D50
 * Callers:
 *     DpiFdoLineInterruptRoutine @ 0x1C004BBC0 (DpiFdoLineInterruptRoutine.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoMessageInterruptRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  char v6; // si
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // di
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax

  v3 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v6 = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter);
  }
  else
  {
    v6 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v11, v10)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v3 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v13 = *(_DWORD *)(v3 + 140);
      if ( !v13 )
        *(_DWORD *)(v3 + 144) = 4014;
      *(_DWORD *)(v3 + 140) = v13 + 1;
    }
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
          a3);
  if ( v3 )
  {
    v17 = *(_DWORD *)(v3 + 140);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v18 + 24) = 250LL;
      WdLogEvent5_WdAssertion(v18);
      v17 = *(_DWORD *)(v3 + 140);
    }
    v19 = v17 - 1;
    *(_DWORD *)(v3 + 140) = v19;
    if ( !v19 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit);
  return v16;
}
