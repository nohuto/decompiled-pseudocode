/*
 * XREFs of IsPenIVEnabled @ 0x1C018E1B8
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C006C9B8 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C016215C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0032928 (UseVelocityToEnableIV.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

char IsPenIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_PenInputVirtualization__private_propertyCache,
      0x126C043u,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01EEDDC,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C0219931 )
  {
    return 0;
  }
  return v0;
}
