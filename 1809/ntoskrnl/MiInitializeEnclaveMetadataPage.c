/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x1409F82B8
 * Callers:
 *     MiCreateEnclaveRegions @ 0x1409BB34C (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeCreateEnclaveMetadataPage @ 0x14028FD44 (KeCreateEnclaveMetadataPage.c)
 *     MiGetEnclavePage @ 0x1402BDF38 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402BEAD0 (MiReturnEnclavePage.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeEnclaveMetadataPage()
{
  ULONG_PTR v0; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v2; // rsi
  __int64 v3; // r8
  __int64 EnclavePage; // rax
  ULONG_PTR v5; // rbp
  __int64 v6; // rdx
  int v7; // r8d
  bool v8; // zf
  __int64 result; // rax

  v0 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  if ( !v0 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x4D424D45u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    *(_DWORD *)v2 = 512;
    v2[1] = v2 + 2;
    *((_DWORD *)v2 + 4) |= 1u;
    EnclavePage = MiGetEnclavePage((__int64)&MiSystemPartition, 0, v3);
    v5 = EnclavePage;
    if ( EnclavePage == -1 )
    {
LABEL_16:
      ExFreePoolWithTag(v2, 0);
      if ( v5 != -1LL )
        MiReturnEnclavePage(v5);
      goto LABEL_18;
    }
    MiMakeValidPte(v0, EnclavePage, -1073741820);
    if ( MiPteInShadowRange(v0) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v7 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_12;
        v8 = (v6 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_12;
        v8 = (v6 & 1) == 0;
      }
      if ( !v8 )
        v6 |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v0 = v6;
    if ( v7 )
      MiWritePteShadow(v0, v6);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_14043B260 = 0LL;
      result = 1LL;
      qword_14043B250 = (__int64)(v0 << 25) >> 16;
      qword_14043B258 = (__int64)v2;
      dword_14043B268 = 0;
      return result;
    }
    goto LABEL_16;
  }
LABEL_18:
  MiReleasePtes((__int64)&qword_14043C060, v0, 1u);
  return 0LL;
}
