/*
 * XREFs of ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B730
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0007D94 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0001008 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0010AB0 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00189C4 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C005B6D0 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall NotifyPendingFlipManagerPresent(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // rbp
  int v3; // edi
  int v5; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *v13; // rax
  struct DXGGLOBAL *v14; // rax
  PVOID v15; // rbx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v3 = 0;
  Handle = 0LL;
  v5 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2);
  (*(void (**)(void))(*((_QWORD *)Global + 38000) + 208LL))();
  v9 = DXGGLOBAL::GetGlobal(v8, v7);
  v10 = (*(__int64 (**)(void))(*((_QWORD *)v9 + 38000) + 240LL))();
  if ( !v5
    || v10
    || !(unsigned int)IsTokenManagerReady()
    || (v13 = DXGGLOBAL::GetGlobal(v12, v11), !(*(unsigned int (**)(void))(*((_QWORD *)v13 + 38000) + 224LL))()) )
  {
    v3 = -1071775730;
  }
  v14 = DXGGLOBAL::GetGlobal(v12, v11);
  (*(void (**)(void))(*((_QWORD *)v14 + 38000) + 256LL))();
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v3 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 5, &Object);
    if ( v3 >= 0 )
    {
      v15 = Object;
      v3 = FlipManagerTokenObject::MarkPending((FlipManagerTokenObject *)Object);
      if ( v3 >= 0 )
      {
        v3 = DxgkCompositionObject::OpenDwmHandle(v15, &Handle);
        if ( v3 >= 0 )
          a2->Token.Flip.FenceValue = (UINT64)Handle;
      }
      ObfDereferenceObject(v15);
    }
  }
  return (unsigned int)v3;
}
