/*
 * XREFs of ??1?$_Task_impl@J@details@Concurrency@@UEAA@XZ @ 0x1801C4BA4
 * Callers:
 *     ??_G?$_Task_impl@J@details@Concurrency@@UEAAPEAXI@Z @ 0x1801C5D30 (--_G-$_Task_impl@J@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801AAFE4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1801CCFA4 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl<long>::~_Task_impl<long>(Concurrency::details::_Task_impl_base *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &Concurrency::details::_Task_impl<long>::`vftable';
  Concurrency::details::_Task_impl_base::_DeregisterCancellation(this);
  std::_Func_class<void,>::_Tidy((__int64)this + 376, v2);
  Concurrency::details::_Task_impl_base::~_Task_impl_base(this);
}
