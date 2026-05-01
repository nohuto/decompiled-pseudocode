/*
 * XREFs of ?CrmpActivityStop@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A651
 * Callers:
 *     _CrmActivityStop@4 @ 0x1000A640 (_CrmActivityStop@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

void __thiscall CrmpActivityStop(_DWORD *this)
{
  _NdrClientCall4(&stru_10001638, &byte_10002FBA, this[2], this[3], *(_DWORD *)(this[4] + 4));
}
