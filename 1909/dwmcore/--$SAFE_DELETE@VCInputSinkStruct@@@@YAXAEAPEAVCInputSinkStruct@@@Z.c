/*
 * XREFs of ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800ACB20
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800AC894 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800AD610 (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
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
