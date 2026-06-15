/*
 * XREFs of ?Initialize@_RecurringTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18004EB64
 * Callers:
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18004EC1C (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F1BC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18004EB00 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004EBDC (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _RecurringTask::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(a1 + 24) = a3;
  v5 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(&v9, a2);
  std::shared_ptr<std::function<void (void)>>::operator=(a1 + 8, v5);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v7 = *(_QWORD *)(a1 + 8) == 0LL ? 0x8007000E : 0;
  std::_Func_class<void,>::_Tidy(a2, v6);
  return v7;
}
