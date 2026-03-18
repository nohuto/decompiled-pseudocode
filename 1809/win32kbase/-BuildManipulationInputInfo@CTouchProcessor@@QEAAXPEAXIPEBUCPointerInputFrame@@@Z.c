/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C0133FE8
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0138920 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C00AD460 (-GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C0134300 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0136708 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r14d
  __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // rcx
  int v25; // edx

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v10, v7) )
  {
    v13 = 0;
    v14 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 13) + 232LL));
      v14 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v16, v17);
    }
    a2[2] = CTouchProcessor::GetInputProcessContext(v12, *((_QWORD *)a4 + 8));
    v21 = 0;
    a2[3] = 0;
    if ( *((_DWORD *)a4 + 12) )
    {
      do
      {
        v22 = *((_QWORD *)a4 + 13) + 576LL * v21;
        if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v22) )
        {
          v23 = 56 * v18;
          memmove(&a2[56 * v18 + 4], (const void *)(v22 + 232), v14);
          v24 = 56LL * (unsigned int)a2[3];
          *(_OWORD *)&a2[v24 + 40] = *(_OWORD *)(v22 + 416);
          *(_OWORD *)&a2[v24 + 44] = *(_OWORD *)(v22 + 432);
          *(_OWORD *)&a2[v24 + 48] = *(_OWORD *)(v22 + 448);
          if ( (*(_DWORD *)(v22 + 4) & 0x80u) == 0 )
            v25 = 0;
          else
            v25 = *(_DWORD *)(v22 + 388);
          a2[56 * a2[3] + 52] = v25;
          *(_QWORD *)&a2[56 * a2[3] + 54] = *(_QWORD *)(v22 + 552);
          *(_QWORD *)&a2[56 * a2[3] + 56] = *(_QWORD *)(v22 + 480);
          v19 = 56LL * (unsigned int)a2[3];
          a2[v19 + 58] = *(_DWORD *)(v22 + 560);
          *(_QWORD *)&a2[v23 + 10] = 0LL;
          v18 = (unsigned int)++a2[3];
        }
        ++v21;
      }
      while ( v21 < *((_DWORD *)a4 + 12) );
      v13 = v18;
    }
    if ( v13 != v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19 * 4, v18, v20);
    *(_QWORD *)a2 = *((_QWORD *)a4 + 9);
  }
}
