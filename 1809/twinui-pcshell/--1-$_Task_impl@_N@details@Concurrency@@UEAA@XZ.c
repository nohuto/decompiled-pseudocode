/*
 * XREFs of ??1?$_Task_impl@_N@details@Concurrency@@UEAA@XZ @ 0x180293968
 * Callers:
 *     ??_G?$_Task_impl@_N@details@Concurrency@@UEAAPEAXI@Z @ 0x1802945A0 (--_G-$_Task_impl@_N@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1802960F4 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl<bool>::~_Task_impl<bool>(Concurrency::details::_Task_impl_base *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &Concurrency::details::_Task_impl<bool>::`vftable';
  Concurrency::details::_Task_impl_base::_DeregisterCancellation(this);
  std::_Func_class<void,>::_Tidy((__int64)this + 376, v2);
  Concurrency::details::_Task_impl_base::~_Task_impl_base(this);
}
