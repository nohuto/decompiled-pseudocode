/*
 * XREFs of InitiateWaitForInjectionCompletion @ 0x1C00950D0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C009510C (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 */

bool __fastcall InitiateWaitForInjectionCompletion(void (*a1)(void))
{
  char v2; // bl
  CMouseProcessor *MouseProcessor; // rax

  v2 = 0;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    return CMouseProcessor::InitiateWaitForInjectionCompletion(MouseProcessor, a1);
  return v2;
}
