/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000B360
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x180039A81 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$4 @ 0x180039ABB (_QueueGenericWorkItem_--_1_--dtor$4.c)
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$0 @ 0x180039ACD (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$0.c)
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$8 @ 0x180039B2A (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
