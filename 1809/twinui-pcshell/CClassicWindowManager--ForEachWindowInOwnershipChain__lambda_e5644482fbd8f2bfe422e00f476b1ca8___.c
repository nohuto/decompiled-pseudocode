/*
 * XREFs of CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180050768
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x18004F720 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180050828 (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x18005096C (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180050A88 (CClassicWindowManager--ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v9; // [rsp+38h] [rbp-38h]
  _QWORD *v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+38h] BYREF

  v13 = a3;
  v8[1] = -2LL;
  CClassicWindowManager::GetRootOwner(a1, &v14, a2);
  v4 = lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(&v13, &v14);
  if ( v4 )
  {
    v5 = v14;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14) )
    {
      v8[0] = &v13;
      v7 = v5;
      *(_QWORD *)&v9 = a1;
      *((_QWORD *)&v9 + 1) = &v7;
      v10 = v8;
      v11 = v9;
      v12 = v8;
      v4 = CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___(a1, &v11);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v4;
}
