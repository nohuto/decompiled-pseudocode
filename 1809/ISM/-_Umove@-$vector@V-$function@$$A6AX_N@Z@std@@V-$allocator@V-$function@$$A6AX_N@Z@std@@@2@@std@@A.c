/*
 * XREFs of ?_Umove@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@2@PEAV32@00@Z @ 0x18003BD1C
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x18003BAA8 (--$_Emplace_reallocate@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::vector<std::function<void (bool)>>::_Umove(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *i; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  if ( a2 != a3 )
  {
    for ( i = a2 + 7; i - 7 != a3; i += 8 )
    {
      *(_QWORD *)(a4 + 56) = 0LL;
      v7 = (_QWORD *)*i;
      if ( *i )
      {
        if ( v7 != i - 7 )
        {
          *(_QWORD *)(a4 + 56) = v7;
          goto LABEL_8;
        }
        *(_QWORD *)(a4 + 56) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v7 + 8LL))(v7, a4);
        v9 = (_QWORD *)*i;
        if ( *i )
        {
          LOBYTE(v8) = v9 != i - 7;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 32LL))(v9, v8);
LABEL_8:
          *i = 0LL;
        }
      }
      a4 += 64LL;
    }
  }
  return a4;
}
