/*
 * XREFs of sub_18002E1A4 @ 0x18002E1A4
 * Callers:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E5E8 @ 0x18002E5E8 (sub_18002E5E8.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

void __fastcall sub_18002E1A4(__int64 a1)
{
  _OBJECT_BOUNDARY_DESCRIPTOR *v2; // rcx

  v2 = *(_OBJECT_BOUNDARY_DESCRIPTOR **)(a1 + 8);
  if ( v2 )
  {
    RtlDeleteBoundaryDescriptor(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
