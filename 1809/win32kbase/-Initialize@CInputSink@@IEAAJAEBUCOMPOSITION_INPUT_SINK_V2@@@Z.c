/*
 * XREFs of ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C0072D40
 * Callers:
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0072C90 (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z @ 0x1C0072E00 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z.c)
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x1C0081CFC (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 */

__int64 __fastcall CInputSink::Initialize(struct IInputQueue **this, const struct COMPOSITION_INPUT_SINK_V2 *a2)
{
  int InputQueue; // ebx
  __int64 v5; // rcx

  InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 8), this + 6);
  if ( InputQueue < 0
    || (InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 64), this + 7),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 120),
                       this + 8),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 176),
                       this + 9),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 232),
                       this + 10),
        InputQueue < 0) )
  {
    CInputSink::InvalidateAndReleaseQueues((CInputSink *)this);
  }
  else
  {
    this[5] = (struct IInputQueue *)PsGetCurrentProcess(v5);
    *((_DWORD *)this + 40) = *((_DWORD *)a2 + 1);
    *((_BYTE *)this + 32) = 1;
  }
  return (unsigned int)InputQueue;
}
