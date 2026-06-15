/*
 * XREFs of ??$?0AEAV?$function@$$A6AXXZ@std@@@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@QEAA@AEAV?$function@$$A6AXXZ@1@@Z @ 0x180049378
 * Callers:
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800493E8 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<std::function<void (void)>>::_Ref_count_obj<std::function<void (void)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
  v3 = a1 + 16;
  *(_QWORD *)(a1 + 72) = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v4 )
    *(_QWORD *)(v3 + 56) = (**v4)(v4, v3);
  return a1;
}
