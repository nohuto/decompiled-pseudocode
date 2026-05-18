/*
 * XREFs of sub_1800FD0E8 @ 0x1800FD0E8
 * Callers:
 *     sub_1800FC6AC @ 0x1800FC6AC (sub_1800FC6AC.c)
 *     sub_1800FE530 @ 0x1800FE530 (sub_1800FE530.c)
 *     sub_1800FE8E0 @ 0x1800FE8E0 (sub_1800FE8E0.c)
 *     sub_180132B6C @ 0x180132B6C (sub_180132B6C.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_8 @ 0x180132C34 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180132C34.c)
 *     sub_180132C40 @ 0x180132C40 (sub_180132C40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FD0E8(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx

  v2 = a1 + 15;
  v4 = (_QWORD *)a1[22];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, a2);
    v2[7] = 0LL;
  }
  v6 = (_QWORD *)a1[14];
  if ( v6 )
  {
    LOBYTE(a2) = v6 != a1 + 7;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, a2);
    a1[14] = 0LL;
  }
  v7 = (volatile signed __int32 *)a1[3];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a1[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
