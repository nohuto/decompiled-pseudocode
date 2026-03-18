/*
 * XREFs of PostPlaySoundMessage @ 0x1C010D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E31E0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage()
{
  return CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
}
