/*
 * XREFs of InitiateWaitForInjectionCompletion @ 0x1C0068FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C0039700 (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InitiateWaitForInjectionCompletion(void (*a1)(void))
{
  char v2; // bl
  CMouseProcessor *v3; // rax

  v2 = 0;
  v3 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( v3 )
    return CMouseProcessor::InitiateWaitForInjectionCompletion(v3, a1);
  return v2;
}
