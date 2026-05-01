/*
 * XREFs of ??1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180211AA8
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x18021FD5C (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$0 @ 0x180220055 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::~CrashRecovery(
        ViewManagerInteropTraceLogging::CrashRecovery *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
