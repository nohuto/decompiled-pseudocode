/*
 * XREFs of sub_18002EB1C @ 0x18002EB1C
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180079D90 @ 0x180079D90 (sub_180079D90.c)
 */

__int64 __fastcall sub_18002EB1C(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&stru_1801660B0);
  v3 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v3 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v3 + 24) )
      sub_180079D90();
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&stru_1801660B0);
  return v2;
}
