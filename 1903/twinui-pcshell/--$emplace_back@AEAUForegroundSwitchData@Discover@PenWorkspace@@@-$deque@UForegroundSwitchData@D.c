/*
 * XREFs of ??$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAAAEAUForegroundSwitchData@Discover@PenWorkspace@@AEAU234@@Z @ 0x180097330
 * Callers:
 *     ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x180062BC0 (-OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@IEAAX_K@Z @ 0x1801E3A70 (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 */

__int64 __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::emplace_back<PenWorkspace::Discover::ForegroundSwitchData &>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 ***v9; // rax
  __int64 ****v10; // rcx
  __int64 **v11; // rax
  __int64 *v12; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= *(_QWORD *)(a1 + 32) + 1LL )
  {
    std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap(a1);
    v4 = *(_QWORD *)(a1 + 16);
  }
  v5 = 0LL;
  *(_QWORD *)(a1 + 24) &= v4 - 1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24));
  if ( !*(_QWORD *)(v6 + 8 * v7) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0xCuLL);
    v6 = *(_QWORD *)(a1 + 8);
  }
  v8 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)v8 = *(_QWORD *)a2;
  *(_DWORD *)(v8 + 8) = *(_DWORD *)(a2 + 8);
  v9 = 0LL;
  ++*(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v10 = **(__int64 ******)a1;
    if ( v10 )
      v9 = *v10;
  }
  if ( v9 )
  {
    v11 = *v9;
    if ( v11 )
    {
      v12 = *v11;
      if ( v12 )
        v5 = *v12;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(v5 + 8)
                   + 8 * ((*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32) - 1LL) & (*(_QWORD *)(v5 + 16) - 1LL)));
}
