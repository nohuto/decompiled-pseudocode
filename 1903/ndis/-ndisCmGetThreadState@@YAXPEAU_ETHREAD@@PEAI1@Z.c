/*
 * XREFs of ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C0021328
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000A6E4 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0062F30 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C00120E0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003686C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

void __fastcall ndisCmGetThreadState(struct _ETHREAD *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *ThreadProperty; // rax
  unsigned int ThreadSessionId; // eax

  ThreadProperty = (unsigned int *)PsGetThreadProperty(a1, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    *a2 = *ThreadProperty;
    *a3 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  if ( !*a2 )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(a1);
    *a2 = NdisGetSessionCompartmentId(ThreadSessionId);
  }
}
