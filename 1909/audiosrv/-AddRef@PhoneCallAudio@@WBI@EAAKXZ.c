/*
 * XREFs of ?AddRef@PhoneCallAudio@@WBI@EAAKXZ @ 0x18006CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::AddRef(__int64 a1)
{
  return CAudioStream::AddRef((CAudioStream *)(a1 - 24));
}
