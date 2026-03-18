/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0138C38
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01390C4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 * Callees:
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD3CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4F8 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C013AEFC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v16; // r14
  __int64 v17; // rbx
  unsigned int v18; // ebx
  __int64 v19; // r8

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
  v13 = *((_DWORD *)a3 + 96);
  v14 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  while ( v14 != (CTouchProcessor *)(this + 9) )
  {
    v15 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_24;
    v16 = (__int64)v14 - 8;
    v14 = *(CTouchProcessor **)v14;
    if ( *(_QWORD *)(v16 + 64) == *((_QWORD *)a2 + 8) )
    {
      if ( v13 >= *(_DWORD *)(v16 + 48) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      v17 = *(_QWORD *)(v16 + 104) + 576LL * v13;
      if ( (*(_DWORD *)v17 & 0x2000) != 0 || !*(_DWORD *)(v17 + 236) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      if ( *(_WORD *)(v17 + 236) != *((_WORD *)a3 + 118) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      if ( *(_QWORD *)(v17 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      if ( (*(_DWORD *)v17 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
      v18 = *(_DWORD *)(v17 + 384);
      CTouchProcessor::ReferenceFrameInt(v10, v16, v12);
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v16, v13);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v16, v19);
      --HistoryCount;
      v13 = v18;
    }
  }
  v15 = HistoryCount == 1;
LABEL_24:
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
}
