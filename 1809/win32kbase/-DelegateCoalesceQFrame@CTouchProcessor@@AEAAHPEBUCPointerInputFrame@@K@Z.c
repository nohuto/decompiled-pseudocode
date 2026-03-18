/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0137288
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0137110 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01355A4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0142A80 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0146260 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  struct _KTHREAD **v12; // rcx
  int v14; // ecx
  struct CPointerInputFrame *v15; // rax
  __int64 v16; // rbp
  unsigned int v17; // ebx
  __int64 v18; // r8

  v5 = (unsigned int)a3;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)v5 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = *((_QWORD *)a2 + 14) + 224 * v5;
  if ( *(_DWORD *)v9 != (_DWORD)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v10 = *(_DWORD *)(v9 + 204);
  if ( (v10 & 8) != 0 )
  {
    v11 = 9LL;
    v12 = this;
LABEL_13:
    CTouchProcessor::TrackCoalesceOnReassign(v12, v9, v11);
    return 0LL;
  }
  if ( (v10 & 2) == 0 && *(_DWORD *)(v9 + 208) != 9 )
  {
    v14 = *(_DWORD *)(v9 + 212);
    if ( v14 )
    {
      if ( v14 != 9 )
        return 0LL;
    }
  }
  v12 = this;
  if ( (v10 & 1) == 0 )
  {
    v11 = 13LL;
    goto LABEL_13;
  }
  v15 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v16 = (__int64)v15;
  v12 = this;
  if ( !v15 )
  {
    v11 = 10LL;
    goto LABEL_13;
  }
  v17 = (unsigned int)CTouchProcessor::CoalesceQFrames(this, a2, (struct CPointerQFrame *)v9, v15);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v16, v18);
  return v17;
}
