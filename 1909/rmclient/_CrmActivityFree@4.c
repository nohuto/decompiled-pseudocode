/*
 * XREFs of _CrmActivityFree@4 @ 0x1000A390
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpActivityContextCleanup@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A3C0 (-CrmpActivityContextCleanup@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

BOOLEAN __stdcall CrmActivityFree(PVOID P)
{
  struct _CRMP_ACTIVITY_CONTEXT *v2; // [esp+0h] [ebp-4h]

  CrmpActivityContextCleanup(v2);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
