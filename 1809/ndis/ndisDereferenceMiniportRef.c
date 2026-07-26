/*
 * XREFs of ndisDereferenceMiniportRef @ 0x1C005FA54
 * Callers:
 *     ndisIMDeleteIfStackEntry @ 0x1C0061B70 (ndisIMDeleteIfStackEntry.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C011B880 (NdisCmCloseAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

bool __fastcall ndisDereferenceMiniportRef(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  ULONG_PTR v6; // rcx
  KIRQL v7; // bp
  bool v8; // zf
  bool v9; // si

  v2 = a1 + 4472;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4472));
  v6 = *(_QWORD *)(a1 + 4928);
  v7 = v5;
  if ( v6 )
    NdisDereferenceWithTag(v6, a2);
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  v9 = v8;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(0xEu, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, *(_DWORD *)(a1 + 4480));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
  return v9;
}
