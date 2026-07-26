/*
 * XREFs of ndisFIndicateStatusWrapper @ 0x1C0018160
 * Callers:
 *     <none>
 * Callees:
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 */

void __fastcall ndisFIndicateStatusWrapper(_QWORD *Parameter)
{
  ndisFIndicateStatusInternal(Parameter[1], Parameter[3]);
}
