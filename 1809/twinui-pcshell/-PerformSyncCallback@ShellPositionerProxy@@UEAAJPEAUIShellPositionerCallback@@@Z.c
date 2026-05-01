/*
 * XREFs of ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x18007A870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerProxy::PerformSyncCallback(
        ShellPositionerProxy *this,
        struct IShellPositionerCallback *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v12 = 0LL;
  v5 = *((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 56LL))(
         v5,
         *((_QWORD *)this + 3),
         &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130,
         &v12);
  v7 = v6;
  v8 = 1168;
  if ( v6 == 1168 )
    goto LABEL_7;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\positionerproxy.cpp",
      (const char *)(unsigned int)v6);
    v8 = v7;
LABEL_7:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    return v8;
  }
  v9 = (*(__int64 (__fastcall **)(struct IShellPositionerCallback *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v4;
}
