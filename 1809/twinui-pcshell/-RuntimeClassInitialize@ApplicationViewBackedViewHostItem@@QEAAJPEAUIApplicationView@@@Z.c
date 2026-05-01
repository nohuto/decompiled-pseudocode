/*
 * XREFs of ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x1801C33F0
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B7FE8 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180129AF8 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132C38 (--$As@UIImmersiveApplicationHolographic@@@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJ.c)
 *     ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801BBFE0 (--$Set@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappe.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationViewBackedViewHostItem::RuntimeClassInitialize(
        ApplicationViewBackedViewHostItem *this,
        struct IApplicationView *a2)
{
  __int64 *v3; // r14
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  v17[1] = -2LL;
  v3 = (__int64 *)((char *)this + 104);
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
    (__int64 *)this + 13,
    (__int64)a2);
  v24 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(v3, &v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, (char *)this + 112);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 51LL;
      goto LABEL_5;
    }
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v8 = *v3;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
    v19 = -1LL;
    v20 = -1LL;
    v9 = (*(__int64 (__fastcall **)(__int64, const wchar_t **))(*(_QWORD *)v8 + 136LL))(v8, &v18);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v9);
LABEL_23:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
      goto LABEL_24;
    }
    Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
      (HSTRING *)this + 17,
      &v18);
    v22 = 0LL;
    v10 = *((_QWORD *)this + 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
           v10,
           5LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v22);
    if ( v5 < 0 )
    {
      if ( v5 == -2147019873 )
      {
        v5 = -2147019873;
LABEL_22:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_23;
      }
      v11 = (unsigned int)v5;
      v12 = 62LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)v11);
      goto LABEL_22;
    }
    v17[0] = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 32LL))(v22, v17);
    v5 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 65LL;
      goto LABEL_14;
    }
    *((_DWORD *)this + 36) = v17[0];
    v23 = 0LL;
    v14 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>((_QWORD *)this + 14, &v23);
    v5 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 32LL))(v23, (char *)this + 32);
      v5 = v14;
      if ( v14 >= 0 )
      {
        v5 = 0;
        goto LABEL_21;
      }
      v15 = 71LL;
    }
    else
    {
      v15 = 70LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v14);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    goto LABEL_22;
  }
  v6 = 50LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v4);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  return (unsigned int)v5;
}
