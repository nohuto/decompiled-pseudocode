/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C018E15C
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C006C9B8 (RIMChildInputTypeIsVirtualized.c)
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0180DC4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 * Callees:
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0032928 (UseVelocityToEnableIV.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_KeyboardInputVirtualization__private_propertyCache,
      0x11F7129u,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01EE8D8,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C0219933 )
  {
    return 0;
  }
  return v0;
}
