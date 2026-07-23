/*
 * XREFs of MiCauseOverCommitPopup @ 0x1402C03D0
 * Callers:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x1402B8800 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 7784) != *(_QWORD *)(a1 + 6408) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 6420));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 6420));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 6416));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 6416));
  return v1;
}
