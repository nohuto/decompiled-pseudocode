/*
 * XREFs of MiMapSystemImage @ 0x140711384
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiMakeZeroedPageTables @ 0x1400E8594 (MiMakeZeroedPageTables.c)
 *     MiAddMappedPtes @ 0x140647FA0 (MiAddMappedPtes.c)
 *     MiBytesToMapSystemImage @ 0x1406A6310 (MiBytesToMapSystemImage.c)
 *     MiDereferencePerSessionProtos @ 0x1406E9B08 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E9C20 (MiCreatePerSessionProtos.c)
 *     MiChargeSystemImageCommitment @ 0x140712814 (MiChargeSystemImageCommitment.c)
 *     MiDeleteSessionDriverProtos @ 0x14072A290 (MiDeleteSessionDriverProtos.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  char v7; // r8
  int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  _QWORD *v11; // rax
  int v12; // r12d
  unsigned __int64 v13; // r12
  unsigned int SessionId; // eax
  __int64 PteAddress; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = MiSectionControlArea(a1);
  v6 = *(unsigned int *)(*(_QWORD *)v5 + 8LL);
  if ( (v7 & 1) == 0 )
  {
    v8 = 1;
    v9 = -1;
    result = MiChargeSystemImageCommitment(v4, 1LL);
    if ( (int)result < 0 )
      return result;
    goto LABEL_3;
  }
  v13 = MiBytesToMapSystemImage(v6 << 12);
  if ( !v13 )
    return 3221225503LL;
  v8 = 0;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v9 = SessionId;
  if ( (*(_DWORD *)(v5 + 56) & 0x4000000) == 0
    || (result = MiCreatePerSessionProtos((__int64 *)v5, SessionId), (int)result >= 0) )
  {
    MiGetPteAddress(v13 + a2 - 1);
    PteAddress = MiGetPteAddress(a2);
    if ( (unsigned int)MiMakeZeroedPageTables(PteAddress, v16, 1u, 1) )
    {
LABEL_3:
      v11 = (_QWORD *)MiGetPteAddress(a2);
      v12 = MiAddMappedPtes(v11, v6, v5, &v17);
      if ( v12 < 0 )
      {
        if ( v8 == 1 )
        {
          MiChargeSystemImageCommitment(a1, 0LL);
        }
        else if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
        {
          MiDereferencePerSessionProtos((__int64 *)v5, v9);
        }
        if ( (unsigned int)MiGetSystemRegionType(a2) == 1 && a2 != *(_QWORD *)(*(_QWORD *)v5 + 32LL) )
          MiDeleteSessionDriverProtos(v5);
        return (unsigned int)v12;
      }
      else
      {
        if ( v8 == 1 )
          _InterlockedExchangeAdd((_DWORD *)&xmmword_140464640 + 3, v6);
        return 0LL;
      }
    }
    if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
      MiDereferencePerSessionProtos((__int64 *)v5, v9);
    return 3221225495LL;
  }
  return result;
}
