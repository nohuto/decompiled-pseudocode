/*
 * XREFs of IopLiveDumpAllocateMappingResources @ 0x140821088
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MmAllocateDumpHibernateResources @ 0x140720238 (MmAllocateDumpHibernateResources.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408212D0 (IopLiveDumpFreeMappingResources.c)
 */

__int64 __fastcall IopLiveDumpAllocateMappingResources(__int64 a1)
{
  unsigned int v1; // r14d
  SIZE_T v3; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v5; // ebx
  int v7; // ebp
  __int64 i; // rsi
  __int64 v9; // r15
  void *DumpHibernateResources; // rax
  PMDL Mdl; // rax

  v1 = KeNumberProcessors_0;
  v3 = 16LL * (unsigned int)KeNumberProcessors_0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x706D644Cu);
  v5 = 0;
  *(_QWORD *)(a1 + 568) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    *(_DWORD *)(a1 + 560) = v1;
    v7 = 0;
    if ( !v1 )
      return v5;
    for ( i = 0LL; ; i += 16LL )
    {
      v9 = *(_QWORD *)(a1 + 568);
      DumpHibernateResources = (void *)MmAllocateDumpHibernateResources(0x10000uLL);
      *(_QWORD *)(i + v9) = DumpHibernateResources;
      if ( !DumpHibernateResources )
        break;
      Mdl = IoAllocateMdl(DumpHibernateResources, 0x10000u, 0, 0, 0LL);
      *(_QWORD *)(i + v9 + 8) = Mdl;
      if ( !Mdl )
        break;
      if ( ++v7 >= v1 )
        return v5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 560) = 0;
  }
  IopLiveDumpFreeMappingResources(a1);
  return (unsigned int)-1073741670;
}
