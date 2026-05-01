/*
 * XREFs of ?SubscribeToServices@WindowSizeConverter@@UEAAJPEAUIServiceProvider@@@Z @ 0x180333410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::SubscribeToServices(WindowSizeConverter *this, struct IServiceProvider *a2)
{
  __int64 *v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 88);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v4);
  if ( v5 >= 0 )
  {
    v7 = *v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 64LL))(v7, (char *)this + 96);
    if ( v5 < 0 )
    {
      v6 = 240LL;
      goto LABEL_3;
    }
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v12);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v12 + 24LL))(
             v12,
             ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
             (char *)this + 128);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v9 = 245LL;
    }
    else
    {
      v9 = 244LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v8);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    return (unsigned int)v5;
  }
  v6 = 239LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
