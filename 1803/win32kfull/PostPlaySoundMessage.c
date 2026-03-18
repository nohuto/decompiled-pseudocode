/*
 * XREFs of PostPlaySoundMessage @ 0x1C0106760
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E4AF4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage()
{
  return CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
}
