/*
 * XREFs of ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0010AB0
 * Callers:
 *     ?DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x1C0010890 (-DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00108D0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0059DC0 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B480 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B730 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C006066C (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveHandle@DXGVAILOBJECT@@SAJPEAXKDPEAPEAV1@@Z @ 0x1C0291078 (-ResolveHandle@DXGVAILOBJECT@@SAJPEAXKDPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        int a4,
        PVOID Object)
{
  _QWORD *v5; // rsi
  struct _OBJECT_TYPE *v8; // r8
  NTSTATUS v9; // ebx
  _QWORD **v10; // rdi

  v5 = Object;
  v8 = g_pDxgkCompositionObjectType;
  *(_QWORD *)Object = 0LL;
  v9 = ObReferenceObjectByHandle(a1, a2, v8, a3, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD **)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v10[2] + 16LL))(v10[2]) == a4 )
        *v5 = v10;
      else
        v9 = -1073741788;
    }
    else
    {
      v9 = -1073741816;
    }
    if ( v9 < 0 )
      ObfDereferenceObject(v10);
  }
  return (unsigned int)v9;
}
