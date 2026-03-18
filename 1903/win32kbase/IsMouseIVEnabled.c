/*
 * XREFs of IsMouseIVEnabled @ 0x1C00327F4
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0032110 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0032408 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034D34 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C006C9B8 (RIMChildInputTypeIsVirtualized.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0192274 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003284C (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     UseVelocityToEnableIV @ 0x1C0032928 (UseVelocityToEnableIV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

char IsMouseIVEnabled()
{
  char v0; // bl
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v0 = 1;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    v2 = 3;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                         &Feature_MouseInputVirtualization__private_propertyCache,
                         18793214LL,
                         2LL)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0x11EC2FEu,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01DBEF4,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v2,
        0LL,
        0,
        1uLL);
    }
  }
  else if ( !isChildPartition() || !byte_1C0219934 )
  {
    return 0;
  }
  return v0;
}
