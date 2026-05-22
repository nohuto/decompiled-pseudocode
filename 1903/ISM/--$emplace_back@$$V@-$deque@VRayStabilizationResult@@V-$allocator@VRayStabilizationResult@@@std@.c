/*
 * XREFs of ??$emplace_back@$$V@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@XZ @ 0x18012C464
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x18012D9F8 (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x18012DC7C (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 */

__int64 __fastcall std::deque<RayStabilizationResult>::emplace_back<>(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 ***v6; // rax
  __int64 ****v7; // rcx
  __int64 **v8; // rax
  __int64 *v9; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 <= *(_QWORD *)(a1 + 32) + 1LL )
  {
    std::deque<RayStabilizationResult>::_Growmap(a1);
    v2 = *(_QWORD *)(a1 + 16);
  }
  v3 = 0LL;
  *(_QWORD *)(a1 + 24) &= v2 - 1;
  v4 = (*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v5 + 8 * v4) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v4) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x64uLL);
    v5 = *(_QWORD *)(a1 + 8);
  }
  **(_DWORD **)(v5 + 8 * v4) = 0;
  v6 = 0LL;
  ++*(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v7 = **(__int64 ******)a1;
    if ( v7 )
      v6 = *v7;
  }
  if ( v6 )
  {
    v8 = *v6;
    if ( v8 )
    {
      v9 = *v8;
      if ( v9 )
        v3 = *v9;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(v3 + 8)
                   + 8 * ((*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32) - 1LL) & (*(_QWORD *)(v3 + 16) - 1LL)));
}
