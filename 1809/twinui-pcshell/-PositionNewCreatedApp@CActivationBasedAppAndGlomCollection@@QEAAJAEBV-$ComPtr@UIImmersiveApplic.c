/*
 * XREFs of ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180046C64
 * Callers:
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180046A3C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800ECE10 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180046FD0 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___ @ 0x180047154 (CIAMGlobals--QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18005C7C4 (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@PEA_K@Z @ 0x180070780 (--$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@-$CTSimpleArray@VCGlomColle.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180073254 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180079D10 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x1800F1A7C (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
        CActivationBasedAppAndGlomCollection *this,
        _QWORD *a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // rdi
  unsigned __int64 v7; // r15
  int GlomCollection; // ebx
  int v9; // ebx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v22; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v23[2]; // [rsp+28h] [rbp-38h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+50h]
  unsigned __int64 v30; // [rsp+B8h] [rbp+58h] BYREF

  v29 = a3;
  v23[1] = -2LL;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
  v6 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  GlomCollection = (**v5)(v5, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v28);
  if ( GlomCollection >= 0 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    *(_QWORD *)&v25 = -1LL;
    GlomCollection = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v28 + 32LL))(v28, pv);
    if ( GlomCollection >= 0 )
    {
      GlomCollection = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                         this,
                         (const unsigned __int16 *)pv[0],
                         &v22,
                         &v30);
      v7 = v30;
      v6 = v22;
    }
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *(_QWORD *)&v25 = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  if ( GlomCollection < 0 )
  {
    *(_OWORD *)pv = 0LL;
    v25 = 0LL;
    v26 = 2;
    v9 = CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::_Add<CActivationBasedAppAndGlomCollection::CGlomCollection &&>(
           (char *)this + 40,
           pv,
           &v30);
    v7 = v30;
    if ( v9 >= 0 )
      v6 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v30);
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll(pv);
    if ( v9 < 0 )
      goto LABEL_49;
  }
  v10 = *((_QWORD *)v6 + 1);
  v9 = 0;
  if ( v10 + 1 <= *((_QWORD *)v6 + 3)
    || (v9 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               v6,
               v10 + 1),
        v9 >= 0) )
  {
    v11 = *((_QWORD *)v6 + 1);
    if ( v10 < v11 )
      memmove_0((void *)(*(_QWORD *)v6 + 8 * v10 + 8), (const void *)(*(_QWORD *)v6 + 8 * v10), 8 * (v11 - v10));
    *((_QWORD *)v6 + 1) = v10 + 1;
    v12 = (_QWORD *)(*(_QWORD *)v6 + 8 * v10);
    if ( v12 )
    {
      v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
      *v12 = *a2;
      if ( v13 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[1])(v13);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 160LL))(*a2);
    if ( v14 >= *((_DWORD *)v6 + 8) )
      *((_DWORD *)v6 + 8) = v14 + 1;
  }
  if ( v9 < 0 )
    goto LABEL_49;
  v9 = 0;
  v15 = *((_QWORD *)this + 2);
  if ( v15 != *((_QWORD *)this + 4)
    || (v9 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               (char *)this + 8,
               v15 + 1),
        v9 >= 0) )
  {
    v16 = (_QWORD *)(*((_QWORD *)this + 1) + 8 * (*((_QWORD *)this + 2))++);
    if ( v16 )
    {
      v17 = *a2;
      *v16 = *a2;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  if ( v9 < 0 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      v6,
      *((_QWORD *)v6 + 1) - 1LL);
  }
  else
  {
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    v9 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, unsigned __int64 *))*a2)(
           *a2,
           &GUID_8b14e88b_5663_4caf_b196_c31479262831,
           &v30);
    if ( v9 >= 0 )
    {
      v18 = 0LL;
      v28 = 0LL;
      v19 = v29;
      if ( v29 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        v20 = (**v19)(v19, &GUID_00000000_0000_0000_c000_000000000046, &v28);
        v9 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AA,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v20,
            (int)v22);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          return (unsigned int)v9;
        }
        v18 = v28;
      }
      v22 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)v30;
      if ( v30 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v30 + 8LL))(v30);
        v18 = v28;
      }
      v23[0] = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v9 = CIAMGlobals::QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___(v18, &v22);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  }
  if ( v9 < 0 )
  {
LABEL_49:
    if ( v6 && !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        v7);
  }
  return (unsigned int)v9;
}
