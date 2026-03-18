/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015E070
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C019CD50 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C019DB5C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C019E318 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall FilterKeys(struct tagKE *a1, unsigned int a2, __int64 a3)
{
  int v3; // r14d
  char v4; // di
  int v5; // esi
  __int64 v8; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx

  v3 = a3;
  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  if ( v4 == -95 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      if ( gtmridFKActivation )
      {
        ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
        gtmridFKActivation = 0LL;
      }
      gFilterKeysState = 0;
    }
    else if ( gPhysModifierState == 2 && (dword_1C021461C & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
    {
      gFilterKeysState = 1;
      gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(0LL, 4000LL, FKActivationTimer);
    }
  }
  else if ( gtmridFKActivation )
  {
    gFilterKeysState = 0;
    ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
    gtmridFKActivation = 0LL;
  }
  if ( (dword_1C021461C & 1) == 0 )
    return 1LL;
  if ( !v5 )
  {
    if ( v4 != gLastVkDown )
    {
      gLastVkDown = v4;
      if ( gBounceVk )
      {
        if ( v4 == gBounceVk )
        {
          gdwPUDFlags |= 0x400u;
          return 0LL;
        }
        if ( gtmridFKResponse )
        {
          ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
          gtmridFKResponse = 0LL;
        }
        gBounceVk = 0;
      }
      gdwPUDFlags &= ~0x400u;
      if ( (dword_1C021461C & 0x40) != 0 )
        ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 4LL, a3, 0LL);
      if ( gtmridFKAcceptanceDelay )
      {
        ApiSetEditionKillAccessibilityTimer(a1, gtmridFKAcceptanceDelay);
        gtmridFKAcceptanceDelay = 0LL;
      }
      if ( gtmridFKResponse )
      {
        ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
        gtmridFKResponse = 0LL;
      }
      v10 = *(_OWORD *)a1;
      gFKExtraInformation = a2;
      gFKNextProcIndex = v3;
      gFKKeyEvent = v10;
      xmmword_1C02192D8 = *((_OWORD *)a1 + 1);
      if ( !Value )
      {
        v12 = dword_1C0214628;
        if ( dword_1C0214628 )
        {
          if ( dword_1C0214624 )
            v12 = dword_1C0214624;
          gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, v12, xxxFKRepeatRateTimer);
        }
        return 1LL;
      }
      v11 = ApiSetEditionSetAccessibilityTimer(0LL, Value, xxxFKAcceptanceDelayTimer);
      gdwPUDFlags &= ~0x800u;
      gtmridFKAcceptanceDelay = v11;
    }
    return 0LL;
  }
  if ( v4 != gLastVkDown )
    return 1LL;
  ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
  gtmridFKResponse = 0LL;
  gLastVkDown = 0;
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer(v8, gtmridFKAcceptanceDelay);
    gtmridFKAcceptanceDelay = 0LL;
    if ( (gdwPUDFlags & 0x800) != 0 )
    {
      gdwPUDFlags &= ~0x800u;
      goto LABEL_19;
    }
    return 0LL;
  }
LABEL_19:
  if ( dword_1C021462C )
  {
    gBounceVk = v4;
    gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C021462C, FKBounceKeyTimer);
    if ( (gdwPUDFlags & 0x400) != 0 )
      return 0LL;
  }
  return 1LL;
}
