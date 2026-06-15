/*
 * XREFs of HHOSTEDAPPMANAGERCONTEXT_rundown @ 0x180048750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HHOSTEDAPPMANAGERCONTEXT_rundown(void *a1)
{
  if ( (unsigned int)IsHHostEdappManagerContextRundownSupported() )
    HHOSTEDAPPMANAGERCONTEXTRundown(a1);
}
