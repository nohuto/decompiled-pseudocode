/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x140945540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MmDeterminePoolType @ 0x1402B938C (MmDeterminePoolType.c)
 *     MmAreMdlPagesLocked @ 0x140925CC8 (MmAreMdlPagesLocked.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversGetVerifierData @ 0x1409359E8 (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r9
  __int64 VerifierData; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql
    && (unsigned int)MmDeterminePoolType(*(_QWORD *)(BugCheckParameter3 + 32))
    && (MmVerifierData & 0x800) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, BugCheckParameter3, v3);
  }
  LOBYTE(VerifierData) = ((__int64 (__fastcall *)(ULONG_PTR))pXdvMmBuildMdlForNonPagedPool)(BugCheckParameter3);
  if ( CurrentIrql <= 2u && (MmVerifierData & 0x800) != 0 && !VerifierNewRuleWorkaround )
  {
    LODWORD(VerifierData) = MmAreMdlPagesLocked((_DWORD *)BugCheckParameter3);
    if ( !(_DWORD)VerifierData )
    {
      if ( VerifierTipDisable != 1
        || (VerifierData = VfTargetDriversGetVerifierData(retaddr)) != 0
        && (LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48) - 8, (VerifierData & 0xFB) != 0) )
      {
        LOBYTE(VerifierData) = VerifierBugCheckIfAppropriate(
                                 0xC4u,
                                 0x140uLL,
                                 CurrentIrql,
                                 BugCheckParameter3,
                                 *(_QWORD *)(BugCheckParameter3 + 32));
      }
    }
  }
  return VerifierData;
}
