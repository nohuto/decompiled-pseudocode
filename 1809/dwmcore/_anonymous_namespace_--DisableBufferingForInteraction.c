/*
 * XREFs of _anonymous_namespace_::DisableBufferingForInteraction @ 0x1801F99C8
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801FA0C8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1801F97FC (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 */

char __fastcall anonymous_namespace_::DisableBufferingForInteraction(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // bl

  v6 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1)
    && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2)
     || anonymous_namespace_::AllSupportedWithSingleTarget(a1, a3)) )
  {
    return 1;
  }
  return v6;
}
