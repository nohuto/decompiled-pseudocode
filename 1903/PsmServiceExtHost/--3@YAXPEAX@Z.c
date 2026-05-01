/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1800476D8
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180007230 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x18001B070 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18001C3A0 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001FDB0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180034590 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x18003DA30 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x18003FB80 (--_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x180061970 (--_EResourceManagerServerProxy@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceSetCallback@@UEAAKXZ @ 0x180061D30 (-Release@ResourceSetCallback@@UEAAKXZ.c)
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180061EA0 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x180061ED8 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??_E?$__base@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180062CD0 (--_E-$__base@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAPEAXI@Z.c)
 *     wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::_scalar_deleting_destructor_ @ 0x180062D00 (wistd--__function--__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(vo_ea_180062D00.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x1800657D0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180070300 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18007A3A0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAA.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18007A3D0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
