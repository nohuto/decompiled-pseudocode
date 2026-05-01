/*
 * XREFs of ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180148AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180052C6C (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x180052F88 (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18006E290 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x1800846AC (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___ @ 0x180147F48 (CClassicWindowManager--ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::EnumerateOwnershipTree(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        unsigned int *a3,
        HWND **a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  void *v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  HWND *v18; // [rsp+20h] [rbp-59h] BYREF
  __int64 v19; // [rsp+28h] [rbp-51h]
  __int64 v20; // [rsp+30h] [rbp-49h]
  __int64 v21; // [rsp+38h] [rbp-41h]
  char *v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v24; // [rsp+58h] [rbp-21h]
  char **v25; // [rsp+68h] [rbp-11h]
  __int64 v26; // [rsp+70h] [rbp-9h]
  __int128 v27; // [rsp+80h] [rbp+7h] BYREF
  char **v28; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v30; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+7Fh] BYREF

  v26 = -2LL;
  *a3 = 0;
  *a4 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(
    &v31,
    (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v7 = v31;
  CClassicWindowManager::GetRootOwner(v8, &v30, v31);
  v9 = v30;
  if ( v30 != v7 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 24LL))(v30);
    v12 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
            (__int64)&v18,
            v19 + 1,
            v11);
    if ( v12 >= 0 )
    {
      v13 = v19++;
      v14 = (__int64 *)&v18[v13];
      if ( v14 )
        *v14 = v10;
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8C5,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
        (const char *)(unsigned int)v12);
  }
  v22 = (char *)this - 120;
  v23[0] = v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v23);
  v23[1] = (__int64)&v18;
  v32 = v9;
  *(_QWORD *)&v24 = (char *)this - 120;
  *((_QWORD *)&v24 + 1) = &v32;
  v25 = &v22;
  v27 = v24;
  v28 = &v22;
  CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___((__int64)this - 120, (__int64)&v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = v19;
  if ( v19 )
  {
    *a4 = v18;
    v18 = 0LL;
    v19 = 0LL;
    v21 = 0LL;
    *a3 = v15;
  }
  v16 = *a4 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  return v16;
}
