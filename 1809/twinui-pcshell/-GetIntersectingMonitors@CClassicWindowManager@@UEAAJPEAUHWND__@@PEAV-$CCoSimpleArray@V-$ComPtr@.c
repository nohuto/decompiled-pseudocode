/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x18004F720
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180050088 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180050768 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18005F980 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x180104AD0 (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(__int64 a1, __int64 a2, LPVOID *a3)
{
  CClassicWindowManager *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r13d
  int App; // edi
  __int64 v10; // r8
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  char *v15; // rcx
  __int64 *v16; // rdx
  unsigned __int64 v17; // rbx
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  char *v19; // [rsp+50h] [rbp-20h]
  void *v20; // [rsp+58h] [rbp-18h]
  void *v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+58h] BYREF

  v6 = (CClassicWindowManager *)(a1 - 72);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v22 = 0LL;
  App = 0;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v22 = 0LL;
    v23 = a2;
    App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
            a1 + 112,
            &v23,
            v10,
            &v24);
    if ( App >= 0 )
    {
      v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 120) + 8 * v24);
      App = (**v11)(v11, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v22);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v22, *(__int64 **)(a1 + 120));
  }
  pv = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( App < 0 )
  {
    if ( App == -2147319765 )
    {
      App = CClassicWindowManager::_EnsureMonitorManager(v6);
      if ( App < 0 )
        goto LABEL_8;
      v24 = 0LL;
      v13 = *(_QWORD *)(a1 + 200);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      App = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v13 + 88LL))(
              v13,
              a2,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &v24);
      if ( App >= 0 )
      {
        v14 = v24;
        v23 = v24;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
        if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                    &pv,
                    v19 + 1) >= 0 )
        {
          v15 = v19++;
          v16 = (__int64 *)((char *)pv + 8 * (_QWORD)(v15 + 1) - 8);
          if ( v16 )
          {
            *v16 = 0LL;
            if ( v16 != &v23 )
            {
              *v16 = v14;
              v23 = 0LL;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    }
  }
  else
  {
    CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___(v6, v22, &pv);
  }
  if ( App >= 0 )
  {
    *a3 = pv;
    a3[2] = v20;
    a3[1] = v19;
    a3[3] = v21;
    pv = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v21 = 0LL;
  }
LABEL_8:
  if ( pv )
  {
    v17 = 0LL;
    if ( v19 )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)pv + 8 * v17++);
      while ( v17 < (unsigned __int64)v19 );
    }
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v19 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)App;
}
