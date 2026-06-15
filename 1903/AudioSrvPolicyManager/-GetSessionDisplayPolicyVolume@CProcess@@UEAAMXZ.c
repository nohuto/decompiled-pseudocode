/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180013FF0
 * Callers:
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x18000FAC0 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x18002624C (-TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  float v2; // xmm6_4

  v2 = FLOAT_1_0;
  if ( !(unsigned int)TsSessionIdIsAudioInStandbyAllowed(*((_DWORD *)this + 45))
    && (!g_bIsAoAcSystem || !*((_DWORD *)this + 110)) )
  {
    return 0.0;
  }
  return v2;
}
