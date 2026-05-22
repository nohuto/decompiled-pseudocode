/*
 * XREFs of ??$make_shared@VAsynchronousWorkItem@ButtonProcessor@@AEAV?$function@$$A6AXXZ@std@@@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800EB674
 * Callers:
 *     ?QueueWorkItem@ButtonProcessor@@AEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800EAE00 (-QueueWorkItem@ButtonProcessor@@AEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<ButtonProcessor::AsynchronousWorkItem,std::function<void (void)> &>(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // r14
  _BYTE *v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // r8
  _BYTE *v7; // rdx
  _BYTE v9[56]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE *v10; // [rsp+60h] [rbp-28h]

  v4 = operator new(0x50uLL);
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj<ButtonProcessor::AsynchronousWorkItem>::`vftable';
  v5 = 0LL;
  v10 = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v6 )
  {
    v5 = (_BYTE *)(**v6)(*(_QWORD *)(a2 + 56), v9);
    v10 = v5;
  }
  *((_QWORD *)v4 + 9) = 0LL;
  if ( v5 )
  {
    *((_QWORD *)v4 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v5)(v5, (__int64)(v4 + 4));
    v5 = v10;
  }
  if ( v5 )
  {
    v7 = v9;
    LOBYTE(v7) = v5 != v9;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v5 + 32LL))(v5, v7);
  }
  *a1 = v4 + 4;
  a1[1] = v4;
  return a1;
}
