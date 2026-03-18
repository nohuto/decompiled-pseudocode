/*
 * XREFs of ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C0164794
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C01612E8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0166C90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016DA3C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::CountMTNodesReadyForRouting(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  unsigned int v2; // r8d
  CPointerInfoNode *v3; // r9
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // ecx

  v2 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v3 = (CPointerInfoNode *)*((_QWORD *)a2 + 16);
    do
    {
      v4 = CPointerInfoNode::IsForManipulationThread(v3);
      v8 = v6 + 1;
      if ( !v4 )
        v8 = v6;
      v3 = (CPointerInfoNode *)(v7 + 496);
      v2 = v8;
    }
    while ( v5 != 1 );
  }
  return v2;
}
