/*
 * XREFs of ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34
 * Callers:
 *     _lambda_ba94582f5a49cd463f39dfc8045b2062_::operator() @ 0x1800418D0 (_lambda_ba94582f5a49cd463f39dfc8045b2062_--operator().c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180056CDC (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180056DC8 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUILegacyPrivHandEventArgs@34567@@Z @ 0x180058DA0 (-OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PE.c)
 *     ?OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArgs@Internal@Mirage@Windows@@@Z @ 0x180059000 (-OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArg.c)
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x180059120 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x180059270 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800599D8 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@@Z @ 0x180062CC0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 *     ?PopulateDetectedOrLostReport@MPCSixDofProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800F10E0 (-PopulateDetectedOrLostReport@MPCSixDofProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 *     ?PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800F6500 (-PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 *     ?PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800FFBB0 (-PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputInfoHelper::PopulateGenericMPCInputInfo(int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  LARGE_INTEGER v10[3]; // [rsp+20h] [rbp-18h] BYREF

  QueryPerformanceCounter(v10);
  *(_DWORD *)a5 = a3;
  *(_DWORD *)(a5 + 4) = a4;
  *(_DWORD *)(a5 + 8) = GetTickCount();
  *(LARGE_INTEGER *)(a5 + 16) = v10[0];
  *(_DWORD *)(a5 + 528) = _InterlockedExchangeAdd(&MPCInputInfoHelper::m_curInputId, 1u);
  *(_DWORD *)(a5 + 536) = *(_DWORD *)(a5 + 4);
  result = 0LL;
  *(_DWORD *)(a5 + 520) = a2;
  *(_DWORD *)(a5 + 524) = a1;
  *(_BYTE *)(a5 + 672) = 0;
  *(_BYTE *)(a5 + 600) = 0;
  *(_DWORD *)(a5 + 632) = 0;
  *(_BYTE *)(a5 + 500) = 1;
  return result;
}
