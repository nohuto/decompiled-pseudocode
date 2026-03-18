/*
 * XREFs of MiIsStoreProcess @ 0x140120098
 * Callers:
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 *     MiCheckFatalAccessViolation @ 0x140120040 (MiCheckFatalAccessViolation.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiStoreCheckCandidatePage @ 0x14014AE2C (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiOrderTrimList @ 0x1402C8510 (MiOrderTrimList.c)
 *     MiCombinePte @ 0x1402E5C70 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x1402E5F90 (MiCombineWorkingSet.c)
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1144) )
  {
    if ( *(_QWORD *)(v1 + 1264) == a1 )
      return 1LL;
  }
  return result;
}
