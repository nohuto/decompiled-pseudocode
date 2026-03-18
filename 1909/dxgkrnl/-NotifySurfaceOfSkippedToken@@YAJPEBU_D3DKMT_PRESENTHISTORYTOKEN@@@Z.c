/*
 * XREFs of ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B890
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0008090 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C6A8 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C005A888 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 */

__int64 __fastcall NotifySurfaceOfSkippedToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int v5; // eax
  struct CToken *v6; // rdi
  CompositionSurfaceObject *v7; // rcx
  struct CToken *v9; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(
         (void *)a1->Token.Flip.hLogicalSurface,
         2u,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    v5 = CToken::CreateFlipToken(
           a1->CompositionBindingId,
           (struct CompositionSurfaceObject *)Object,
           &a1->Token.Flip,
           &v9);
    v6 = v9;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = (CompositionSurfaceObject *)Object;
      *((_BYTE *)v9 + 48) = 1;
      *((_DWORD *)v6 + 6) = 3;
      v4 = CompositionSurfaceObject::NotifyTokenInFrame(v7, v6, (bool *)&v9);
      if ( v6 )
        (**(void (__fastcall ***)(struct CToken *, __int64))v6)(v6, 1LL);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
