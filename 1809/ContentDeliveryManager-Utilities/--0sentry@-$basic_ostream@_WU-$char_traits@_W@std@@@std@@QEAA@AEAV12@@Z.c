/*
 * XREFs of ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x180074A28
 * Callers:
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180074750 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x180075144 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x180096344 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 * Callees:
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180074750 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wostream::sentry::sentry(__int64 a1, __int64 *a2)
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
      std::wostream::flush(v7);
      v4 = *a2;
    }
  }
  *(_BYTE *)(a1 + 8) = *(_DWORD *)((char *)a2 + *(int *)(v4 + 4) + 16) == 0;
  return a1;
}
