/*
 * XREFs of ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C01619E4
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C016E7CC (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CommitInputFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // ebp
  struct _KTHREAD ***v7; // rcx
  struct _KTHREAD *v8; // rdx
  struct _KTHREAD **v9; // rax

  v5 = *((_QWORD *)a2 + 15);
  v6 = *((_DWORD *)a2 + 10);
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  while ( v5 )
  {
    if ( *(_DWORD *)v5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    *(_DWORD *)v5 = v6;
    v5 = *(_QWORD *)(v5 + 24);
  }
  v7 = (struct _KTHREAD ***)(this + 13);
  v8 = this[13];
  v9 = (struct _KTHREAD **)((char *)a2 + 8);
  if ( *((struct _KTHREAD ***)v8 + 1) != this + 13 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)a2 + 2) = v7;
  *((_QWORD *)v8 + 1) = v9;
  *v7 = v9;
}
