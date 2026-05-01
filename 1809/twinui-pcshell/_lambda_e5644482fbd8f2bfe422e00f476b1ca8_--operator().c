/*
 * XREFs of _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180050828
 * Callers:
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180050768 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180050A88 (CClassicWindowManager--ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___.c)
 * Callees:
 *     ??$FindEx@VCImmersiveMonitorFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveMonitorFinder@@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18005091C (--$FindEx@VCImmersiveMonitorFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18005F980 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(_QWORD *a1, __int64 *a2)
{
  char v3; // di
  __int64 v4; // rbx
  __int64 v5; // rdx
  bool v6; // bl
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _BYTE v11[8]; // [rsp+38h] [rbp-8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v3 = 0;
  v12 = 0LL;
  v4 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v6 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, &v12) >= 0 )
  {
    v13 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v3 = 1;
    if ( (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::FindEx<CImmersiveMonitorFinder>(
                         *a1,
                         v5,
                         &v13,
                         v11) == -2147319765 )
      v6 = 1;
  }
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( v6 )
  {
    v7 = (_QWORD *)*a1;
    v8 = *(_QWORD *)(*a1 + 8LL);
    if ( v8 != *(_QWORD *)(*a1 + 24LL)
      || (int)CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                *a1,
                v8 + 1) >= 0 )
    {
      ++v7[1];
      v9 = (_QWORD *)(*v7 + 8LL * v7[1] - 8);
      if ( *v7 + 8LL * v7[1] != 8 )
      {
        *v9 = v12;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return 1;
}
