/*
 * XREFs of _CrmActivityStart@16 @ 0x1000A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpActivityStart@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAG1W4_CRM_ACTIVITY_START_REASON@@@Z @ 0x1000A6C0 (-CrmpActivityStart@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAG1W4_CRM_ACTIVITY_START_REASON@@@Z.c)
 */

int __stdcall CrmActivityStart(int a1, int a2, int a3, int a4)
{
  return CrmpActivityStart(a1, a2, a3, a4);
}
