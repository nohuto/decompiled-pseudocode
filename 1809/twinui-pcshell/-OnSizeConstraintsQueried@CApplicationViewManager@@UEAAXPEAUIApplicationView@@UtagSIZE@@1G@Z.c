/*
 * XREFs of ?OnSizeConstraintsQueried@CApplicationViewManager@@UEAAXPEAUIApplicationView@@UtagSIZE@@1G@Z @ 0x18007C8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationViewManager::OnSizeConstraintsQueried(
        CApplicationViewManager *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned __int16 a5)
{
  int v8; // eax
  char v9; // si
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v12[1] = -2LL;
  v14 = 0LL;
  v12[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v8 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_dcf504eb_598b_4411_ac89_cf48aba70af1,
         &v14);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31A,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8,
      v11);
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagSIZE, struct tagSIZE))(*(_QWORD *)v14 + 24LL))(
            v14,
            a5,
            a3,
            a4);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x31C,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10,
        v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
}
