/*
 * XREFs of _RmpClientApplyResourceSet@12 @ 0x100116B1
 * Callers:
 *     _RmApplyResourceSet@12 @ 0x100112D0 (_RmApplyResourceSet@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __thiscall RmpClientApplyResourceSet(_DWORD *this, int a2, int a3)
{
  return _NdrClientCall4(&stru_10001928, &byte_10003F98, this[2], a2, a3);
}
