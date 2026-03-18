/*
 * XREFs of ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@E$0?0@gsl@@XZ @ 0x1801FA58C
 * Callers:
 *     _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x1801F6714 (_lambda_05398b4549421d065ab404e0dbeea144_--operator().c)
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801F6830 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800850B4 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CSharedSectionWrapper::GetSharedSectionData(__int64 a1)
{
  void *v1; // rax
  __int64 v2; // r8
  _QWORD *v3; // r9
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 56) )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( *(_DWORD *)(a1 + 68) == -1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v1 = CSharedSection::ResolveAllocation(
         *(CSharedSection **)(a1 + 56),
         *(unsigned int *)(a1 + 64),
         *(unsigned int *)(a1 + 68));
  *v3 = v2;
  v3[1] = v1;
  if ( !v1 && v2 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return v3;
}
