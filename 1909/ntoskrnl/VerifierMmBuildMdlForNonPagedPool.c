/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x140983F10
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x14013C9EC (MmDeterminePoolType.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     MmAreMdlPagesLocked @ 0x140963E58 (MmAreMdlPagesLocked.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 */

char __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r8
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
