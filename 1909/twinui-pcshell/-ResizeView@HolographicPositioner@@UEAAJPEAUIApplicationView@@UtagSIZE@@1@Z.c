/*
 * XREFs of ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1802210A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180080760 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18021A910 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1802204E8 (-IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18022330C (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::ResizeView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // ebx
  __int64 (__fastcall *v7)(struct IApplicationView *, LPVOID *); // rdi
  int v8; // eax
  const unsigned __int16 *v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int IsViewManaged; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v22; // [rsp+68h] [rbp+28h] BYREF
  struct tagSIZE v23; // [rsp+70h] [rbp+30h]

  v23 = a3;
  v20[1] = -2LL;
  cx = a3.cx;
  pv = 0LL;
  v7 = *(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v8 = v7(a2, &pv);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 571LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v11);
    goto LABEL_21;
  }
  if ( !HolographicApps::IsAppAllowedToBeResized((HolographicApps *)pv, v9) )
  {
    v10 = -2147467263;
    goto LABEL_21;
  }
  IsViewManaged = HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this + 16), a2, (int *)&v22);
  v10 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    v11 = (unsigned int)IsViewManaged;
    v12 = 575LL;
    goto LABEL_8;
  }
  if ( !(_DWORD)v22 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 576LL;
    goto LABEL_8;
  }
  HolographicPositioner::_FindViewHostItem((char *)this - 120, &v18, a2);
  if ( !v18 )
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x243,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070490LL);
    goto LABEL_18;
  }
  *(float *)&v22 = (float)cx;
  *((float *)&v22 + 1) = (float)v23.cy;
  v20[0] = 0LL;
  v14 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
          &v18,
          v20);
  v10 = v14;
  if ( v14 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20[0] + 72LL))(v20[0], v22);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v10 = 0;
      goto LABEL_17;
    }
    v15 = 586LL;
  }
  else
  {
    v15 = 585LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v14);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
LABEL_18:
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v16)[2])(v16);
  }
LABEL_21:
  if ( pv )
    CoTaskMemFree(pv);
  return v10;
}
