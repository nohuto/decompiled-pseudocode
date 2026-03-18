/*
 * XREFs of MiCauseOverCommitPopup @ 0x1402D9B0C
 * Callers:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x1402CE9A4 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x140298920 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 8552) != *(_QWORD *)(a1 + 7176) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 7188));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 7188));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 7184));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 7184));
  return v1;
}
