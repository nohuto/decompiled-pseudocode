/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01355A4
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0137288 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00E5F30 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00E6660 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01343D0 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C013449C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0135190 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0135348 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01386A0 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C013AE08 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF90 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0146260 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1C0161360 (ApiSetEditionDelQEntry.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
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
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned __int64 v38; // r14
  unsigned int v39; // ebx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct tagQ *v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct tagQ *v48; // rcx
  int CanCoalesceNodeWithPrevious; // [rsp+30h] [rbp-20h]
  unsigned int v50; // [rsp+34h] [rbp-1Ch]
  struct tagQ *v51; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp+50h] BYREF
  struct CPointerInputFrame *v54; // [rsp+A8h] [rbp+58h]

  v54 = a4;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, (__int64)a4, v10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v14 = *((_DWORD *)a3 + 51);
  if ( (v14 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *((_DWORD *)a3 + 51);
  }
  if ( (v14 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *((_DWORD *)a3 + 51);
  }
  if ( (v14 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 50));
  v18 = (__int64)result;
  if ( !result )
    return result;
  v19 = *((unsigned int *)a2 + 12);
  v20 = 1;
  v21 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 13);
  v22 = 0;
  CanCoalesceNodeWithPrevious = 1;
  v53 = 1;
  v23 = 0;
  if ( !(_DWORD)v19 )
    goto LABEL_39;
  while ( 1 )
  {
    v24 = *((_QWORD *)a2 + 13) + 576 * v19;
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
                                            (CTouchProcessor *)this,
                                            v54,
                                            v21,
                                            v30,
                                            a3,
                                            (enum CPointerCoalesce *)&v53);
            v20 = CanCoalesceNodeWithPrevious;
            if ( !CanCoalesceNodeWithPrevious )
            {
              v34 = v53;
              goto LABEL_69;
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
        goto LABEL_69;
      }
      if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v54, v21, (enum CPointerCoalesce *)&v53) )
        break;
    }
LABEL_35:
    v19 = *((unsigned int *)a2 + 12);
    ++v23;
    v21 = (const struct CPointerInfoNode *)((char *)v21 + 576);
    if ( v23 >= (unsigned int)v19 )
    {
      v34 = v53;
      v50 = v53;
      goto LABEL_37;
    }
  }
  v34 = v53;
  v50 = v53;
  if ( v53 != 3 && v53 != 20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v16, v17);
  v20 = 0;
  CanCoalesceNodeWithPrevious = 0;
LABEL_37:
  if ( !v20 )
    goto LABEL_69;
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
    v35 = *((unsigned int *)a3 + 50);
    if ( (_DWORD)v35 != *(_DWORD *)(*((_QWORD *)a3 + 27) + 200LL) )
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
      v36 = 0LL;
      v37 = *((unsigned int *)a2 + 12);
      v38 = *((_QWORD *)a2 + 13);
      v53 = 0;
      if ( (_DWORD)v37 )
      {
        v39 = 0;
        do
        {
          v40 = *((_QWORD *)a2 + 13) + 576LL * (unsigned int)v37;
          if ( v38 >= v40 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v37, v36);
            LODWORD(v36) = v53;
          }
          if ( *(_DWORD *)(v38 + 8) == *(_DWORD *)a3
            && (*(_DWORD *)v38 & 0x2000) == 0
            && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v38) )
          {
            if ( v39 > (unsigned int)v36 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v36);
            if ( v39 >= *(_DWORD *)(v18 + 4) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v36);
            v43 = *(struct tagQ **)(*(_QWORD *)(v18 + 8) + 16LL * v39);
            v51 = v43;
            v44 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * v39 + 8);
            if ( *(_QWORD *)(v38 + 16) != *(_QWORD *)(v44 + 40) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, 2LL * v39, v36);
            CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v54, (struct CPointerInfoNode *)v38, v53, 1);
            if ( *(_QWORD *)(v38 + 16) == *(_QWORD *)(v44 + 40) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47);
            InputTraceLogging::Delivery::CoalesceMessage((const struct tagQMSG *)v44);
            v48 = v51;
            if ( *((_QWORD *)v51 + 10) == v44 )
            {
              *((_QWORD *)v51 + 10) = 0LL;
              v48 = v51;
            }
            ApiSetEditionDelQEntry((char *)v48 + 24, v44);
            LODWORD(v36) = v53;
            ++v39;
          }
          v37 = *((unsigned int *)a2 + 12);
          v36 = (unsigned int)(v36 + 1);
          v38 += 576LL;
          v53 = v36;
        }
        while ( (unsigned int)v36 < (unsigned int)v37 );
        v34 = v50;
        v20 = CanCoalesceNodeWithPrevious;
      }
      EtwTraceEndPointerFrameCoalesce((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), v37, (const GUID *)1);
    }
  }
LABEL_69:
  *((_DWORD *)a3 + 51) = *((_DWORD *)a3 + 51) & 0xFFFFFFF9 | (2 * ((2 * (v20 & 1)) | v20 & 1));
  CTouchProcessor::TrackCoalesceOnReassign(this, a3, v34);
  return (struct tagCPointerCoalesceInfo *)v20;
}
