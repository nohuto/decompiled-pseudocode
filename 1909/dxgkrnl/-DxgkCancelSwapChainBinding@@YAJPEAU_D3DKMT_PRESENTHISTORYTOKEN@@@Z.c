/*
 * XREFs of ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B4C0
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00FB960 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C0141C48 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     DxgkPresentRedirected @ 0x1C025C950 (DxgkPresentRedirected.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0001008 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0011250 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DxgkCancelSwapChainBinding(struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGGLOBAL *v11; // rax
  struct DXGGLOBAL *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  struct _KPROCESS *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KPROCESS *v22; // rbp
  void *FenceValue; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // rbx
  struct DXGGLOBAL *v28; // rax
  void *hCompSurf; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGGLOBAL *v32; // rax
  struct DXGGLOBAL *v33; // rax
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v2 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Global = DXGGLOBAL::GetGlobal(v4, v3);
  (*(void (**)(void))(*((_QWORD *)Global + 38000) + 208LL))();
  v8 = DXGGLOBAL::GetGlobal(v7, v6);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v8 + 38000) + 240LL))()
    || !(unsigned int)IsTokenManagerReady()
    || (v11 = DXGGLOBAL::GetGlobal(v10, v9), !(*(unsigned int (**)(void))(*((_QWORD *)v11 + 38000) + 224LL))()) )
  {
    v2 = -1071775730;
  }
  v12 = DXGGLOBAL::GetGlobal(v10, v9);
  (*(void (**)(void))(*((_QWORD *)v12 + 38000) + 256LL))();
  if ( v2 >= 0 )
  {
    v15 = DXGGLOBAL::GetGlobal(v14, v13);
    (*(void (**)(void))(*((_QWORD *)v15 + 38000) + 144LL))();
    v18 = DXGGLOBAL::GetGlobal(v17, v16);
    v19 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v18 + 38000) + 272LL))();
    v22 = v19;
    if ( v19 )
    {
      KeStackAttachProcess(v19, &ApcState);
      if ( a1->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
      {
        FenceValue = (void *)a1->Token.Flip.FenceValue;
        if ( FenceValue )
        {
          Object = 0LL;
          v2 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 2, &Object);
          if ( v2 >= 0 )
          {
            v26 = Object;
            v27 = *((_QWORD *)Object + 15);
            v28 = DXGGLOBAL::GetGlobal(v25, v24);
            (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v28 + 38000) + 32LL))(v27, 1LL);
            (*(void (__fastcall **)(_QWORD *))(v26[5] + 56LL))(v26 + 5);
            ObfDereferenceObject(v26);
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
      v32 = DXGGLOBAL::GetGlobal(v31, v30);
      (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v32 + 38000) + 200LL))(v22);
    }
    v33 = DXGGLOBAL::GetGlobal(v21, v20);
    (*(void (**)(void))(*((_QWORD *)v33 + 38000) + 184LL))();
  }
  return (unsigned int)v2;
}
