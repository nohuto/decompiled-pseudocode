/*
 * XREFs of NtUserDoSoundDisconnect @ 0x1C011C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C01133F4 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 */

__int64 __fastcall NtUserDoSoundDisconnect(CUserPlaySound *a1)
{
  return CUserPlaySound::Disconnect(a1);
}
