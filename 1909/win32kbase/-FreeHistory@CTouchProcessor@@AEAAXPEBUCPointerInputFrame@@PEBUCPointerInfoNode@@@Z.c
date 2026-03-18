/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0164DC0
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01651F0 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 * Callees:
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01652CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C016735C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016B8BC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01734BC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int HistoryCount; // esi
  __int64 v12; // r8
  unsigned int v13; // r12d
  CTouchProcessor *v14; // rdi
  bool v15; // zf
  char *v16; // rbp
  __int64 v17; // rbx
  unsigned int v18; // ebx

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
  v13 = *((_DWORD *)a3 + 88);
  v14 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  while ( v14 != (CTouchProcessor *)(this + 13) )
  {
    v15 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_24;
    v16 = (char *)v14 - 8;
    v14 = *(CTouchProcessor **)v14;
    if ( *((_QWORD *)v16 + 8) == *((_QWORD *)a2 + 8) )
    {
      if ( v13 >= *((_DWORD *)v16 + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      v17 = *((_QWORD *)v16 + 16) + 496LL * v13;
      if ( (*(_DWORD *)v17 & 0x2000) != 0 || !*(_DWORD *)(v17 + 180) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      if ( *(_WORD *)(v17 + 180) != *((_WORD *)a3 + 90) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      if ( *(_QWORD *)(v17 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      if ( (*(_DWORD *)v17 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      v18 = *(_DWORD *)(v17 + 352);
      _InterlockedIncrement((volatile signed __int32 *)v16 + 11);
      CTouchProcessor::FreePointerInfoNodeInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v16, v13);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v16);
      --HistoryCount;
      v13 = v18;
    }
  }
  v15 = HistoryCount == 1;
LABEL_24:
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
}
