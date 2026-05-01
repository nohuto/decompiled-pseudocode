/*
 * XREFs of ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x180302404
 * Callers:
 *     ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1802F652C (--$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializ.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002A0F0 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___ @ 0x1803011F4 (ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c2119f3dd10f8dbad5.c)
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___ @ 0x1803012E4 (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPoli_ea_1803012E4.c)
 *     ??$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z @ 0x180301418 (--$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x18030159C (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x180301630 (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x180313E64 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 */

__int64 __fastcall CSwitchItemElement::RuntimeClassInitialize(
        CSwitchItemElement *this,
        const struct CSwitchItemElement::SwitchItemElementInitializeArgs *a2)
{
  _OWORD *v2; // rax
  __int64 v4; // rdx
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int64 *v9; // r13
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rbx
  char v16; // r15
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 *v21; // rbx
  const struct ThumbnailSizeMetrics *v22; // rdi
  int Instance; // eax
  __int64 v24; // rdx
  int v25; // edi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 *v29; // r12
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // r8
  __int64 v37[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  __int64 v39; // [rsp+B0h] [rbp+48h] BYREF
  struct IInspectable *v40; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(_OWORD **)a2;
  v4 = 2LL;
  v6 = (_OWORD *)((char *)this + 288);
  do
  {
    *v6 = *v2;
    v6[1] = v2[1];
    v6[2] = v2[2];
    v6[3] = v2[3];
    v6[4] = v2[4];
    v6[5] = v2[5];
    v6[6] = v2[6];
    v6 += 8;
    v7 = v2[7];
    v2 += 8;
    *(v6 - 1) = v7;
    --v4;
  }
  while ( v4 );
  *v6 = *v2;
  *((_QWORD *)v6 + 2) = *((_QWORD *)v2 + 2);
  v8 = *((_QWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)v8;
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)(v8 + 16);
  *((_QWORD *)this + 35) = *(_QWORD *)(v8 + 32);
  *((_QWORD *)this + 82) = *((_QWORD *)this + 34);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 73, *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 72, *((_QWORD *)a2 + 5));
  v9 = (__int64 *)((char *)this + 568);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 71, *((_QWORD *)a2 + 7));
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v41);
  v42 = (__int64)&v41;
  v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v42);
  v11 = Microsoft::WRL::AsWeak<IIconLoaderInternal>(
          *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4),
          v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v15 = *v9;
    v16 = 1;
    v42 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v15 + 112LL))(
            v15,
            0LL,
            v42,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 88);
    v12 = v17;
    if ( v17 < 0 )
    {
      v13 = (unsigned int)v17;
      v14 = 34LL;
      goto LABEL_11;
    }
    v18 = *v9;
    v42 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 78);
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v18 + 112LL))(
            v18,
            *((_QWORD *)this + 11),
            v42,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 624);
    v12 = v19;
    if ( v19 < 0 )
    {
      v13 = (unsigned int)v19;
      v14 = 37LL;
      goto LABEL_11;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 78) + 232LL))(*((_QWORD *)this + 78), 0LL);
    v42 = (__int64)this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 83);
    v20 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
            (_QWORD *)this + 83,
            &v42);
    v12 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
        (const char *)(unsigned int)v20);
      v13 = v12;
      v14 = 40LL;
      goto LABEL_11;
    }
    v21 = (__int64 *)*((_QWORD *)this + 83);
    v37[0] = (__int64)v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v37);
    v22 = *(const struct ThumbnailSizeMetrics **)a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 76);
    Instance = Microsoft::WRL::Details::MakeAndInitialize<SwitchItemThumbnailElement,IMultitaskingViewElement,ThumbnailSizeMetrics const &,ISwitchThumbnailFactory * const &,ISwitchItem * const &>(
                 (_QWORD *)this + 76,
                 v22,
                 (struct ISwitchThumbnailFactory **)a2 + 7,
                 (struct ISwitchItem **)a2 + 3);
    v12 = Instance;
    if ( Instance < 0 )
    {
      v24 = 54LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_38;
    }
    Instance = (*(__int64 (__fastcall **)(CSwitchItemElement *, _QWORD))(*(_QWORD *)this + 64LL))(
                 this,
                 *((_QWORD *)this + 76));
    v12 = Instance;
    if ( Instance < 0 )
    {
      v24 = 55LL;
      goto LABEL_21;
    }
    v25 = *((_DWORD *)a2 + 2);
    if ( v25 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 75);
      Instance = CGlyphButtonElement_CreateInstance(
                   59579LL,
                   v25 == 2,
                   (char *)this + 440,
                   13017LL,
                   v21,
                   *((_QWORD *)a2 + 6),
                   *((_QWORD *)a2 + 7));
      v12 = Instance;
      if ( Instance < 0 )
      {
        v24 = 74LL;
        goto LABEL_21;
      }
      Instance = (*(__int64 (__fastcall **)(CSwitchItemElement *, _QWORD))(*(_QWORD *)this + 64LL))(
                   this,
                   *((_QWORD *)this + 75));
      v12 = Instance;
      if ( Instance < 0 )
      {
        v24 = 76LL;
        goto LABEL_21;
      }
    }
    v40 = 0LL;
    v39 = 0LL;
    v26 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)&v41, &v40);
    v12 = v26;
    if ( v26 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
      v26 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))v40->lpVtbl->QueryInterface)(
              v40,
              &GUID_ee3a7544_b067_4a8c_8ed8_da1d4e9bfd02,
              &v39);
      v12 = v26;
      if ( v26 >= 0 )
      {
        if ( !v39 )
        {
          v12 = -2147418113;
          v27 = 85LL;
          v28 = 2147549183LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
            (const char *)v28);
          goto LABEL_37;
        }
        v29 = (__int64 *)((char *)this + 584);
        v26 = (*(__int64 (__fastcall **)(_QWORD, char *, char *, _QWORD, __int64))(**((_QWORD **)this + 73) + 72LL))(
                *((_QWORD *)this + 73),
                (char *)this + 336,
                (char *)this + 344,
                *((unsigned int *)a2 + 16),
                v39);
        v12 = v26;
        if ( v26 >= 0 )
        {
          v30 = *v29;
          v42 = (__int64)v21;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v42);
          v31 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
          v26 = ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___(
                  v31,
                  &v42,
                  v32);
          v12 = v26;
          if ( v26 >= 0 )
          {
            v33 = *v29;
            v42 = (__int64)v21;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v42);
            v34 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33);
            v26 = ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___(
                    v34,
                    &v42,
                    v35);
            v12 = v26;
            if ( v26 >= 0 )
            {
              v16 = 0;
              v12 = 0;
LABEL_37:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
              if ( !v16 )
              {
LABEL_39:
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37);
                goto LABEL_40;
              }
LABEL_38:
              (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
              goto LABEL_39;
            }
            v27 = 106LL;
          }
          else
          {
            v27 = 98LL;
          }
        }
        else
        {
          v27 = 89LL;
        }
      }
      else
      {
        v27 = 84LL;
      }
    }
    else
    {
      v27 = 83LL;
    }
    v28 = (unsigned int)v26;
    goto LABEL_35;
  }
  v13 = (unsigned int)v11;
  v14 = 32LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
    (const char *)v13);
LABEL_40:
  Microsoft::WRL::WeakRef::~WeakRef(&v41);
  return v12;
}
