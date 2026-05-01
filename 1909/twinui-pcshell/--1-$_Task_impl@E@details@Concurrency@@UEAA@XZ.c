/*
 * XREFs of ??1?$_Task_impl@E@details@Concurrency@@UEAA@XZ @ 0x18030BE90
 * Callers:
 *     ??_E?$_Task_impl@E@details@Concurrency@@UEAAPEAXI@Z @ 0x18030C570 (--_E-$_Task_impl@E@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801C9F14 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1801EC038 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl<unsigned char>::~_Task_impl<unsigned char>(
        Concurrency::details::_Task_impl_base *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &Concurrency::details::_Task_impl<unsigned char>::`vftable';
  Concurrency::details::_Task_impl_base::_DeregisterCancellation(this);
  std::_Func_class<void,>::_Tidy((__int64)this + 376, v2);
  Concurrency::details::_Task_impl_base::~_Task_impl_base(this);
}
