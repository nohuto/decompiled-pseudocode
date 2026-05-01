/*
 * XREFs of ?get_ProcessId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x18021D570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::get_ProcessId(
        ApplicationViewBackedViewHostItem *this,
        unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v16 = 0LL;
  v4 = *((_QWORD *)this + 26);
  v5 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v6 = v5(v4, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = *((_QWORD *)this + 26);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v12 = v11(v10, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v16);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 48LL))(v16, a2);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v8 = 0;
        goto LABEL_11;
      }
      v8 = -2147023496;
      if ( v13 != -2147023496 )
      {
        v9 = 123LL;
        goto LABEL_9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v12);
    }
  }
  else
  {
    v8 = -2147019873;
    if ( v6 != -2147019873 )
    {
      v9 = 120LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)v7);
      v8 = v7;
    }
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v8;
}
