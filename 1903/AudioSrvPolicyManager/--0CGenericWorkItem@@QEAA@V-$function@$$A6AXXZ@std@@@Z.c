/*
 * XREFs of ??0CGenericWorkItem@@QEAA@V?$function@$$A6AXXZ@std@@@Z @ 0x18002996C
 * Callers:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800295F4 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CGenericWorkItem::CGenericWorkItem(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, char *); // rcx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx

  *a1 = &CGenericWorkItem::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  v7 = v5;
  if ( v5 )
  {
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
    *((_QWORD *)v5 + 9) = 0LL;
    v8 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
    if ( v8 )
      *((_QWORD *)v5 + 9) = (**v8)(v8, (char *)v5 + 16);
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7 + 4;
  v9 = (volatile signed __int32 *)a1[2];
  a1[2] = v7;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = *(_QWORD *)(a2 + 56);
  if ( v10 )
  {
    LOBYTE(v6) = v10 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return a1;
}
