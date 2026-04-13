/*
 * XREFs of ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x18002F2EC
 * Callers:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x18002FEA0 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1800432F8 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 * Callees:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x18002FEA0 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::sentry::sentry(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)a1 = a2;
  v4 = *a2;
  v5 = *(__int64 *)((char *)a2 + *(int *)(v4 + 4) + 72);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = *a2;
  }
  v6 = *(int *)(v4 + 4);
  if ( !*(_DWORD *)((char *)a2 + v6 + 16) )
  {
    v7 = *(__int64 *)((char *)a2 + v6 + 80);
    if ( v7 )
    {
      std::basic_ostream<unsigned short>::flush(v7);
      v4 = *a2;
    }
  }
  *(_BYTE *)(a1 + 8) = *(_DWORD *)((char *)a2 + *(int *)(v4 + 4) + 16) == 0;
  return a1;
}
