/*
 * XREFs of ?CrmpActivityContextCleanup@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A3C0
 * Callers:
 *     _CrmActivityFree@4 @ 0x1000A390 (_CrmActivityFree@4.c)
 *     _CrmActivityAllocate@28 @ 0x1000A470 (_CrmActivityAllocate@28.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A750 (-CrmpActivityWindowClosedReasonUnsubscribe@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

void __thiscall CrmpActivityContextCleanup(int this)
{
  int v2; // ecx
  struct _CRMP_ACTIVITY_CONTEXT *v3; // [esp+0h] [ebp-2Ch]

  CrmpActivityWindowClosedReasonUnsubscribe(v3);
  if ( *(_DWORD *)(this + 36) )
    RtlUnsubscribeWnfNotificationWaitForCompletion(*(_DWORD *)(this + 36));
  if ( *(_DWORD *)(this + 44) )
    CloseHandle(*(HANDLE *)(this + 44));
  v2 = *(_DWORD *)(this + 12);
  if ( (v2 & *(_DWORD *)(this + 8)) != 0xFFFFFFFF )
    _NdrClientCall4(&stru_10001638, &byte_10002F0C, *(_DWORD *)(this + 8), v2, *(_DWORD *)(*(_DWORD *)(this + 16) + 4));
}
