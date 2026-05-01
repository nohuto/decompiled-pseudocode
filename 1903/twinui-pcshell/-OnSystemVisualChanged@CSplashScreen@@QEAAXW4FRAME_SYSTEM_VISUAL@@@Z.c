/*
 * XREFs of ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180015A3C
 * Callers:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@W4GHOST_STATUS@@@Z @ 0x1800159A8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x1800333B0 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005FB10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180146510 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSplashScreen::OnSystemVisualChanged(__int64 a1, unsigned int a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v12[1] = -2LL;
  if ( a2 <= 1 && (a2 != 1) != *(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = a2 != 1;
    if ( a2 != 1 )
    {
      v12[0] = a1;
      v3 = *(_QWORD *)(a1 + 64);
      while ( v3 >= 0 )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v3 + 1, v3);
        if ( v4 == v3 )
          goto LABEL_10;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v3 + 16));
LABEL_10:
      v14 = a1;
      v5 = *(_QWORD *)(a1 + 64);
      while ( v5 >= 0 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v5 + 1, v5);
        if ( v6 == v5 )
          goto LABEL_15;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
LABEL_15:
      CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216____(&v13, &v14);
      v9 = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216;
      v11 = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216;
      *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216 = 0LL;
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
          v10,
          v8);
      }
      if ( v9 )
      {
        if ( (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 232LL))(*(_QWORD *)(a1 + 120), v9) >= 0 )
          *(_BYTE *)(a1 + 129) = 1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(v12);
    }
  }
}
