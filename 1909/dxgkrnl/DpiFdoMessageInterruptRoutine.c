/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x1C0014520
 * Callers:
 *     DpiFdoLineInterruptRoutine @ 0x1C004BC00 (DpiFdoLineInterruptRoutine.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ThreadWin32Thread; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 v17; // di
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax

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
      v9 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v9 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v12, v11)
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
      v14 = *(_DWORD *)(v3 + 140);
      if ( !v14 )
        *(_DWORD *)(v3 + 144) = 4014;
      *(_DWORD *)(v3 + 140) = v14 + 1;
    }
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
          v4);
  if ( v3 )
  {
    v19 = *(_DWORD *)(v3 + 140);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v20 + 24) = 251LL;
      WdLogEvent5_WdAssertion(v20);
      v19 = *(_DWORD *)(v3 + 140);
    }
    v21 = v19 - 1;
    *(_DWORD *)(v3 + 140) = v21;
    if ( !v21 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v18, v6);
  return v17;
}
