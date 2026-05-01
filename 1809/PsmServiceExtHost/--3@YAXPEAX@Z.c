/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180047C58
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180002B60 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@@details@2@_NPEAX_KPEAX_KIU_Nil@2@U52@@wistd@@UEAAPEAXI@Z @ 0x180007140 (--_G-$_Func_impl@U-$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V-$fun.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180018660 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180019980 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001C400 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x18003CE20 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x18003EFF0 (--_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x180054F40 (--_EResourceManagerServerProxy@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceSetCallback@@UEAAKXZ @ 0x180055310 (-Release@ResourceSetCallback@@UEAAKXZ.c)
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180055480 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x1800554B8 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??_E?$_Func_base@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@UEAAPEAXI@Z @ 0x180056160 (--_E-$_Func_base@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@UEAAPEAXI@Z.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180058C00 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180063220 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18006C160 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAA.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18006C190 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
