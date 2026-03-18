/*
 * XREFs of MiIsStoreProcess @ 0x14011F348
 * Callers:
 *     MiAgeWorkingSet @ 0x1400489B0 (MiAgeWorkingSet.c)
 *     MiCheckFatalAccessViolation @ 0x14011F2F0 (MiCheckFatalAccessViolation.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiStoreCheckCandidatePage @ 0x14014A78C (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiOrderTrimList @ 0x1402C87B0 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x1402E5F10 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x1402E6230 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1144) )
  {
    if ( *(_QWORD *)(v1 + 1264) == a1 )
      return 1LL;
  }
  return result;
}
