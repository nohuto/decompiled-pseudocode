/*
 * XREFs of ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x18003B14C
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x18003AC98 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$0 @ 0x18012F71E (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$1 @ 0x18012F730 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  __int64 v7; // rcx

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        v5 = (_QWORD *)v2[7];
        if ( v5 )
        {
          LOBYTE(a2) = v5 != v2;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 32LL))(v5, a2);
          v2[7] = 0LL;
        }
        v2 += 8;
      }
      while ( v2 != v4 );
      v2 = *(_QWORD **)a1;
    }
    v6 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFC0uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v7 = *(v2 - 1);
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      if ( (unsigned __int64)v2 - v7 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x18003B1F4LL);
      }
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
