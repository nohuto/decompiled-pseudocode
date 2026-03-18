/*
 * XREFs of ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D3C8
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000CF10 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C000D4A0 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D71C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ResolveCompositionHandleToken(
        CTokenManager *this,
        const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *a2,
        __int64 a3)
{
  void *hPrivateData; // rsi
  int v4; // edi
  _QWORD *v6; // rbx
  CTokenManager **v7; // rcx
  CTokenManager *v8; // rdx
  __int64 v9; // rbx
  struct DXGGLOBAL *Global; // rax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  hPrivateData = (void *)a2->hPrivateData;
  v4 = 0;
  if ( a2->hPrivateData )
  {
    Object = 0LL;
    LOBYTE(a3) = 1;
    v4 = DxgkCompositionObject::ResolveHandle(hPrivateData, 2LL, a3, 2LL, &Object);
    if ( v4 >= 0 )
    {
      v6 = Object;
      v4 = CompositionTokenObject::MarkCompleted((CompositionTokenObject *)Object);
      if ( v4 < 0 )
      {
        ObfDereferenceObject(v6);
      }
      else
      {
        v7 = (CTokenManager **)*((_QWORD *)this + 34);
        v8 = (CTokenManager *)(v6 + 6);
        if ( *v7 != (CTokenManager *)((char *)this + 264) )
          __fastfail(3u);
        *(_QWORD *)v8 = (char *)this + 264;
        v6[7] = v7;
        *v7 = v8;
        *((_QWORD *)this + 34) = v8;
        v9 = v6[15];
        Global = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)Global + 2541) + 24LL))(v9, 1LL);
      }
    }
    NtClose(hPrivateData);
  }
  return (unsigned int)v4;
}
