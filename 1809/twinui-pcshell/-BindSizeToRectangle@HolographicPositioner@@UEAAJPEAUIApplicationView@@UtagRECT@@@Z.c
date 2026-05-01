/*
 * XREFs of ?BindSizeToRectangle@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@@Z @ 0x1801B1BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AEBFC (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B69EC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::BindSizeToRectangle(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagRECT *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  float v8[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF

  HolographicPositioner::_FindViewHostItem((char *)this - 120, &v11, a2);
  if ( v11 )
  {
    v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
           &v11,
           &v10);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v8[0] = (float)a3->left;
      v8[1] = (float)a3->top;
      v8[2] = (float)(a3->right - a3->left);
      v8[3] = (float)(a3->bottom - a3->top);
      v5 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v10 + 96LL))(v10, v8);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v6 = 481LL;
    }
    else
    {
      v6 = 473LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_10;
  }
  v4 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x80070490LL);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v4;
}
