/*
 * XREFs of ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800058B0
 * Callers:
 *     ?GetEatPolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ @ 0x180001BC0 (-GetEatPolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ.c)
 *     ?GetActivatePolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ @ 0x180001D30 (-GetActivatePolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ.c)
 *     ?Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800020C0 (-Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0@-$IBamoPeer_ISMBamos_AutoBamos_Receiv.c)
 *     ?Thunk_RegisterInputAttemptedClient_0@?$IInputDeliveryServerPrincipal_Receive@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180002370 (-Thunk_RegisterInputAttemptedClient_0@-$IInputDeliveryServerPrincipal_Receive@VBamoInputDelivery.c)
 *     ?GetInputSiteId@BamoInputSiteElementProxy@@UEAA_KXZ @ 0x1800054F0 (-GetInputSiteId@BamoInputSiteElementProxy@@UEAA_KXZ.c)
 *     ?Thunk_Materialize_BamoInputSiteElementProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800055A0 (-Thunk_Materialize_BamoInputSiteElementProxy_0@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerI.c)
 *     ?Thunk_RegisterInputSiteElement_0@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180005690 (-Thunk_RegisterInputSiteElement_0@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrin.c)
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x1800057C0 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18005A4C0 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801277B0 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 34) != GetCurrentThreadId() )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5CE,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v2);
    JUMPOUT(0x18003ED94LL);
  }
  *((_DWORD *)this + 34) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
}
