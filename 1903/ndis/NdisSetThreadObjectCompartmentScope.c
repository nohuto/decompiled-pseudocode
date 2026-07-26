/*
 * XREFs of NdisSetThreadObjectCompartmentScope @ 0x1C00FBC80
 * Callers:
 *     ndisNsiSetThreadInformation @ 0x1C000A680 (ndisNsiSetThreadInformation.c)
 * Callees:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000A6E4 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 */

__int64 __fastcall NdisSetThreadObjectCompartmentScope(struct _KTHREAD *a1, unsigned int a2)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ndisCmSetThreadState(a1, 0LL, &v3);
}
