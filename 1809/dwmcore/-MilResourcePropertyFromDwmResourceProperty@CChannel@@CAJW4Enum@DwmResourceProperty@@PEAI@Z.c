/*
 * XREFs of ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x18001EE10
 * Callers:
 *     ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x18001ED70 (-BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 *     ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x180145AC0 (-BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::MilResourcePropertyFromDwmResourceProperty(unsigned int a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  if ( a1 >= 7 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0xC5Cu);
  }
  else
  {
    v2 = 0;
    *a2 = dword_1802AF1C0[a1];
  }
  return v2;
}
