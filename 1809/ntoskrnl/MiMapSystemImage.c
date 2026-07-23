/*
 * XREFs of MiMapSystemImage @ 0x1406832A4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiAddMappedPtes @ 0x1405E0500 (MiAddMappedPtes.c)
 *     MiBytesToMapSystemImage @ 0x14065339C (MiBytesToMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x1406843BC (MiChargeSystemImageCommitment.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x1406E2CF8 (MiDeleteSessionDriverProtos.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  __int64 v6; // rsi
  char v7; // r8
  int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 *PteAddress; // rax
  int v12; // r12d
  unsigned __int64 v13; // r12
  unsigned int SessionId; // eax
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v5 = (_DWORD *)MiSectionControlArea(a1);
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
  if ( (v5[14] & 0x4000000) == 0 || (result = MiCreatePerSessionProtos(v5, SessionId), (int)result >= 0) )
  {
    MiGetPteAddress(v13 + a2 - 1);
    MiGetPteAddress(a2);
    if ( (unsigned int)MiMakeZeroedPageTables() )
    {
LABEL_3:
      PteAddress = (__int64 *)MiGetPteAddress(a2);
      v12 = MiAddMappedPtes(PteAddress, v6, (__int64)v5, &v15, v9);
      if ( v12 < 0 )
      {
        if ( v8 == 1 )
        {
          MiChargeSystemImageCommitment(a1, 0LL);
        }
        else if ( (v5[14] & 0x4000000) != 0 )
        {
          MiDereferencePerSessionProtos(v5);
        }
        if ( (unsigned int)MiGetSystemRegionType(a2) == 1 && a2 != *(_QWORD *)(*(_QWORD *)v5 + 32LL) )
          MiDeleteSessionDriverProtos(v5);
        return (unsigned int)v12;
      }
      else
      {
        if ( v8 == 1 )
          _InterlockedExchangeAdd((_DWORD *)&xmmword_140439FE0 + 3, v6);
        return 0LL;
      }
    }
    if ( (v5[14] & 0x4000000) != 0 )
      MiDereferencePerSessionProtos(v5);
    return 3221225495LL;
  }
  return result;
}
