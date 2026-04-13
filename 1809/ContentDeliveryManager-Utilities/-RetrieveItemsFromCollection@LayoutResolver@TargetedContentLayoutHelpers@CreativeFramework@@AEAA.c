/*
 * XREFs of ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18009F268
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18009F268 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009F864 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x18009F114 (-GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU-$IMapView.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x18009F268 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800A0C44 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800A146C (--$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AV-$shared_ptr@UIt.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        unsigned int a4)
{
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v7; // rdi
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  HSTRING *v22; // rbx
  __int64 v23; // rdi
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  HSTRING *v26; // rbx
  HSTRING *v27; // rbx
  HSTRING *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rcx
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  __int64 v33; // rbx
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  int v36; // ebx
  __int64 i; // rdx
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v38; // rcx
  int v39; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v40; // rcx
  char v41; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v42[7]; // [rsp+31h] [rbp-E7h] BYREF
  HSTRING *newString; // [rsp+38h] [rbp-E0h] BYREF
  volatile signed __int32 *v44; // [rsp+40h] [rbp-D8h]
  __int64 v45; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-C8h]
  unsigned int v47; // [rsp+58h] [rbp-C0h]
  __int64 v48; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-B0h]
  unsigned int v50; // [rsp+70h] [rbp-A8h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v51; // [rsp+78h] [rbp-A0h] BYREF
  int v52; // [rsp+80h] [rbp-98h] BYREF
  int v53; // [rsp+84h] [rbp-94h] BYREF
  __int64 v54; // [rsp+88h] [rbp-90h] BYREF
  __int64 v55; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v56[2]; // [rsp+98h] [rbp-80h] BYREF
  int v57; // [rsp+A8h] [rbp-70h]
  __int64 v58; // [rsp+B0h] [rbp-68h]
  __int64 v59; // [rsp+B8h] [rbp-60h]
  __int64 v60; // [rsp+C0h] [rbp-58h]
  int v61; // [rsp+C8h] [rbp-50h]
  __int64 v62; // [rsp+D0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v59 = -2LL;
  v7 = this;
  v56[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(*(_QWORD *)a2 + 96LL))(
         a2,
         v56);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_47:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x14A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_48;
  }
  v10 = v56[0];
  v46 = v56[0];
  v47 = 0;
  v48 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v56[0] + 56LL))(v56[0], &v52);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_48:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v11);
LABEL_49:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v16);
LABEL_50:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x150,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v18);
LABEL_51:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x152,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v20);
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x15B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_53;
  }
  v56[1] = v10;
  v57 = v52;
  v13 = 0LL;
  v58 = 0LL;
  v14 = v47;
  while ( (_DWORD)v14 != v57 )
  {
    v15 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v14 = v47;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v46 + 48LL))(v46, v14, &v48);
    v17 = retaddr;
    if ( v16 < 0 )
      goto LABEL_49;
    v54 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 72LL))(v48, &v54);
    v19 = retaddr;
    if ( v18 < 0 )
      goto LABEL_50;
    v42[0] = 0;
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v54 + 48LL))(v54, v42);
    v21 = retaddr;
    if ( v20 < 0 )
      goto LABEL_51;
    if ( v42[0] )
    {
      std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(&newString);
      v22 = newString;
      if ( !a3 || a3 != *newString )
      {
        WindowsDeleteString(*newString);
        *v22 = 0LL;
        WindowsDuplicateString(a3, v22);
        v22 = newString;
      }
      v23 = v48;
      WindowsDeleteString(v22[1]);
      v22[1] = 0LL;
      (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v23 + 48LL))(v23, v22 + 1);
      v45 = 0LL;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 80LL))(v48, &v45);
      v25 = retaddr;
      if ( v24 < 0 )
        goto LABEL_52;
      *((_DWORD *)newString + 5) = a4++;
      v26 = newString;
      *((double *)v26 + 4) = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                               L"collection",
                               v45,
                               &v41);
      *((_BYTE *)newString + 17) = v41 != 0;
      v27 = newString;
      *((double *)v27 + 5) = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                               L"item",
                               v45,
                               &v41);
      *((_BYTE *)newString + 18) = v41 != 0;
      v28 = newString;
      *((double *)v28 + 3) = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                               L"rank",
                               v45,
                               &v41);
      *((_BYTE *)newString + 16) = v41 != 0;
      *((_BYTE *)newString + 48) = 0;
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
        (char *)this + 16,
        &newString);
      if ( *((_BYTE *)newString + 17) )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
          (char *)this + 40,
          &newString);
      if ( v45 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      v29 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        }
        v13 = v58;
      }
    }
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    v14 = ++v47;
    v7 = this;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v30 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v55 = 0LL;
  v31 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(*(_QWORD *)a2 + 88LL))(
          a2,
          &v55);
  v32 = retaddr;
  if ( v31 < 0 )
  {
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v32,
      (void *)0x173,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v31);
    goto LABEL_54;
  }
  v33 = v55;
  v49 = v55;
  v50 = 0;
  v51 = 0LL;
  v34 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v55 + 56LL))(v55, &v53);
  v35 = retaddr;
  if ( v34 < 0 )
  {
LABEL_54:
    wil::details::in1diag3::Throw_Hr(
      v35,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v34);
    JUMPOUT(0x18009F85DLL);
  }
  v60 = v33;
  v36 = v53;
  v61 = v53;
  v62 = 0LL;
  for ( i = v50; (_DWORD)i != v36; i = ++v50 )
  {
    v38 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v38 + 16LL))(v38);
      i = v50;
    }
    v39 = (*(__int64 (__fastcall **)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v49 + 48LL))(
            v49,
            i,
            &v51);
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16A8,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v39);
      goto LABEL_47;
    }
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(v7, v51, a3, a4);
  }
  v40 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v40 + 16LL))(v40);
  }
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( v56[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v56[0] + 16LL))(v56[0]);
}
