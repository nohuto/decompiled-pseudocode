/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x1C0014100
 * Callers:
 *     DpiFdoLineInterruptRoutine @ 0x1C0044610 (DpiFdoLineInterruptRoutine.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiFdoMessageInterruptRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r14d
  unsigned int v6; // ebp
  char v7; // si
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 v15; // di
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax

  v3 = 0LL;
  v4 = a3;
  v6 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v7 = 1;
    v6 = 4014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 4014LL);
  }
  else
  {
    v7 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v9 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v11)
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
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
          v4);
  if ( v3 )
  {
    v17 = *(_DWORD *)(v3 + 140);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v18 + 24) = 232LL;
      WdLogEvent5_WdAssertion(v18);
      v17 = *(_DWORD *)(v3 + 140);
    }
    v19 = v17 - 1;
    *(_DWORD *)(v3 + 140) = v19;
    if ( !v19 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v16, v6);
  return v15;
}
