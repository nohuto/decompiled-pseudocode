/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x180094B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CMILRefCountBase **__fastcall CResourceTable::`vector deleting destructor'(CMILRefCountBase **this, char a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rcx
  CMILRefCountBase *v6; // rcx
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  void (*v12)(void); // rax

  *this = (CMILRefCountBase *)&CResourceTable::`vftable';
  v3 = (_QWORD **)(this + 8);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v8 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v8;
    v9 = v5 - 1;
    v8[1] = v3;
    v10 = *v9;
    v11 = (unsigned __int64)(v9 + 1) & -(__int64)(v9 != 0LL);
    v9[1] = v11;
    v12 = *(void (**)(void))(v10 + 8);
    v9[2] = v11;
    v12();
  }
  ReleaseInterface<CConnection>(this + 7);
  v6 = this[5];
  this[2] = (CMILRefCountBase *)&HANDLE_TABLE::`vftable';
  WPF::ProcessHeapImpl::Free(v6);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
