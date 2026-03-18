/*
 * XREFs of ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019FF1C
 * Callers:
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x1801D7EF0 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18019FDDC (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z @ 0x1801A0024 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801E53C8 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::InsertDependenciesForAxis(
        struct CWeakResourceReference **a1,
        __int64 a2,
        int a3,
        const char *a4)
{
  __int64 v4; // rbx
  struct CWeakResourceReference *v7; // rcx
  unsigned int v8; // edi
  struct CWeakResourceReference *v9; // rcx
  struct CWeakResourceReference **v10; // rdx
  int v11; // eax
  char result; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v7 = a1[a3 + 47];
  if ( v7 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v7 + 168LL))(v7);
  v8 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    v9 = a1[v4 + 45];
    if ( v9 )
      (*(void (__fastcall **)(struct CWeakResourceReference *, __int64))(*(_QWORD *)v9 + 168LL))(v9, a2);
  }
  v10 = a1 + 8;
  if ( !a1[8] )
  {
    *v10 = 0LL;
    v11 = CWeakReference<CVisual>::Create((struct CResource *)a1, v10);
    if ( v11 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
  }
  if ( (int)v4 < 0 || (int)v4 > 1 && (v8 = 2, (_DWORD)v4 != 2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x145B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      a4);
    JUMPOUT(0x1801A001DLL);
  }
  CInteractionTracker::InsertDependenciesForProperty(a1, a2, v8);
  result = InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 24));
  if ( result )
    return InteractionSourceManager::InsertDependenciesForAxis(a1 + 24, a2, (unsigned int)v4);
  return result;
}
