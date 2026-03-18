/*
 * XREFs of ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x180029740
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800294B4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x18002B8DC (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
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
    operator delete(v1);
    *a1 = 0LL;
  }
}
