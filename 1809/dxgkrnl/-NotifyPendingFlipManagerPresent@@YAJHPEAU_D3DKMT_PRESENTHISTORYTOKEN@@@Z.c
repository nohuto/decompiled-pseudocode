/*
 * XREFs of ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0054958
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D594 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D71C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000D7CC (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DF10 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C00548F8 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall NotifyPendingFlipManagerPresent(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // rbp
  int v3; // edi
  int v5; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  struct DXGGLOBAL *v11; // rax
  struct DXGGLOBAL *v12; // rax
  PVOID v13; // rbx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v3 = 0;
  Handle = 0LL;
  v5 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  (*(void (**)(void))(*((_QWORD *)Global + 2541) + 168LL))();
  v8 = DXGGLOBAL::GetGlobal(v7);
  v9 = (*(__int64 (**)(void))(*((_QWORD *)v8 + 2541) + 200LL))();
  if ( !v5
    || v9
    || !(unsigned int)IsTokenManagerReady()
    || (v11 = DXGGLOBAL::GetGlobal(v10), !(*(unsigned int (**)(void))(*((_QWORD *)v11 + 2541) + 184LL))()) )
  {
    v3 = -1071775730;
  }
  v12 = DXGGLOBAL::GetGlobal(v10);
  (*(void (**)(void))(*((_QWORD *)v12 + 2541) + 216LL))();
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v3 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 5, &Object);
    if ( v3 >= 0 )
    {
      v13 = Object;
      v3 = FlipManagerTokenObject::MarkPending((FlipManagerTokenObject *)Object);
      if ( v3 >= 0 )
      {
        v3 = DxgkCompositionObject::OpenDwmHandle(v13, &Handle);
        if ( v3 >= 0 )
          a2->Token.Flip.FenceValue = (UINT64)Handle;
      }
      ObfDereferenceObject(v13);
    }
  }
  return (unsigned int)v3;
}
