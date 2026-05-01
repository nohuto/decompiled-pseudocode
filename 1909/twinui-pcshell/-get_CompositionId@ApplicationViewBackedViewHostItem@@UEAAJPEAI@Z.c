/*
 * XREFs of ?get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x18023C8E0
 * Callers:
 *     ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180239C30 (-ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Inter.c)
 *     ?get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18023CDE0 (-get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_CompositionId(
        ApplicationViewBackedViewHostItem *this,
        unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v11 = 0LL;
  v3 = *((_QWORD *)this + 26);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v5 = v4(v3, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v12);
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v12;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  else
  {
    v7 = -2147019873;
    if ( v5 != -2147019873 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v5);
      v7 = v6;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v7;
}
