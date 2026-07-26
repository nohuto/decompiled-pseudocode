/*
 * XREFs of ndisIovTeardownVf @ 0x1C00F94D0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIovTeardownVf(__int64 a1)
{
  _IRP *v2; // rcx

  v2 = *(_IRP **)(a1 + 4672);
  if ( v2 )
  {
    *(_BYTE *)(a1 + 4714) = 1;
    IoCancelIrp(v2);
    KeWaitForSingleObject((PVOID)(a1 + 4688), Executive, 0, 0, 0LL);
    IoFreeIrp(*(PIRP *)(a1 + 4672));
    *(_QWORD *)(a1 + 4672) = 0LL;
  }
}
