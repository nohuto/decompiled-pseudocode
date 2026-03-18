/*
 * XREFs of ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800AD610
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800AC920 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800ACB20 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputSinkStruct::UninitializeQueues(CInputSinkStruct *this)
{
  CInputSinkStruct *v1; // rax

  v1 = (CInputSinkStruct *)((char *)this + 64);
  while ( this != v1 )
  {
    *((_QWORD *)this + 1) = 0LL;
    this = (CInputSinkStruct *)((char *)this + 16);
  }
}
