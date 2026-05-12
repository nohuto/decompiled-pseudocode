/*
 * XREFs of RaidAdapterInitializeWmi @ 0x1C0019CA4
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidInitializeDeferredQueue @ 0x1C001D5A8 (RaidInitializeDeferredQueue.c)
 *     RaidDeleteDeferredQueue @ 0x1C0038084 (RaidDeleteDeferredQueue.c)
 */

__int64 __fastcall RaidAdapterInitializeWmi(__int64 a1)
{
  char v1; // al
  NTSTATUS v2; // esi
  __int64 v4; // r8

  v1 = *(_BYTE *)(a1 + 104);
  v2 = 0;
  if ( (v1 & 2) == 0 )
  {
    if ( *(_BYTE *)(a1 + 451) )
    {
      v2 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), (v1 & 4 | 2u) >> 1);
      if ( v2 < 0
        || (*(_BYTE *)(a1 + 104) |= 4u,
            v2 = RaidInitializeDeferredQueue(a1 + 1472, *(_QWORD *)(a1 + 8), v4, 176LL, RaidAdapterWmiDeferredRoutine),
            v2 < 0) )
      {
        if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
        {
          IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
          *(_BYTE *)(a1 + 104) &= ~4u;
        }
        RaidDeleteDeferredQueue(a1 + 1472);
      }
    }
  }
  *(_BYTE *)(a1 + 104) |= 2u;
  return (unsigned int)v2;
}
