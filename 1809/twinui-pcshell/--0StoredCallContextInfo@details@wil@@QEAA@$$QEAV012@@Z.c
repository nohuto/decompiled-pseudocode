/*
 * XREFs of ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x1801078E8
 * Callers:
 *     ??0?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1801072A0 (--0-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18017766C (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflect.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18026877C (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Para_ea_18026877C.c)
 *     ??$create@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x18027D3DC (--$create@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802BF914 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgR_ea_1802BF914.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18031E650 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag__ea_18031E650.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180333C48 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag__ea_180333C48.c)
 *     ??$create@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1803435F8 (--$create@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A.c)
 * Callees:
 *     ??4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180012AC4 (--4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

void *__fastcall wil::details::StoredCallContextInfo::StoredCallContextInfo(void *a1, __int64 a2)
{
  memset_0(a1, 0, 0x20uLL);
  wil::details::StoredCallContextInfo::operator=((__int64)a1, a2);
  return a1;
}
