/*
 * XREFs of ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18037A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180289C20 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180329A50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180329A50.c)
 *     ??$?0VCPlaceModeButtonAcc@@@?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCPlaceModeButtonAcc@@@12@PEAPEAX@Z @ 0x180378F1C (--$-0VCPlaceModeButtonAcc@@@-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV-$ComPtr@VCP.c)
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUtagRECT@@@Z @ 0x180378F4C (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ??0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEBUtagRECT@@@Z @ 0x1803791F4 (--0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV-$NativeString@V-$CoTaskMemPolicy@G@Intern.c)
 *     ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x1803794A4 (-Attach@-$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18037A678 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803AC76C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD030 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
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
  signed int v11; // edi
  __int64 *v12; // rdx
  __int64 v13; // rbx
  void *v14; // r8
  struct IRawElementProviderSimpleVtbl *v15; // rdx
  __int64 v16; // rcx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v17; // rdx
  int v18; // r12d
  int v19; // eax
  int v20; // edi
  unsigned __int16 **v21; // r8
  signed int ViewTitle; // edi
  __int64 v23; // rbx
  void *v24; // rax
  __int64 *v25; // rdx
  volatile int *v26; // rax
  char v27; // cl
  void *v28; // r8
  struct IRawElementProviderSimpleVtbl *v29; // rdx
  IRawElementProviderSimple *v30; // rcx
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rax
  bool v32; // sf
  __int128 *v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  IRawElementProviderSimple *v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43[4]; // [rsp+80h] [rbp-80h] BYREF
  char v44[16]; // [rsp+A0h] [rbp-60h] BYREF
  ApplicationViewHelpers *v45; // [rsp+B0h] [rbp-50h]
  __int128 v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+D8h] [rbp-28h]
  __int128 v48; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v50[40]; // [rsp+100h] [rbp+0h] BYREF

  v5 = *(struct IRawElementProviderSimpleVtbl **)(this + 32);
  v7 = 0;
  v34 = 0;
  v8 = (__int128 *)(*((__int64 (__fastcall **)(struct IRawElementProviderSimpleVtbl *, __int128 *))v5->QueryInterface
                    + 15))(
                     v5,
                     &v48);
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v49 = *v8;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v40);
  v41 = -1LL;
  v42 = -1LL;
  if ( ApplicationViewHelpers::GetViewTitle(a2, (struct IApplicationView *)&v40, v9) >= 0 )
  {
    v10 = v40;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            (__int64)&v37,
            &_ImageBase,
            2101LL,
            v40);
    if ( v11 >= 0 )
    {
      v33 = &v49;
      v35 = (IRawElementProviderSimple *)(this - 32);
      Microsoft::WRL::Details::Make<CPlaceModeButtonAcc,CDragVisualAcc *,unsigned int &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,tagRECT *>(
        &v36,
        &v35,
        &v34,
        (int)&v37,
        (__int64 *)&v33);
      v13 = v36;
      v11 = v36 == 0 ? 0x8007000E : 0;
      if ( v36 )
      {
        Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v33, &v36);
        v11 = 0;
        v15 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
        if ( v15 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
          && (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      this + 176,
                      (unsigned __int64)&v15->QueryInterface + 1,
                      v14),
              v11 < 0)
          || (++*(_QWORD *)(this + 184),
              (v12 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
          || (*v12 = 0LL, v12 == (__int64 *)&v33) )
        {
          v16 = (__int64)v33;
        }
        else
        {
          v16 = 0LL;
          *v12 = (__int64)v33;
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v7 = 1;
      }
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
          v13,
          (volatile int *)v12);
      v10 = v40;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v37);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a3 + 24LL))(a3, v50);
      v18 = (int)ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v50, v17) / 2;
      v19 = (*(__int64 (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 72LL))(a3);
      v33 = 0LL;
      v20 = v19;
      v34 = v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      if ( (*(int (__fastcall **)(struct IAppLayout *, __int128 **))(*(_QWORD *)a3 + 128LL))(a3, &v33) >= 0 )
      {
        do
        {
          if ( (*(int (__fastcall **)(__int128 *, __int64, char *))(*(_QWORD *)v33 + 24LL))(v33, 1LL, v44) < 0 )
            break;
          v48 = v46;
          if ( v47 )
            LODWORD(v48) = v46 - v18;
          if ( v47 != v20 - 1 )
            DWORD2(v48) = DWORD2(v46) + v18;
          v37 = 0LL;
          v38 = 0LL;
          v39 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v37);
          v38 = -1LL;
          v39 = -1LL;
          ViewTitle = ApplicationViewHelpers::GetViewTitle(v45, (struct IApplicationView *)&v37, v21);
          if ( ViewTitle >= 0 )
          {
            memset(v43, 0, 24);
            ViewTitle = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                          v43,
                          &_ImageBase,
                          2102LL,
                          v37,
                          v10);
            if ( ViewTitle >= 0 )
            {
              v23 = 0LL;
              v36 = 0LL;
              v24 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
              if ( !v24
                || (v26 = (volatile int *)CPlaceModeButtonAcc::CPlaceModeButtonAcc(
                                            (__int64)v24,
                                            this & -(__int64)(this != 32),
                                            v7,
                                            v43,
                                            &v48),
                    Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(&v36, v26),
                    v23 = v36,
                    v27 = 1,
                    !v36) )
              {
                v27 = 0;
              }
              ViewTitle = v27 == 0 ? 0x8007000E : 0;
              if ( v27 )
              {
                Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v35, &v36);
                ViewTitle = 0;
                v29 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
                if ( v29 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
                  && (ViewTitle = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                                    this + 176,
                                    (unsigned __int64)&v29->QueryInterface + 1,
                                    v28),
                      ViewTitle < 0)
                  || (++*(_QWORD *)(this + 184),
                      (v25 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
                  || (*v25 = 0LL, v25 == (__int64 *)&v35) )
                {
                  v30 = v35;
                }
                else
                {
                  v30 = 0LL;
                  *v25 = (__int64)v35;
                  v35 = 0LL;
                }
                if ( v30 )
                {
                  lpVtbl = v30->lpVtbl;
                  v35 = 0LL;
                  ((void (__fastcall *)(IRawElementProviderSimple *))lpVtbl->Release)(v30);
                }
                ++v7;
              }
              if ( v23 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
                  v23,
                  (volatile int *)v25);
              v10 = v40;
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v43);
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v37);
          v32 = ViewTitle < 0;
          v20 = v34;
        }
        while ( !v32 );
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    }
  }
  *(_DWORD *)(this + 16) = 2;
  UiaRaiseStructureChangedEvent((IRawElementProviderSimple *)(this - 32), StructureChangeType_ChildrenBulkAdded, 0LL, 0);
  UiaRaiseAutomationEvent((IRawElementProviderSimple *)(this - 32), 20002);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v40);
}
