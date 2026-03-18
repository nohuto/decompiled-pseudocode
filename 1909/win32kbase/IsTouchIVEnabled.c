/*
 * XREFs of IsTouchIVEnabled @ 0x1C018C03C
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0058A58 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C015FF5C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0031BD8 (UseVelocityToEnableIV.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

char IsTouchIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_TouchInputVirtualization__private_propertyCache,
      0x11EB519u,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01ECCC4,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C021692A )
  {
    return 0;
  }
  return v0;
}
