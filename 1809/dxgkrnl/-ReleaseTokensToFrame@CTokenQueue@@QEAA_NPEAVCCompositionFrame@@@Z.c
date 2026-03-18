/*
 * XREFs of ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z @ 0x1C0014C4C
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00148E0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0007730 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CTokenQueue::ReleaseTokensToFrame(CTokenQueue *this, struct CCompositionFrame *a2)
{
  bool v2; // si
  CTokenQueue *v5; // rdi
  CTokenQueue **v6; // rax
  CompositionSurfaceObject **v7; // r14
  CTokenQueue **v8; // rax
  int v9; // ecx
  struct CCompositionFrame **v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(CTokenQueue **)this == this )
  {
    ++*((_DWORD *)this + 6);
    return v2;
  }
  v5 = (CTokenQueue *)*((_QWORD *)this + 1);
  if ( *(CTokenQueue **)v5 != this || (v6 = (CTokenQueue **)*((_QWORD *)v5 + 1), *v6 != v5) )
LABEL_20:
    __fastfail(3u);
  for ( *((_QWORD *)this + 1) = v6; ; *((_QWORD *)this + 1) = v6 )
  {
    *v6 = this;
    if ( v5 == this )
      return v2;
    v7 = (CompositionSurfaceObject **)((char *)v5 - 8);
    if ( *((_QWORD *)this + 2) )
    {
      CompositionSurfaceObject::SetSyncRefreshCount(v7[4], 0);
      if ( *((CompositionSurfaceObject ***)this + 2) == v7 )
        *((_QWORD *)this + 2) = 0LL;
    }
    if ( (*((int (__fastcall **)(_QWORD *, struct CCompositionFrame *, char *))*v7 + 4))((_QWORD *)v5 - 1, a2, &v12) < 0 )
    {
      (*((void (__fastcall **)(_QWORD *))*v7 + 7))((_QWORD *)v5 - 1);
      (*(void (__fastcall **)(_QWORD *, __int64))*v7)((_QWORD *)v5 - 1, 1LL);
      goto LABEL_14;
    }
    if ( !v12 )
      break;
    v11 = (struct CCompositionFrame **)*((_QWORD *)a2 + 19);
    if ( *v11 != (struct CCompositionFrame *)((char *)a2 + 144) )
      goto LABEL_20;
    *(_QWORD *)v5 = (char *)a2 + 144;
    *((_QWORD *)v5 + 1) = v11;
    *v11 = v5;
    *((_QWORD *)a2 + 19) = v5;
LABEL_14:
    v5 = (CTokenQueue *)*((_QWORD *)this + 1);
    if ( *(CTokenQueue **)v5 != this )
      goto LABEL_20;
    v6 = (CTokenQueue **)*((_QWORD *)v5 + 1);
    if ( *v6 != v5 )
      goto LABEL_20;
  }
  v8 = (CTokenQueue **)*((_QWORD *)this + 1);
  v9 = *((_DWORD *)v7 + 6);
  if ( *v8 != this )
    goto LABEL_20;
  *(_QWORD *)v5 = this;
  *((_QWORD *)v5 + 1) = v8;
  *v8 = v5;
  v2 = v9 == 2;
  *((_QWORD *)this + 1) = v5;
  return v2;
}
