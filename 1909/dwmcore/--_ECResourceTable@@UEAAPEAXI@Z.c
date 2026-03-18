/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18004B2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18004C7A8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  void (*v12)(void); // rax

  *(_QWORD *)this = &CResourceTable::`vftable';
  v3 = (_QWORD **)((char *)this + 64);
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
  ReleaseInterface<CProcessAttribution>((char *)this + 56);
  v6 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  operator delete(v6);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
