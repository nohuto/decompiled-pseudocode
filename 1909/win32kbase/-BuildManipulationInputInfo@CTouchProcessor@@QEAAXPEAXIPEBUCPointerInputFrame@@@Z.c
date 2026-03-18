/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C015F0E8
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0164A90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     GetPointerInfoSize @ 0x1C0110C7C (GetPointerInfoSize.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C015F3EC (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0162594 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C0167480 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016B83C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  CTouchProcessor *v12; // rcx
  int v13; // ebx
  size_t v14; // r12
  unsigned int PointerInfoSize; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct tagPROCESSINFO *InputProcessContext; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // r14d
  __int64 v23; // rbp
  __int64 v24; // r13
  __int64 v25; // rcx
  int v26; // edx

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v10, v7) )
  {
    v13 = 0;
    v14 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 16) + 176LL));
      v14 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v16, v17);
    }
    InputProcessContext = CTouchProcessor::GetInputProcessContext(v12, *((void **)a4 + 8));
    if ( InputProcessContext )
      v21 = *((unsigned int *)InputProcessContext + 14);
    else
      v21 = 0LL;
    a2[8] = v21;
    v22 = 0;
    a2[9] = 0;
    if ( *((_DWORD *)a4 + 12) )
    {
      do
      {
        v23 = *((_QWORD *)a4 + 16) + 496LL * v22;
        if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v23) )
        {
          v24 = 60 * v19;
          memmove(&a2[60 * v19 + 10], (const void *)(v23 + 176), v14);
          v25 = 60LL * (unsigned int)a2[9];
          *(_OWORD *)&a2[v25 + 46] = *(_OWORD *)(v23 + 392);
          *(_OWORD *)&a2[v25 + 50] = *(_OWORD *)(v23 + 408);
          *(_OWORD *)&a2[v25 + 54] = *(_OWORD *)(v23 + 424);
          if ( (*(_DWORD *)(v23 + 4) & 0x80u) == 0 )
            v26 = 0;
          else
            v26 = *(_DWORD *)(v23 + 356);
          a2[60 * a2[9] + 58] = v26;
          *(_QWORD *)&a2[60 * a2[9] + 60] = *(_QWORD *)(v23 + 464);
          *(_QWORD *)&a2[60 * a2[9] + 62] = *(_QWORD *)(v23 + 456);
          v21 = 240LL * (unsigned int)a2[9];
          *(_DWORD *)((char *)a2 + v21 + 256) = *(_DWORD *)(v23 + 472);
          *(_QWORD *)&a2[v24 + 16] = 0LL;
          v19 = (unsigned int)++a2[9];
        }
        ++v22;
      }
      while ( v22 < *((_DWORD *)a4 + 12) );
      v13 = v19;
    }
    if ( v13 != v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v19, v20);
    *(_OWORD *)a2 = *(_OWORD *)((char *)a4 + 72);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a4 + 88);
  }
}
