/*
 * XREFs of ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800493E8
 * Callers:
 *     ?Initialize@_RecurringTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18004944C (-Initialize@_RecurringTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x1800E0290 (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180114590 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAV?$function@$$A6AXXZ@std@@@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@QEAA@AEAV?$function@$$A6AXXZ@1@@Z @ 0x180049378 (--$-0AEAV-$function@$$A6AXXZ@std@@@-$_Ref_count_obj@V-$function@$$A6AXXZ@std@@@std@@QEAA@AEAV-$f.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::function<void (void)>,std::function<void (void)> &>(_QWORD *a1, __int64 a2)
{
  LPVOID v4; // rax
  __int64 v5; // rcx

  v4 = operator new(0x50uLL);
  v5 = 0LL;
  if ( v4 )
    v5 = std::_Ref_count_obj<std::function<void (void)>>::_Ref_count_obj<std::function<void (void)>>((__int64)v4, a2);
  *a1 = v5 + 16;
  a1[1] = v5;
  return a1;
}
