/*
 * XREFs of ndisIovTeardownVf @ 0x1C00B1F3C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIovTeardownVf(__int64 a1)
{
  _IRP *v2; // rcx

  v2 = *(_IRP **)(a1 + 4632);
  if ( v2 )
  {
    *(_BYTE *)(a1 + 4674) = 1;
    IoCancelIrp(v2);
    KeWaitForSingleObject((PVOID)(a1 + 4648), Executive, 0, 0, 0LL);
    IoFreeIrp(*(PIRP *)(a1 + 4632));
    *(_QWORD *)(a1 + 4632) = 0LL;
  }
}
