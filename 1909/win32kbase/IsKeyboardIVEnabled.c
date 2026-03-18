/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C018BF6C
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0058A58 (RIMChildInputTypeIsVirtualized.c)
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017EBD4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 * Callees:
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0031BD8 (UseVelocityToEnableIV.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
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
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01EC7B8,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C021692B )
  {
    return 0;
  }
  return v0;
}
