/*
 * XREFs of ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C00071C8
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0007F20 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseOlderInactiveBuffers(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2)
{
  CCompositionSurface *v2; // rbx
  CCompositionSurface *v3; // rbp
  char v4; // di
  CCompositionSurface *v7; // rdx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  CCompositionSurface *v9; // r8
  CCompositionSurface **v10; // rax

  v2 = (CCompositionSurface *)*((_QWORD *)a2 + 3);
  v3 = (CCompositionSurface *)((char *)this + 64);
  v4 = 0;
  if ( v2 != (CCompositionSurface *)((char *)this + 64) )
  {
    v4 = 1;
    do
    {
      v7 = *(CCompositionSurface **)v2;
      v8 = (void (__fastcall ***)(_QWORD, __int64))((char *)v2 - 24);
      v9 = v2;
      v2 = v7;
      if ( *((CCompositionSurface **)v7 + 1) != v9 || (v10 = (CCompositionSurface **)*((_QWORD *)v9 + 1), *v10 != v9) )
        __fastfail(3u);
      *v10 = v7;
      *((_QWORD *)v7 + 1) = v10;
      --*((_DWORD *)this + 20);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    while ( v2 != v3 );
  }
  return v4;
}
