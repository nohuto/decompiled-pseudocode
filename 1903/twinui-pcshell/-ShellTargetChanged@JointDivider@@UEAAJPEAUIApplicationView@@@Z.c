/*
 * XREFs of ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CA410
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1803C9BD0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180013C14 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JointDivider::ShellTargetChanged(JointDivider *this, struct IUnknown *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // rbx
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  *((_DWORD *)this + 8) = 0;
  if ( *((_QWORD *)this + 5)
    && a2
    && !IsPPIEdition()
    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) > 1
    && (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 5) + 184LL))(
         *((_QWORD *)this + 5),
         a2) )
  {
    v15 = 0LL;
    v4 = *((_QWORD *)this + 5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 104LL))(
           v4,
           0LL,
           5LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v15);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x92,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v5);
LABEL_10:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return v6;
    }
    v14 = 0LL;
    v7 = *((_QWORD *)this + 5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v7 + 104LL))(
           v7,
           1LL,
           5LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v14);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_10;
    }
    v13 = 0LL;
    v10 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v10 + 48LL))(
           v10,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v13) >= 0
      && (unsigned int)SHIsSameObject(v13, a2) )
    {
      *((_DWORD *)this + 8) = 1;
    }
    else
    {
      v11 = v14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v11 + 48LL))(
             v11,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             &v13) >= 0 )
      {
        if ( (unsigned int)SHIsSameObject(v13, a2) )
          *((_DWORD *)this + 8) = 2;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  InvalidateRect(*((HWND *)this + 3), 0LL, 1);
  return 0LL;
}
