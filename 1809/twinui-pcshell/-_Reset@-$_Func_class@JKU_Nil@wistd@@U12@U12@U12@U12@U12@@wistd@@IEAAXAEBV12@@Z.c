/*
 * XREFs of ?_Reset@?$_Func_class@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXAEBV12@@Z @ 0x1801F97F0
 * Callers:
 *     ??4?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEAV01@@Z @ 0x1801F63B8 (--4-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x1801F91C0 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_class<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Reset(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rdx

  result = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 104);
  if ( v4 )
  {
    if ( v4 == (__int64 (__fastcall ***)(_QWORD, __int64))a2 )
      v5 = a1;
    else
      v5 = 0LL;
    result = (**v4)(v4, v5);
  }
  *(_QWORD *)(a1 + 104) = result;
  return result;
}
