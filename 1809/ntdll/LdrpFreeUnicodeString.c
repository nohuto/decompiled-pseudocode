/*
 * XREFs of LdrpFreeUnicodeString @ 0x1800713F4
 * Callers:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x180026158 (LdrpApplyFileNameRedirection.c)
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x180071068 (LdrpAppCompatRedirect.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
