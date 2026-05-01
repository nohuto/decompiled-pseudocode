/*
 * XREFs of ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x18001001C
 * Callers:
 *     CrmRegister @ 0x1800082B0 (CrmRegister.c)
 *     CrmUnregister @ 0x1800100D0 (CrmUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpRegistrationContextCleanup(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  if ( *((_QWORD *)a1 + 1) )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013BA0, 1u, 0LL);
}
