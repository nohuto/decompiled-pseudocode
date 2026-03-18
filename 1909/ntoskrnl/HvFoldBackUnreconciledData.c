/*
 * XREFs of HvFoldBackUnreconciledData @ 0x14083373C
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140083DF0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x14011A1E4 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x1406E4D50 (HvFreeUnreconciledData.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1728));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1724) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 191) = 1;
  HvFreeUnreconciledData(a1);
}
