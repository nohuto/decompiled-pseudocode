/*
 * XREFs of KeSetDisableBoostProcess @ 0x1406F9ED4
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetDisableBoostProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 1u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 1u);
}
