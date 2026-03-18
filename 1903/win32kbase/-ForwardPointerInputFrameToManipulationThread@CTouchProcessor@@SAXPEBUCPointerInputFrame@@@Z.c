/*
 * XREFs of ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0166D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0166C90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::ForwardPointerInputFrameToManipulationThread(CTouchProcessor **a1)
{
  CTouchProcessor::ForwardInputToManipulationThread(*a1, (const struct CPointerInputFrame *)a1);
}
