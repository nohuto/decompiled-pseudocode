/*
 * XREFs of ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x18007E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerProxy::PerformSyncCallback(
        ShellPositionerProxy *this,
        struct IShellPositionerCallback *a2)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v6 = v5(v4, *((_QWORD *)this + 3), &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130, &v11);
  v7 = v6;
  v8 = 1168;
  if ( v6 != 1168 )
  {
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\positionerproxy.cpp",
        (const char *)(unsigned int)v6);
      v8 = v7;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct IShellPositionerCallback *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v11);
      if ( v8 >= 0 )
        v8 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v8;
}
