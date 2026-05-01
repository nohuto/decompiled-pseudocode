/*
 * XREFs of _CrmUnregister@4 @ 0x10008110
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YGXPAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x10008135 (-CrmpRegistrationContextCleanup@@YGXPAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 */

BOOLEAN __stdcall CrmUnregister(PVOID P)
{
  struct _CRMP_REGISTRATION_CONTEXT *savedregs; // [esp+0h] [ebp+0h]

  CrmpRegistrationContextCleanup(savedregs);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
