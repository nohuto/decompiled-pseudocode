/*
 * XREFs of ?CrmpActivityStart@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAG1W4_CRM_ACTIVITY_START_REASON@@@Z @ 0x1000A6C0
 * Callers:
 *     _CrmActivityStart@16 @ 0x1000A6A0 (_CrmActivityStart@16.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall CrmpActivityStart(_DWORD *a1, int a2, int a3, int a4)
{
  return a4 == 0
       ? (CLIENT_CALL_RETURN)_NdrClientCall4(
                               &stru_10001638,
                               &byte_10002F3C,
                               a1[2],
                               a1[3],
                               *(_DWORD *)(a1[4] + 4),
                               a2,
                               a3,
                               a4).Pointer
       : 0;
}
