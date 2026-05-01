/*
 * XREFs of ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800112A8
 * Callers:
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E9C4 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18012F4F0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180011620 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___ @ 0x1800117A4 (CIAMGlobals--QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18006643C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@PEA_K@Z @ 0x180078918 (--$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@-$CTSimpleArray@VCGlomColle.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800799AC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18007FE38 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x1801358EC (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
        CActivationBasedAppAndGlomCollection *this,
        __int64 (__fastcall ****a2)(__int64, GUID *, unsigned __int64 *),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD **))
{
  __int64 (__fastcall ***v5)(__int64, GUID *, unsigned __int64 *); // rdi
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // rsi
  unsigned __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, GUID *, unsigned __int64 *); // rbx
  int GlomCollection; // ebx
  __int64 v10; // rax
  int v11; // ebx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 (__fastcall ****v14)(__int64, GUID *, unsigned __int64 *); // rdx
  __int64 (__fastcall ***v15)(__int64, GUID *, unsigned __int64 *); // rcx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 (__fastcall ****v18)(__int64, GUID *, unsigned __int64 *); // rdx
  __int64 (__fastcall ***v19)(__int64, GUID *, unsigned __int64 *); // rcx
  __int64 (__fastcall ***v20)(__int64, GUID *, unsigned __int64 *); // rdi
  __int64 (__fastcall *v21)(__int64, GUID *, unsigned __int64 *); // rbx
  _QWORD *v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v24)(_QWORD, GUID *, _QWORD **); // rbx
  int v25; // eax
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v27; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+28h] [rbp-38h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v30; // [rsp+48h] [rbp-18h]
  int v31; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  _QWORD *v33; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, _QWORD **); // [rsp+B0h] [rbp+50h]
  unsigned __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v34 = a3;
  v28[1] = -2LL;
  v5 = *a2;
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v8 = **v5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  GlomCollection = v8((__int64)v5, &GUID_8b14e88b_5663_4caf_b196_c31479262831, (unsigned __int64 *)&v33);
  if ( GlomCollection >= 0 )
  {
    pv[0] = 0LL;
    pv[1] = 0LL;
    *(_QWORD *)&v30 = 0LL;
    v10 = *v33;
    pv[1] = (LPVOID)-1LL;
    *(_QWORD *)&v30 = -1LL;
    GlomCollection = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *))(v10 + 32))(v33, pv);
    if ( GlomCollection >= 0 )
    {
      GlomCollection = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                         this,
                         (const unsigned __int16 *)pv[0],
                         &v27,
                         &v35);
      v7 = v35;
      v6 = v27;
    }
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *(_QWORD *)&v30 = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  if ( GlomCollection < 0 )
  {
    *(_OWORD *)pv = 0LL;
    v30 = 0LL;
    v31 = 2;
    v11 = CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::_Add<CActivationBasedAppAndGlomCollection::CGlomCollection &&>(
            (char *)this + 40,
            pv,
            &v35);
    v7 = v35;
    if ( v11 >= 0 )
      v6 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v35);
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll(pv);
    if ( v11 < 0 )
      goto LABEL_49;
  }
  v12 = *((_QWORD *)v6 + 1);
  v11 = 0;
  if ( v12 + 1 <= *((_QWORD *)v6 + 3)
    || (v11 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                v6,
                v12 + 1),
        v11 >= 0) )
  {
    v13 = *((_QWORD *)v6 + 1);
    if ( v12 < v13 )
      memmove_0((void *)(*(_QWORD *)v6 + 8 * v12 + 8), (const void *)(*(_QWORD *)v6 + 8 * v12), 8 * (v13 - v12));
    *((_QWORD *)v6 + 1) = v12 + 1;
    v14 = (__int64 (__fastcall ****)(__int64, GUID *, unsigned __int64 *))(*(_QWORD *)v6 + 8 * v12);
    if ( v14 )
    {
      v15 = *a2;
      *v14 = *a2;
      if ( v15 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, unsigned __int64 *)))(*v15)[1])(v15);
    }
    v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, unsigned __int64 *)))(**a2)[20])(*a2);
    if ( v16 >= *((_DWORD *)v6 + 8) )
      *((_DWORD *)v6 + 8) = v16 + 1;
  }
  if ( v11 < 0 )
    goto LABEL_49;
  v11 = 0;
  v17 = *((_QWORD *)this + 2);
  if ( v17 != *((_QWORD *)this + 4)
    || (v11 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                (char *)this + 8,
                v17 + 1),
        v11 >= 0) )
  {
    v18 = (__int64 (__fastcall ****)(__int64, GUID *, unsigned __int64 *))(*((_QWORD *)this + 1)
                                                                         + 8 * (*((_QWORD *)this + 2))++);
    if ( v18 )
    {
      v19 = *a2;
      *v18 = *a2;
      if ( v19 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, unsigned __int64 *)))(*v19)[1])(v19);
    }
  }
  if ( v11 < 0 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      v6,
      *((_QWORD *)v6 + 1) - 1LL);
  }
  else
  {
    v35 = 0LL;
    v20 = *a2;
    v21 = ***a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    v11 = v21((__int64)v20, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v35);
    if ( v11 >= 0 )
    {
      v22 = 0LL;
      v33 = 0LL;
      v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
      if ( v34 )
      {
        v24 = **v34;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
        v25 = v24(v23, &GUID_00000000_0000_0000_c000_000000000046, &v33);
        v11 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1B0,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v25,
            (int)v27);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
          return (unsigned int)v11;
        }
        v22 = v33;
      }
      v27 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)v35;
      if ( v35 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v35 + 8LL))(v35);
        v22 = v33;
      }
      v28[0] = v22;
      if ( v22 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22);
      v11 = CIAMGlobals::QueueViewManagementTask__lambda_e3476b40c3599fe2d8be82ea48422b91___(v22, &v27);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  }
  if ( v11 < 0 )
  {
LABEL_49:
    if ( v6 && !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        v7);
  }
  return (unsigned int)v11;
}
