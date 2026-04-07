/*
 * XREFs of ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x18003BA2C
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18003B5C0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A1384 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A1708 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectGroupProxy::Update(
        CEffectGroupProxy *this,
        double a2,
        __int64 a3,
        const struct CTransform3dGroupProxy *a4)
{
  __int64 v4; // r8

  v4 = 0LL;
  if ( a4 )
    v4 = *(unsigned int *)(*((_QWORD *)a4 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 904LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v4,
           0LL,
           v4);
}
