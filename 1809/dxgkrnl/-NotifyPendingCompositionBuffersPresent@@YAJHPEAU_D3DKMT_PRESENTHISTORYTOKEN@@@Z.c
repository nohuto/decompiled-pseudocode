/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D5D0
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D594 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D71C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000D7CC (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C000D928 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DF10 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  UINT64 FenceValue; // rsi
  int v3; // edi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax
  int v8; // eax
  struct DXGGLOBAL *v9; // rax
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  struct DXGGLOBAL *v14; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  FenceValue = a2->Token.Flip.FenceValue;
  v3 = 0;
  Handle = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)Global + 2541) + 168LL))();
  v7 = DXGGLOBAL::GetGlobal();
  v8 = (*(__int64 (**)(void))(*((_QWORD *)v7 + 2541) + 200LL))();
  if ( !a1
    || v8
    || !(unsigned int)IsTokenManagerReady()
    || (v9 = DXGGLOBAL::GetGlobal(), !(*(unsigned int (**)(void))(*((_QWORD *)v9 + 2541) + 184LL))()) )
  {
    v3 = -1071775730;
  }
  v10 = DXGGLOBAL::GetGlobal();
  (*(void (**)(void))(*((_QWORD *)v10 + 2541) + 216LL))();
  if ( v3 >= 0 )
  {
    Object = 0LL;
    LOBYTE(v11) = 1;
    v3 = DxgkCompositionObject::ResolveHandle(FenceValue, 2LL, v11, 2LL, &Object);
    if ( v3 >= 0 )
    {
      v12 = Object;
      v3 = CompositionTokenObject::MarkPending((CompositionTokenObject *)Object);
      if ( v3 >= 0 )
      {
        v3 = DxgkCompositionObject::OpenDwmHandle(v12, &Handle);
        if ( v3 >= 0 )
        {
          v13 = v12[15];
          v14 = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v14 + 2541) + 24LL))(v13, 0LL);
          a2->Token.Flip.FenceValue = (UINT64)Handle;
        }
      }
      ObfDereferenceObject(v12);
    }
  }
  return (unsigned int)v3;
}
