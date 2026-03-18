/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00546BC
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DC06C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C0130014 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     DxgkPresentRedirected @ 0x1C0227800 (DxgkPresentRedirected.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D71C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DF10 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v2; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  struct DXGGLOBAL *v5; // rax
  __int64 v6; // rcx
  struct DXGGLOBAL *v7; // rax
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *v12; // rax
  struct _KPROCESS *v13; // rax
  __int64 v14; // rcx
  struct _KPROCESS *v15; // rbp
  void *FenceValue; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // r14
  __int64 v19; // rbx
  struct DXGGLOBAL *v20; // rax
  void *hCompSurf; // rcx
  __int64 v22; // rcx
  struct DXGGLOBAL *v23; // rax
  struct DXGGLOBAL *v24; // rax
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v2 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  (*(void (**)(void))(*((_QWORD *)Global + 2541) + 168LL))();
  v5 = DXGGLOBAL::GetGlobal(v4);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v5 + 2541) + 200LL))()
    || !(unsigned int)IsTokenManagerReady()
    || (v7 = DXGGLOBAL::GetGlobal(v6), !(*(unsigned int (**)(void))(*((_QWORD *)v7 + 2541) + 184LL))()) )
  {
    v2 = -1071775730;
  }
  v8 = DXGGLOBAL::GetGlobal(v6);
  (*(void (**)(void))(*((_QWORD *)v8 + 2541) + 216LL))();
  if ( v2 >= 0 )
  {
    v10 = DXGGLOBAL::GetGlobal(v9);
    (*(void (**)(void))(*((_QWORD *)v10 + 2541) + 104LL))();
    v12 = DXGGLOBAL::GetGlobal(v11);
    v13 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v12 + 2541) + 232LL))();
    v15 = v13;
    if ( v13 )
    {
      KeStackAttachProcess(v13, &ApcState);
      if ( a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
      {
        FenceValue = (void *)a1->Token.Flip.FenceValue;
        if ( FenceValue )
        {
          Object = 0LL;
          v2 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 2, &Object);
          if ( v2 >= 0 )
          {
            v18 = Object;
            v19 = *((_QWORD *)Object + 15);
            v20 = DXGGLOBAL::GetGlobal(v17);
            (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v20 + 2541) + 24LL))(v19, 1LL);
            (*(void (__fastcall **)(_QWORD *))(v18[5] + 56LL))(v18 + 5);
            ObfDereferenceObject(v18);
            v2 = ObCloseHandle(FenceValue, 1);
            if ( v2 >= 0 )
              a1->Token.Flip.FenceValue = 0LL;
          }
        }
      }
      else if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
      {
        hCompSurf = (void *)a1->Token.Flip.hCompSurf;
        if ( hCompSurf )
        {
          v2 = ObCloseHandle(hCompSurf, 1);
          if ( v2 >= 0 )
            a1->Token.Flip.hCompSurf = 0LL;
        }
      }
      KeUnstackDetachProcess(&ApcState);
      v23 = DXGGLOBAL::GetGlobal(v22);
      (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v23 + 2541) + 160LL))(v15);
    }
    v24 = DXGGLOBAL::GetGlobal(v14);
    (*(void (**)(void))(*((_QWORD *)v24 + 2541) + 144LL))();
  }
  return (unsigned int)v2;
}
