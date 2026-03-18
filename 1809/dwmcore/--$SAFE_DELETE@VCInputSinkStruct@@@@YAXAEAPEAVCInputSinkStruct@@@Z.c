/*
 * XREFs of ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x18009F32C
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18009F04C (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x18009EC44 (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE<CInputSinkStruct>(CInputSinkStruct **a1)
{
  CInputSinkStruct *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *((_QWORD *)v1 + 8) )
    {
      CInputSinkStruct::UninitializeQueues(*a1);
      NtCloseCompositionInputSink(*((_QWORD *)v1 + 8));
    }
    WPF::ProcessHeapImpl::Free(v1);
    *a1 = 0LL;
  }
}
