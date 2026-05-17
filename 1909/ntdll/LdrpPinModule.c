/*
 * XREFs of LdrpPinModule @ 0x18002EB1C
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0D30 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x18007A42C (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v3 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v3 + 24) )
      LdrpPinNodeRecurse();
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
