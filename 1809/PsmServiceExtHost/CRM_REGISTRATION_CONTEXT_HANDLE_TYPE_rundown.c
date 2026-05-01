/*
 * XREFs of CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown @ 0x180074570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
TLG_STATUS __fastcall CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown(char *P)
{
  return CrmSrvUnregister(P);
}
