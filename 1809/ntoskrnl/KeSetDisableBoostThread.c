/*
 * XREFs of KeSetDisableBoostThread @ 0x1406DB990
 * Callers:
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetDisableBoostThread(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 3u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 3u);
}
