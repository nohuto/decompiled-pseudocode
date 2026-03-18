/*
 * XREFs of PostPlaySoundMessage @ 0x1C0126670
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FF074 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage()
{
  return CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
}
