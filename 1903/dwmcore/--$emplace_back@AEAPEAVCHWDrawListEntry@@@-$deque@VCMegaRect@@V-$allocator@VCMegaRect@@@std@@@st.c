/*
 * XREFs of ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCHWDrawListEntry@@@Z @ 0x1800B6A44
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z @ 0x1800B6B6C (-_Growmap@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  HANDLE ProcessHeap; // rax
  LPVOID v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 ***v14; // rax
  __int64 ****v15; // rcx
  __int64 **v16; // rax
  __int64 *v17; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= *(_QWORD *)(a1 + 32) + 1LL )
  {
    std::deque<CMegaRect>::_Growmap(a1);
    v4 = *(_QWORD *)(a1 + 16);
  }
  v5 = 0LL;
  *(_QWORD *)(a1 + 24) &= v4 - 1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24));
  if ( !*(_QWORD *)(v6 + 8 * v7) )
  {
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x70uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v10);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = v9;
    v6 = *(_QWORD *)(a1 + 8);
  }
  v11 = *a2;
  v12 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)v12 = *a2;
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  v13 = *(_DWORD *)(*(_QWORD *)(v11 + 144) + 16LL);
  v14 = 0LL;
  *(_DWORD *)(v12 + 24) = v13;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_DWORD *)(v12 + 104) = 0;
  ++*(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v15 = **(__int64 ******)a1;
    if ( v15 )
      v14 = *v15;
  }
  if ( v14 )
  {
    v16 = *v14;
    if ( v16 )
    {
      v17 = *v16;
      if ( v17 )
        v5 = *v17;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(v5 + 8)
                   + 8 * ((*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32) - 1LL) & (*(_QWORD *)(v5 + 16) - 1LL)));
}
