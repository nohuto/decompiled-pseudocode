/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0135348
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01355A4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01462B8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     EtwTracePointerCoalesce @ 0x1C00E7A30 (EtwTracePointerCoalesce.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0138874 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C0147578 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // zf
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  unsigned int v37; // [rsp+40h] [rbp+8h] BYREF

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v14, (__int64)a3, v15) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  v19 = *(unsigned int *)a4;
  if ( (v19 & 0x800000) != 0 || (v19 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v18);
    v19 = *(unsigned int *)a4;
  }
  if ( (int)v19 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v18);
    v19 = *(unsigned int *)a4;
  }
  if ( (v19 & 0x100000) != 0 && (v19 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v18);
  if ( *((_DWORD *)a4 + 75) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v18);
  v20 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v20 )
      goto LABEL_27;
  }
  else if ( !v20 )
  {
    goto LABEL_27;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v18);
LABEL_27:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 118), &v37);
  if ( !ValidNodeInFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
  v28 = *(unsigned int *)ValidNodeInFrame;
  if ( (v28 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v27);
    v28 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v28 & 0x800000) != 0 || (v28 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v27);
    v28 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (int)v28 < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v27);
    v28 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v28 & 0x100000) != 0 && (v28 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v27);
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v27);
  if ( *((_DWORD *)ValidNodeInFrame + 75) > 0x64u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25, v27);
  CTouchProcessor::UpdateMsgData(
    (CTouchProcessor *)this,
    *((_QWORD *)ValidNodeInFrame + 2),
    *((_DWORD *)a2 + 10),
    a5,
    *((_QWORD *)a4 + 2));
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  v32 = a6 == 0;
  *((_DWORD *)a4 + 75) = *((_DWORD *)ValidNodeInFrame + 75) + 1;
  *((_DWORD *)a4 + 96) = v37;
  if ( v32 )
  {
    v33 = *(_DWORD *)ValidNodeInFrame;
    if ( (*(_DWORD *)ValidNodeInFrame & 0x80000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
      v33 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v33 & 0x800000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
      v33 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v33 & 0x8000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
    if ( *(int *)a4 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
    *(_DWORD *)a4 |= 0x80000u;
    v34 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *(_DWORD *)ValidNodeInFrame) & 0x100000;
    *(_DWORD *)a4 = v34;
    v35 = v34 ^ (v34 ^ *(_DWORD *)ValidNodeInFrame) & 0x200000;
    *(_DWORD *)a4 = v35;
    *(_DWORD *)a4 = v35 ^ (v35 ^ *(_DWORD *)ValidNodeInFrame) & 0x400000;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 112), *((_WORD *)a4 + 118), a6);
  return *((_QWORD *)a4 + 2);
}
