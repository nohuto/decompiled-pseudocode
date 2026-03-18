/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0172EF8
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01643BC (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016D0FC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C010AB90 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C010B280 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x1C010B960 (EtwTracePointerNoCoalesce.c)
 *     ?CoalesceFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01603E4 (-CoalesceFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0160660 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01625DC (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01652CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0172E08 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::TryCoalesceQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerQFrame *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v7; // rdx
  int v8; // eax
  char v10; // di
  char v11; // r12
  unsigned int i; // ebp
  unsigned int v13; // eax
  __int64 v14; // rdx
  _DWORD *v15; // rbx
  int v16; // r15d
  unsigned int j; // r14d
  unsigned __int64 v18; // rcx
  __int64 v19; // rbp
  _QWORD *v20; // rax
  __int16 v21; // dx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  CTouchProcessor *v25; // [rsp+80h] [rbp+8h]
  int v26; // [rsp+88h] [rbp+10h]
  char v28; // [rsp+98h] [rbp+20h]

  v25 = this;
  v4 = *((_QWORD *)a2 + 17);
  v5 = 0LL;
  v28 = 0;
  v7 = *((unsigned int *)a2 + 12);
  v8 = 0;
  v26 = 0;
  v10 = 0;
  v11 = 1;
  for ( i = 0; i < (unsigned int)v7; v4 += 168LL )
  {
    if ( *(_DWORD *)v4 == -1 )
      break;
    if ( !a4 || a4 == (const struct CPointerQFrame *)v4 )
    {
      v13 = *(_DWORD *)(v4 + 148);
      if ( (v13 & 1) == 0 || (v13 & 8) != 0 || (v14 = v13, *(_QWORD *)(v4 + 8) == -1LL) )
      {
        v14 = v13;
        if ( (v13 & 2) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v13, 0LL);
          v14 = *(unsigned int *)(v4 + 148);
        }
      }
      if ( (v14 & 2) == 0 )
        goto LABEL_17;
      this = (CTouchProcessor *)*(unsigned int *)(*(_QWORD *)(v4 + 160) + 144LL);
      if ( *(_DWORD *)(v4 + 144) != (_DWORD)this )
      {
        CTouchProcessor::TrackCoalesceOnArrival((int)this, (int *)v4, 17);
        *(_DWORD *)(v4 + 148) &= ~2u;
        v14 = *(unsigned int *)(v4 + 148);
      }
      if ( (v14 & 2) != 0 )
      {
        if ( *(_DWORD *)(v4 + 152) != 1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v14, v5);
          LODWORD(v14) = *(_DWORD *)(v4 + 148);
        }
        v8 = 1;
        *(_DWORD *)(v4 + 148) = v14 | 4;
        v26 = 1;
      }
      else
      {
LABEL_17:
        v8 = v26;
      }
      v5 = 0LL;
      *(_QWORD *)(v4 + 160) = 0LL;
    }
    v7 = *((unsigned int *)a2 + 12);
    ++i;
  }
  if ( v8 )
  {
    EtwTraceBeginPointerFrameCoalesce((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), v7, 0LL);
    v7 = *((unsigned int *)a2 + 12);
    v5 = 0LL;
  }
  v15 = (_DWORD *)*((_QWORD *)a2 + 16);
  v16 = 1;
  for ( j = 0; j < (unsigned int)v7; v15 += 124 )
  {
    v18 = *((_QWORD *)a2 + 16) + 496LL * (unsigned int)v7;
    if ( (unsigned __int64)v15 >= v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v7, v5);
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
    {
      v19 = *((_QWORD *)a2 + 17) + 168LL * (unsigned int)v15[2];
      if ( (a4 || *(_QWORD *)(v19 + 8) == -1LL) && a4 != (const struct CPointerQFrame *)v19 )
      {
        v16 = (*(_BYTE *)(v19 + 148) & 4) != 0 ? v16 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 148) & 2) != 0 )
        {
          *((_QWORD *)v15 + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                   (struct _KTHREAD **)v25,
                                   a2,
                                   a3,
                                   (struct CPointerInfoNode *)v15,
                                   j,
                                   v5);
        }
        else
        {
          v16 = v5;
          v20 = CTouchProcessor::CreateAndReferenceMsgData(
                  (struct _KTHREAD **)v25,
                  *((unsigned __int16 *)v15 + 90),
                  *((unsigned int *)a2 + 10),
                  j,
                  v15[47],
                  -__CFSHR__(*v15, 7));
          v21 = *((_WORD *)v15 + 90);
          v22 = *((unsigned __int16 *)v15 + 84);
          *((_QWORD *)v15 + 2) = v20;
          EtwTracePointerNoCoalesce(v22, v21, *(_DWORD *)(v19 + 152), 0);
        }
        v5 = 0LL;
        if ( !*((_QWORD *)v15 + 2) )
        {
          CTouchProcessor::FreePointerInfoNodeInt((struct _KTHREAD **)v25, a2, j);
          v5 = 0LL;
        }
      }
      if ( *(_QWORD *)(v19 + 8) != -1LL )
        v11 = v5;
    }
    if ( !a4 )
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
      {
        v23 = v15[47];
        if ( (v23 & 0x2000) != 0 )
        {
          v28 = 1;
          if ( (v23 & 0x10000) != 0 )
            v10 = 1;
        }
      }
    }
    v7 = *((unsigned int *)a2 + 12);
    ++j;
  }
  if ( v26 != (_DWORD)v5 )
    EtwTraceEndPointerFrameCoalesce((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), v7, 0LL);
  if ( v16 )
    InputTraceLogging::Pointer::CoalesceFrame(a2);
  v24 = *((_DWORD *)a2 + 28) ^ (*((_DWORD *)a2 + 28) ^ (2 * v16)) & 2;
  *((_DWORD *)a2 + 28) = v24;
  if ( !a4 )
    *((_DWORD *)a2 + 28) = v24 & 0xFFFFFFE3 | (4 * (v11 & 1 | (2 * (v28 & 1 | (2 * (v10 & 1))))));
}
