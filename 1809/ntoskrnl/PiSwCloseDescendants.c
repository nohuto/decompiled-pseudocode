/*
 * XREFs of PiSwCloseDescendants @ 0x1406EE5B8
 * Callers:
 *     PiSwIrpCleanup @ 0x1406D9CE8 (PiSwIrpCleanup.c)
 *     PiSwProcessParentRemoveIrp @ 0x1406EE4D8 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x1406EE5B8 (PiSwCloseDescendants.c)
 * Callees:
 *     PiSwCloseDevice @ 0x1406DA3B0 (PiSwCloseDevice.c)
 *     PiSwFindBusRelations @ 0x1406E93E0 (PiSwFindBusRelations.c)
 *     PiSwCloseDescendants @ 0x1406EE5B8 (PiSwCloseDescendants.c)
 */

void __fastcall PiSwCloseDescendants(__int128 *a1)
{
  _QWORD *BusRelations; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rsi

  BusRelations = PiSwFindBusRelations(a1);
  if ( BusRelations )
  {
    v2 = BusRelations + 2;
    v3 = (_QWORD *)BusRelations[2];
    while ( v3 != v2 )
    {
      v4 = v3 - 12;
      v3 = (_QWORD *)*v3;
      if ( (v4[1] & 1) == 0 )
      {
        PiSwCloseDescendants(v4 + 18);
        PiSwCloseDevice(v4);
      }
    }
  }
}
