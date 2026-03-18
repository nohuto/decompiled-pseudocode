/*
 * XREFs of HvFoldBackUnreconciledData @ 0x1408340DC
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x14011BD88 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x1406E38A0 (HvFreeUnreconciledData.c)
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
