/*
 * XREFs of ?get_CoreWindowId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x1801C4FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_CoreWindowId(
        ApplicationViewBackedViewHostItem *this,
        unsigned int *a2)
{
  __int64 v3; // rbx
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v10 = 0LL;
  v3 = *((_QWORD *)this + 12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
         v3,
         1LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         &v10);
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    v4 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v11;
      v4 = 0;
      goto LABEL_9;
    }
    v5 = (unsigned int)v7;
    v6 = 539LL;
    goto LABEL_7;
  }
  if ( v4 != -2147019873 )
  {
    v5 = (unsigned int)v4;
    v6 = 536LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)v5);
    goto LABEL_9;
  }
  v4 = -2147019873;
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return (unsigned int)v4;
}
