/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C001D80C
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C001D790 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0008698 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(struct CompositionSurfaceObject *a1, struct CToken **a2)
{
  CToken *v4; // rax
  struct CToken *v5; // rbx
  int v6; // edi

  *a2 = 0LL;
  v4 = (CToken *)operator new(0x58uLL, 0x6F744D54u, PagedPool);
  if ( v4 )
    v5 = CToken::CToken(v4, 0LL, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CToken *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 2LL);
    if ( v6 < 0 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v5)(v5, 1LL);
    else
      *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
