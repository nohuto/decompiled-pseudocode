/*
 * XREFs of ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180330A70
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18032F930 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewSizePreferenceHelpers::SetViewValueSet(
        ViewSizePreferenceHelpers *this,
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int PropertySetSerializer; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  PropertySetSerializer = RoCreatePropertySetSerializer(v12);
  v6 = PropertySetSerializer;
  if ( PropertySetSerializer >= 0 )
  {
    v15 = 0LL;
    v7 = v12[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v8 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, a2, &v15);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163,
        (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_13;
    }
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v9 = (**(__int64 (__fastcall ***)(ViewSizePreferenceHelpers *, GUID *, __int64 *))this)(
           this,
           &GUID_e7a5f14e_0650_44f2_9168_35cd1d04fe20,
           &v14);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v14 + 24LL))(
             v14,
             0LL,
             0LL,
             0LL,
             v15);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = 0;
        goto LABEL_11;
      }
      v10 = 358LL;
    }
    else
    {
      v10 = 357LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v9);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x161,
    (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)PropertySetSerializer);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v6;
}
