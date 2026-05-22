/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18004743C
 * Callers:
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x1800479CC (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18004D418 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$5 @ 0x18013061A (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$5.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$1 @ 0x180130DAC (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        if ( *v2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *(_QWORD **)a1;
    }
    v4 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
      v5 = *(v2 - 1);
      if ( (unsigned __int64)v2 - v5 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v4);
        JUMPOUT(0x1800474E5LL);
      }
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
