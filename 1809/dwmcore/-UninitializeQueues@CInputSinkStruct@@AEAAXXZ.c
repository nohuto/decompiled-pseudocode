/*
 * XREFs of ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x18009EC44
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x18009F0D8 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x18009F32C (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
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
