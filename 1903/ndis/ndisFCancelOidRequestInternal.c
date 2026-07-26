/*
 * XREFs of ndisFCancelOidRequestInternal @ 0x1C008E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelOidRequestInternal @ 0x1C0069DF4 (ndisCancelOidRequestInternal.c)
 */

void __fastcall ndisFCancelOidRequestInternal(_QWORD *Parameter)
{
  ndisCancelOidRequestInternal(*(_QWORD *)(Parameter[1] + 32LL), Parameter[1], Parameter[3], 0);
}
