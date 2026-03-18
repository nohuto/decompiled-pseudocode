/*
 * XREFs of ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180063094
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMonitorTreeAssociation::Create(struct CComposition *a1, struct CMonitorTreeAssociation **a2)
{
  struct CMonitorTreeAssociation *v4; // rax
  struct CMonitorTreeAssociation *v5; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CMonitorTreeAssociation *)WPF::ProcessHeapImpl::AllocClear(0x38uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v4 + 2) = 0;
  *(_QWORD *)v4 = &CMonitorTreeAssociation::`vftable';
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 6) = a1;
  (**(void (__fastcall ***)(void *))v4)(v4);
  *a2 = v5;
  return 0LL;
}
