/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0162ABC
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C016558C (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C010D500 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C010DBF0 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01616AC (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0161778 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01626A8 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0162860 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0166A28 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0169470 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016DABC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C016DAF0 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0175070 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1C019B6C8 (ApiSetEditionDelQEntry.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  __int64 v8; // rdx
  CTouchProcessor *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned int v20; // edi
  const struct CPointerInfoNode *v21; // rbx
  int v22; // r12d
  unsigned int v23; // r14d
  unsigned __int64 v24; // rcx
  int v25; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct tagQMSG *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // r14
  unsigned int v39; // r12d
  struct _KTHREAD **v40; // rbx
  struct CPointerInputFrame *v41; // rdi
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct tagQ *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  int CanCoalesceNodeWithPrevious; // [rsp+30h] [rbp-10h]
  int v50; // [rsp+34h] [rbp-Ch]
  struct tagQ *v51; // [rsp+38h] [rbp-8h] BYREF
  struct tagQMSG *v53; // [rsp+80h] [rbp+40h]
  unsigned int v54; // [rsp+90h] [rbp+50h] BYREF
  struct CPointerInputFrame *v55; // [rsp+98h] [rbp+58h]

  v55 = a4;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v14 = *((_DWORD *)a3 + 37);
  if ( (v14 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *((_DWORD *)a3 + 37);
  }
  if ( (v14 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *((_DWORD *)a3 + 37);
  }
  if ( (v14 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 36));
  v18 = (__int64)result;
  if ( !result )
    return result;
  v19 = *((unsigned int *)a2 + 12);
  v20 = 1;
  v21 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 16);
  v22 = 0;
  CanCoalesceNodeWithPrevious = 1;
  v54 = 1;
  v23 = 0;
  if ( !(_DWORD)v19 )
    goto LABEL_39;
  while ( 1 )
  {
    v24 = *((_QWORD *)a2 + 16) + 496 * v19;
    if ( (unsigned __int64)v21 >= v24 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v16, v17);
    if ( *((_DWORD *)v21 + 2) == *(_DWORD *)a3 )
    {
      if ( (*(_DWORD *)v21 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(v21) )
      {
        v51 = 0LL;
        NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v21, v25, &v51);
        v30 = NodeQueuedMessage;
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            if ( !v51 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
            v31 = *(_DWORD *)(v18 + 4);
            if ( v23 < v31 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
              v31 = *(_DWORD *)(v18 + 4);
            }
            if ( v31 >= *(_DWORD *)v18 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
              v31 = *(_DWORD *)(v18 + 4);
            }
            *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * v31) = v51;
            v32 = 2LL * *(unsigned int *)(v18 + 4);
            *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v18 + 4))++ + 8) = v30;
            if ( *(_DWORD *)(v18 + 4) > *(_DWORD *)v18 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, 2LL * v31, v29);
            CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                            this,
                                            v55,
                                            v21,
                                            v30,
                                            a3,
                                            (enum CPointerCoalesce *)&v54);
            v20 = CanCoalesceNodeWithPrevious;
            if ( !CanCoalesceNodeWithPrevious )
            {
              v34 = v54;
              goto LABEL_67;
            }
            v22 = 1;
            goto LABEL_35;
          }
          v34 = 18;
        }
        else
        {
          v34 = 15;
        }
        v20 = 0;
        goto LABEL_67;
      }
      if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v55, v21, (enum CPointerCoalesce *)&v54) )
        break;
    }
LABEL_35:
    v19 = *((unsigned int *)a2 + 12);
    ++v23;
    v21 = (const struct CPointerInfoNode *)((char *)v21 + 496);
    if ( v23 >= (unsigned int)v19 )
    {
      v34 = v54;
      v50 = v54;
      goto LABEL_37;
    }
  }
  v34 = v54;
  v50 = v54;
  if ( v54 != 3 && v54 != 20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v16, v17);
  v20 = 0;
  CanCoalesceNodeWithPrevious = 0;
LABEL_37:
  if ( !v20 )
    goto LABEL_67;
  if ( !v22 )
  {
LABEL_39:
    v34 = 19;
    v20 = 0;
    v50 = 19;
    CanCoalesceNodeWithPrevious = 0;
  }
  if ( v20 )
  {
    v35 = *((unsigned int *)a3 + 36);
    if ( (_DWORD)v35 != *(_DWORD *)(*((_QWORD *)a3 + 20) + 144LL) )
    {
      v34 = 17;
      v20 = 0;
      v50 = 17;
      CanCoalesceNodeWithPrevious = 0;
    }
    if ( v20 )
    {
      if ( *(_DWORD *)(v18 + 4) > (unsigned int)v35 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v16, v17);
      if ( v34 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v16, v17);
      EtwTraceBeginPointerFrameCoalesce(
        (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10),
        *((_DWORD *)a2 + 12),
        (const GUID *)1);
      v36 = *((unsigned int *)a2 + 12);
      v37 = 0LL;
      v38 = *((_QWORD *)a2 + 16);
      v39 = 0;
      v54 = 0;
      if ( (_DWORD)v36 )
      {
        v40 = this;
        v41 = v55;
        do
        {
          v42 = *((_QWORD *)a2 + 16) + 496LL * (unsigned int)v36;
          if ( v38 >= v42 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v36, v37);
            v37 = v54;
          }
          if ( *(_DWORD *)(v38 + 8) == *(_DWORD *)a3
            && (*(_DWORD *)v38 & 0x2000) == 0
            && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v38) )
          {
            if ( (unsigned int)v37 > v39 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v37);
              v37 = v54;
            }
            if ( (unsigned int)v37 >= *(_DWORD *)(v18 + 4) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v37);
              v37 = v54;
            }
            v45 = *(struct tagQ **)(*(_QWORD *)(v18 + 8) + 16LL * (unsigned int)v37);
            v51 = v45;
            v53 = *(struct tagQMSG **)(*(_QWORD *)(v18 + 8) + 16LL * (unsigned int)v37 + 8);
            if ( *(_QWORD *)(v38 + 16) != *((_QWORD *)v53 + 5) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, 2LL * (unsigned int)v37, v37);
            CTouchProcessor::CoalesceNodeWithPrevious(v40, a2, v41, (struct CPointerInfoNode *)v38, v39, 1);
            if ( *(_QWORD *)(v38 + 16) == *((_QWORD *)v53 + 5) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v46, v47);
            InputTraceLogging::Delivery::CoalesceMessage(v53);
            ApiSetEditionDelQEntry((char *)v51 + 24, v53);
            v37 = ++v54;
          }
          v36 = *((unsigned int *)a2 + 12);
          ++v39;
          v38 += 496LL;
        }
        while ( v39 < (unsigned int)v36 );
        v34 = v50;
        v20 = CanCoalesceNodeWithPrevious;
      }
      EtwTraceEndPointerFrameCoalesce((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), v36, (const GUID *)1);
    }
  }
LABEL_67:
  v48 = *((_DWORD *)a3 + 37) & 0xFFFFFFF9 | (2 * ((2 * (v20 & 1)) | v20 & 1));
  *((_DWORD *)a3 + 37) = v48;
  CTouchProcessor::TrackCoalesceOnReassign(v48, a3, v34);
  return (struct tagCPointerCoalesceInfo *)v20;
}
