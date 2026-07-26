/*
 * XREFs of ndisReferenceDriver @ 0x1C003F5F4
 * Callers:
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

bool __fastcall ndisReferenceDriver(__int64 a1, unsigned __int8 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  return ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 392), a2, &v3);
}
