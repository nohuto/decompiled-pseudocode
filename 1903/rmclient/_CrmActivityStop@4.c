/*
 * XREFs of _CrmActivityStop@4 @ 0x1000A640
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpActivityStop@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A651 (-CrmpActivityStop@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

void __stdcall CrmActivityStop(int a1)
{
  struct _CRMP_ACTIVITY_CONTEXT *savedregs; // [esp+0h] [ebp+0h]

  CrmpActivityStop(savedregs);
}
