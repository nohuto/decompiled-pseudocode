/*
 * XREFs of MiIsStoreProcess @ 0x1400837EC
 * Callers:
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MiCapturePfnVm @ 0x140083648 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiCheckFatalAccessViolation @ 0x1400963AC (MiCheckFatalAccessViolation.c)
 *     MiCombineWorkingSet @ 0x14013DB60 (MiCombineWorkingSet.c)
 *     MiStoreCheckCandidatePage @ 0x14014D374 (MiStoreCheckCandidatePage.c)
 *     MiResolvePageFileFault @ 0x140154B24 (MiResolvePageFileFault.c)
 *     MiOrderTrimList @ 0x1402B3250 (MiOrderTrimList.c)
 *     MiCloneProcessAddressSpace @ 0x14085E044 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsStoreProcess(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  result = 0LL;
  if ( *(_DWORD *)(v1 + 1144) )
  {
    if ( *(_QWORD *)(v1 + 1264) == a1 )
      return 1LL;
  }
  return result;
}
