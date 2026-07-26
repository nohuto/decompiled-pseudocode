/*
 * XREFs of ndisFCancelOidRequestInternal @ 0x1C005B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelOidRequestInternal @ 0x1C0044178 (ndisCancelOidRequestInternal.c)
 */

void __fastcall ndisFCancelOidRequestInternal(_QWORD *Parameter)
{
  ndisCancelOidRequestInternal(*(_QWORD *)(Parameter[1] + 32LL), Parameter[1], Parameter[3], 0);
}
