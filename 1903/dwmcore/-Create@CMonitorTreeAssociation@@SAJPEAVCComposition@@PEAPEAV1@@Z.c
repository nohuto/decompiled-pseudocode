/*
 * XREFs of ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E2260
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E08E0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMonitorTreeAssociation::Create(struct CComposition *a1, struct CMonitorTreeAssociation **a2)
{
  struct CMonitorTreeAssociation *v4; // rax
  __int64 v5; // r8
  struct CMonitorTreeAssociation *v6; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CMonitorTreeAssociation *)DefaultHeap::AllocClear(0x38uLL);
  v6 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  *((_DWORD *)v4 + 2) = 0;
  *(_QWORD *)v4 = &CMonitorTreeAssociation::`vftable';
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 6) = a1;
  (**(void (__fastcall ***)(LPVOID))v4)(v4);
  *a2 = v6;
  return 0LL;
}
