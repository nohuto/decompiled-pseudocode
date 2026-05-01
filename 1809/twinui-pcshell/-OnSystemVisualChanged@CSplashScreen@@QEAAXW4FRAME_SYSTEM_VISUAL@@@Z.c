/*
 * XREFs of ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800430EC
 * Callers:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180043060 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18004501C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64___lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64_ @ 0x180043224 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A4F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSplashScreen::OnSystemVisualChanged(__int64 a1, unsigned int a2)
{
  signed __int64 v3; // rax
  int v4; // r10d
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64___lambda_ca324c265ed58b3d9541d2204f682216______ptr64; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 <= 1 )
  {
    v13[1] = -2LL;
    if ( (a2 != 1) != *(_BYTE *)(a1 + 128) )
    {
      *(_BYTE *)(a1 + 128) = a2 != 1;
      if ( a2 != 1 )
      {
        v13[2] = a1;
        v3 = *(_QWORD *)(a1 + 64);
        v4 = 0x7FFFFFFF;
        while ( v3 >= 0 )
        {
          if ( (_DWORD)v3 != 0x7FFFFFFF )
          {
            v5 = v3;
            v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v3 + 1, v3);
            if ( v5 != v3 )
              continue;
          }
          goto LABEL_10;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v3 + 16));
LABEL_10:
        v15 = a1;
        v6 = *(_QWORD *)(a1 + 64);
        while ( v6 >= 0 )
        {
          if ( (_DWORD)v6 != v4 )
          {
            v7 = v6;
            v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v6 + 1, v6);
            if ( v7 != v6 )
              continue;
          }
          goto LABEL_16;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v6 + 16));
LABEL_16:
        CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64___lambda_ca324c265ed58b3d9541d2204f682216______ptr64 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64___lambda_ca324c265ed58b3d9541d2204f682216______ptr64_(&v14, &v15);
        v11 = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64___lambda_ca324c265ed58b3d9541d2204f682216______ptr64;
        v13[0] = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64___lambda_ca324c265ed58b3d9541d2204f682216______ptr64;
        *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64___lambda_ca324c265ed58b3d9541d2204f682216______ptr64 = 0LL;
        v12 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
            v12,
            v9,
            v10);
        }
        if ( v11 )
        {
          if ( (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 208LL))(*(_QWORD *)(a1 + 120), v11) >= 0 )
            *(_BYTE *)(a1 + 129) = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(a1);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(a1);
      }
    }
  }
}
