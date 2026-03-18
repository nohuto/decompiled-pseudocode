/*
 * XREFs of ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x1800256D8
 * Callers:
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180024BA0 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Create(struct ICoverageSet **a1)
{
  char *v2; // rax
  __int64 v3; // r8
  struct ICoverageSet *v4; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)DefaultHeap::AllocClear(0x1C0uLL);
  v4 = (struct ICoverageSet *)v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v3);
  *((_DWORD *)v2 + 4) = 0;
  *(_QWORD *)v2 = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
  *((_QWORD *)v2 + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v2 + 3) = v2 + 56;
  *((_QWORD *)v2 + 4) = v2 + 56;
  *((_DWORD *)v2 + 10) = 10;
  *(_QWORD *)(v2 + 44) = 10LL;
  *((_QWORD *)v2 + 52) = 0LL;
  *((_QWORD *)v2 + 53) = 0LL;
  *((_QWORD *)v2 + 54) = 0LL;
  *((_DWORD *)v2 + 110) = 0;
  CMILCOMBase::InternalAddRef((CMILCOMBase *)(v2 + 8));
  *a1 = v4;
  return 0LL;
}
