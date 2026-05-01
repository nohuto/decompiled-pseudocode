/*
 * XREFs of CrmUnregister @ 0x1800100D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x18001001C (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 */

BOOLEAN __fastcall CrmUnregister(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  CrmpRegistrationContextCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
