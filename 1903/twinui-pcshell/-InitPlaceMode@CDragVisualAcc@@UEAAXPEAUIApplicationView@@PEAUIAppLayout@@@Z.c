/*
 * XREFs of ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x1803E0060
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1802E3370 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18038A010 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_18038A010.c)
 *     ??$?0VCPlaceModeButtonAcc@@@?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCPlaceModeButtonAcc@@@12@PEAPEAX@Z @ 0x1803DED4C (--$-0VCPlaceModeButtonAcc@@@-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV-$ComPtr@VCP.c)
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUtagRECT@@@Z @ 0x1803DED7C (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ??0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEBUtagRECT@@@Z @ 0x1803DF024 (--0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV-$NativeString@V-$CoTaskMemPolicy@G@Intern.c)
 *     ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x1803DF324 (-Attach@-$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1803E04F0 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18040EA10 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18040F2D0 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall CDragVisualAcc::InitPlaceMode(
        unsigned __int64 this,
        struct IApplicationView *a2,
        struct IAppLayout *a3)
{
  struct IRawElementProviderSimpleVtbl *v5; // rcx
  int v7; // r15d
  __int128 *v8; // rax
  unsigned __int16 **v9; // r8
  __int64 v10; // rbx
  int v11; // esi
  volatile signed __int32 *v12; // rbx
  void *v13; // r8
  struct IRawElementProviderSimpleVtbl *v14; // rdx
  __int64 *v15; // rdx
  __int64 v16; // rcx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v17; // rdx
  int v18; // r12d
  int v19; // eax
  int v20; // edi
  unsigned __int16 **v21; // r8
  int ViewTitle; // edi
  volatile signed __int32 *v23; // rbx
  void *v24; // rax
  volatile signed __int32 *v25; // rax
  void *v26; // r8
  struct IRawElementProviderSimpleVtbl *v27; // rdx
  __int64 *v28; // rdx
  IRawElementProviderSimple *v29; // rcx
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rax
  bool v31; // sf
  __int128 *v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  IRawElementProviderSimple *v34; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42[4]; // [rsp+80h] [rbp-80h] BYREF
  char v43[16]; // [rsp+A0h] [rbp-60h] BYREF
  ApplicationViewHelpers *v44; // [rsp+B0h] [rbp-50h]
  __int128 v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+D8h] [rbp-28h]
  __int128 v47; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v49[40]; // [rsp+100h] [rbp+0h] BYREF

  v5 = *(struct IRawElementProviderSimpleVtbl **)(this + 32);
  v7 = 0;
  v33 = 0;
  v8 = (__int128 *)(*((__int64 (__fastcall **)(struct IRawElementProviderSimpleVtbl *, __int128 *))v5->QueryInterface
                    + 15))(
                     v5,
                     &v47);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v48 = *v8;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
  v40 = -1LL;
  v41 = -1LL;
  if ( ApplicationViewHelpers::GetViewTitle(a2, (struct IApplicationView *)&v39, v9) >= 0 )
  {
    v10 = v39;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            (__int64)&v36,
            &_ImageBase,
            2101LL,
            v39);
    if ( v11 >= 0 )
    {
      v32 = &v48;
      v34 = (IRawElementProviderSimple *)(this - 32);
      Microsoft::WRL::Details::Make<CPlaceModeButtonAcc,CDragVisualAcc *,unsigned int &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,tagRECT *>(
        &v35,
        &v34,
        &v33,
        (int)&v36,
        (__int64 *)&v32);
      v12 = v35;
      if ( v35 )
      {
        Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v32, &v35);
        v11 = 0;
        v14 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
        if ( v14 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
          && (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      this + 176,
                      (unsigned __int64)&v14->QueryInterface + 1,
                      v13),
              v11 < 0)
          || (++*(_QWORD *)(this + 184),
              (v15 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
          || (*v15 = 0LL, v15 == (__int64 *)&v32) )
        {
          v16 = (__int64)v32;
        }
        else
        {
          v16 = 0LL;
          *v15 = (__int64)v32;
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v7 = 1;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(v12);
      }
      else
      {
        v11 = -2147024882;
      }
      v10 = v39;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a3 + 24LL))(a3, v49);
      v18 = (int)ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v49, v17) / 2;
      v19 = (*(__int64 (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 72LL))(a3);
      v32 = 0LL;
      v20 = v19;
      v33 = v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      if ( (*(int (__fastcall **)(struct IAppLayout *, __int128 **))(*(_QWORD *)a3 + 128LL))(a3, &v32) >= 0 )
      {
        do
        {
          if ( (*(int (__fastcall **)(__int128 *, __int64, char *))(*(_QWORD *)v32 + 24LL))(v32, 1LL, v43) < 0 )
            break;
          v47 = v45;
          if ( v46 )
            LODWORD(v47) = v45 - v18;
          if ( v46 != v20 - 1 )
            DWORD2(v47) = DWORD2(v45) + v18;
          v36 = 0LL;
          v37 = 0LL;
          v38 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
          v37 = -1LL;
          v38 = -1LL;
          ViewTitle = ApplicationViewHelpers::GetViewTitle(v44, (struct IApplicationView *)&v36, v21);
          if ( ViewTitle >= 0 )
          {
            memset(v42, 0, 24);
            ViewTitle = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                          v42,
                          &_ImageBase,
                          2102LL,
                          v36,
                          v10);
            if ( ViewTitle >= 0 )
            {
              v23 = 0LL;
              v35 = 0LL;
              v24 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
              if ( v24
                && (v25 = (volatile signed __int32 *)CPlaceModeButtonAcc::CPlaceModeButtonAcc(
                                                       (__int64)v24,
                                                       this & -(__int64)(this != 32),
                                                       v7,
                                                       v42,
                                                       &v47),
                    Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(&v35, v25),
                    (v23 = v35) != 0LL) )
              {
                Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v34, &v35);
                ViewTitle = 0;
                v27 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
                if ( v27 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
                  && (ViewTitle = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                                    this + 176,
                                    (unsigned __int64)&v27->QueryInterface + 1,
                                    v26),
                      ViewTitle < 0)
                  || (++*(_QWORD *)(this + 184),
                      (v28 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
                  || (*v28 = 0LL, v28 == (__int64 *)&v34) )
                {
                  v29 = v34;
                }
                else
                {
                  v29 = 0LL;
                  *v28 = (__int64)v34;
                  v34 = 0LL;
                }
                if ( v29 )
                {
                  lpVtbl = v29->lpVtbl;
                  v34 = 0LL;
                  ((void (__fastcall *)(IRawElementProviderSimple *))lpVtbl->Release)(v29);
                }
                ++v7;
              }
              else
              {
                ViewTitle = -2147024882;
              }
              if ( v23 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(v23);
              v10 = v39;
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v42);
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
          v31 = ViewTitle < 0;
          v20 = v33;
        }
        while ( !v31 );
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    }
  }
  *(_DWORD *)(this + 16) = 2;
  UiaRaiseStructureChangedEvent((IRawElementProviderSimple *)(this - 32), StructureChangeType_ChildrenBulkAdded, 0LL, 0);
  UiaRaiseAutomationEvent((IRawElementProviderSimple *)(this - 32), 20002);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
}
