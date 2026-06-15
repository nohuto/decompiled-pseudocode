/*
 * XREFs of ?AddRef@PhoneCallAudio@@WBA@EAAKXZ @ 0x180068B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::AddRef(__int64 a1)
{
  return CAudioStream::AddRef((CAudioStream *)(a1 - 16));
}
