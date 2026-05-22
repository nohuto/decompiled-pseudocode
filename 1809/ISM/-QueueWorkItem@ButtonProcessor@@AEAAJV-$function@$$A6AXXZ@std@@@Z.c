/*
 * XREFs of ?QueueWorkItem@ButtonProcessor@@AEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800EAE00
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800EA960 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800B51A0 (-_Growmap@-$deque@V-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V-$allocator@V-$sha.c)
 *     ??$make_shared@VAsynchronousWorkItem@ButtonProcessor@@AEAV?$function@$$A6AXXZ@std@@@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800EB674 (--$make_shared@VAsynchronousWorkItem@ButtonProcessor@@AEAV-$function@$$A6AXXZ@std@@@std@@YA-AV-$.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ButtonProcessor::QueueWorkItem(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // rdx
  const char *v6; // r9
  _QWORD *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE v16[8]; // [rsp+28h] [rbp-40h] BYREF
  volatile signed __int32 *v17; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  try
  {
    if ( !*(_BYTE *)(a1 + 112) )
    {
      v7 = (_QWORD *)std::make_shared<ButtonProcessor::AsynchronousWorkItem,std::function<void (void)> &>(v16, a2);
      if ( *(_QWORD *)(a1 + 136) <= (unsigned __int64)(*(_QWORD *)(a1 + 152) + 1LL) )
        std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Growmap((_QWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 144) &= *(_QWORD *)(a1 + 136) - 1LL;
      v5 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 144);
      v8 = v5 & (*(_QWORD *)(a1 + 136) - 1LL);
      v9 = *(_QWORD *)(a1 + 128);
      if ( !*(_QWORD *)(v9 + 8 * v8) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v8) = operator new(0x10uLL);
        v9 = *(_QWORD *)(a1 + 128);
      }
      v10 = *(_QWORD **)(v9 + 8 * v8);
      *v10 = 0LL;
      v10[1] = 0LL;
      *v10 = *v7;
      v10[1] = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      ++*(_QWORD *)(a1 + 152);
      v11 = v17;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      if ( *(_QWORD *)(a1 + 152) == 1LL )
        SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 160));
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    v12 = *(_QWORD *)(a2 + 56);
    if ( v12 )
    {
      LOBYTE(v5) = v12 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v5);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    v19 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1A0,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
            v6);
    v14 = *(_QWORD *)(a2 + 56);
    if ( v14 )
    {
      LOBYTE(v15) = v14 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v15);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v19;
  }
  return result;
}
