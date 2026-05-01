/*
 * XREFs of ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180073260
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180156C30 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        int a3)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  RTL_SRWLOCK *v13; // rdi
  int v14; // eax
  char *Ptr; // rdx
  struct IUnknown **v16; // r8
  BOOL v17; // edi
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  struct IUnknown *v19; // [rsp+28h] [rbp-38h]
  __int64 v20[6]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IUnknown *v22; // [rsp+98h] [rbp+38h] BYREF

  v20[1] = -2LL;
  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v5 = a1 + 23;
    v20[0] = (__int64)&a1[23];
    AcquireSRWLockExclusive(a1 + 23);
    v22 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    v13 = a1 + 24;
    v14 = 0;
    Ptr = (char *)v13[1].Ptr;
    if ( Ptr != v13[3].Ptr
      || (v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  v13,
                  Ptr + 1,
                  v11,
                  v12),
          v14 >= 0) )
    {
      v16 = (struct IUnknown **)((char *)v13->Ptr + 8 * (__int64)v13[1].Ptr++);
      if ( v16 )
      {
        *v16 = 0LL;
        if ( v16 != &v22 )
        {
          *v16 = a2;
          v22 = 0LL;
        }
      }
    }
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  }
  else
  {
    v5 = a1 + 23;
    v20[2] = (__int64)&a1[23];
    AcquireSRWLockExclusive(a1 + 23);
    v19 = a2;
    v20[0] = 0LL;
    v6 = a1 + 24;
    v7 = 0LL;
    v8 = 0LL;
    if ( a1[25].Ptr )
    {
      v20[3] = (__int64)&v18;
      v20[4] = (__int64)&v22;
      while ( 1 )
      {
        v18 = 0LL;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
        v22 = (struct IUnknown *)*((_QWORD *)v6->Ptr + v8);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
        v17 = SHIsSameObject(v22, v19) == 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        if ( !v17 )
          break;
        if ( (PVOID)++v8 >= v6[1].Ptr )
          goto LABEL_5;
      }
      v7 = v8;
      v9 = 0;
    }
    else
    {
LABEL_5:
      v9 = -2147319765;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    v10 = -1LL;
    if ( v9 >= 0 )
      v10 = v7;
    if ( v10 != -1 )
      CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(v6);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
