/*
 * XREFs of ?get_ProcessId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x1801C51A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_ProcessId(
        ApplicationViewBackedViewHostItem *this,
        unsigned int *a2)
{
  __int64 v4; // rbx
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v14 = 0LL;
  v4 = *((_QWORD *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         1LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         &v14);
  if ( v5 >= 0 )
  {
    v9 = *((_QWORD *)this + 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
            v9,
            1LL,
            &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
            &v14);
    v5 = v10;
    if ( v10 < 0 )
    {
      v6 = (unsigned int)v10;
      v7 = 123LL;
      goto LABEL_8;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14 + 48LL))(v14, a2);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v8 = 0;
      goto LABEL_13;
    }
    v5 = -2147023496;
    if ( v11 != -2147023496 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7C,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_13;
    }
  }
  else
  {
    if ( v5 != -2147019873 )
    {
      v6 = (unsigned int)v5;
      v7 = 121LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)v6);
      goto LABEL_5;
    }
    v5 = -2147019873;
  }
LABEL_5:
  v8 = v5;
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v8;
}
