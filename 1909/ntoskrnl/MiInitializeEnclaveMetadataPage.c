/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140A3C84C
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140A19A58 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeCreateEnclaveMetadataPage @ 0x1402A62AC (KeCreateEnclaveMetadataPage.c)
 *     MiGetEnclavePage @ 0x1402D443C (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402D5040 (MiReturnEnclavePage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeEnclaveMetadataPage()
{
  ULONG_PTR v0; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v2; // rsi
  __int64 EnclavePage; // rax
  ULONG_PTR v4; // rbp
  __int64 v5; // rdx
  int v6; // r8d
  bool v7; // zf
  __int64 result; // rax

  v0 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
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
    EnclavePage = MiGetEnclavePage(&MiSystemPartition, 0);
    v4 = EnclavePage;
    if ( EnclavePage == -1 )
    {
LABEL_16:
      ExFreePoolWithTag(v2, 0);
      if ( v4 != -1LL )
        MiReturnEnclavePage(v4);
      goto LABEL_18;
    }
    MiMakeValidPte(v0, EnclavePage, -1073741820);
    if ( MiPteInShadowRange(v0) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v6 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_12;
        v7 = (v5 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_12;
        v7 = (v5 & 1) == 0;
      }
      if ( !v7 )
        v5 |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v0 = v5;
    if ( v6 )
      MiWritePteShadow(v0);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_1404658E0 = 0LL;
      result = 1LL;
      qword_1404658D0 = (__int64)(v0 << 25) >> 16;
      qword_1404658D8 = (__int64)v2;
      dword_1404658E8 = 0;
      return result;
    }
    goto LABEL_16;
  }
LABEL_18:
  MiReleasePtes((__int64)&qword_1404666C0, v0, 1u);
  return 0LL;
}
