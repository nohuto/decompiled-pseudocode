/*
 * XREFs of ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x18006BF34
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x18006B7F0 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x18006BFFC (-SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoCreateActivationManagerAndSetProperties(
        struct Windows::Storage::Streams::IBuffer *a1,
        struct IApplicationActivationManagerPriv **a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  struct IApplicationActivationManagerPriv *v6; // rax
  __int64 v8; // rdx
  int ppv; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManagerShim,
               0LL,
               0x404u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)&v11);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v8 = 50LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    goto LABEL_7;
  }
  if ( a1 )
  {
    Instance = SetActivationPropertySet(v11, a1);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v8 = 54LL;
      goto LABEL_10;
    }
  }
  v6 = (struct IApplicationActivationManagerPriv *)v11;
  if ( v11 )
  {
    ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->AddRef)(v11);
    v6 = (struct IApplicationActivationManagerPriv *)v11;
  }
  *a2 = v6;
  v5 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v5;
}
