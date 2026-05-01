/*
 * XREFs of ?CrmpRegistrationContextCleanup@@YGXPAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x10008135
 * Callers:
 *     _CrmUnregister@4 @ 0x10008110 (_CrmUnregister@4.c)
 *     _CrmRegister@12 @ 0x1000A260 (_CrmRegister@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

void __thiscall CrmpRegistrationContextCleanup(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = this + 1;
  if ( *v1 )
    _NdrClientCall4(&stru_10001638, &byte_10002E5E, v1);
}
