/*
 * XREFs of ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00347EC
 * Callers:
 *     NtQueryCompositionInputSink @ 0x1C0036E70 (NtQueryCompositionInputSink.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C003767C (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0034260 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C003484C (-QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueTypes(
        CompositionInputObject *this,
        struct COMPOSITION_INPUT_SINK_QUERY_V2 *a2)
{
  int InputQueueTypes; // ebx

  InputQueueTypes = CPushLock::AcquireLockShared((CompositionInputObject *)((char *)this + 32));
  if ( InputQueueTypes >= 0 )
  {
    InputQueueTypes = CInputSink::QueryInputQueueTypes((CompositionInputObject *)((char *)this + 24), a2);
    CPushLock::ReleaseLock((CompositionInputObject *)((char *)this + 32));
  }
  return (unsigned int)InputQueueTypes;
}
