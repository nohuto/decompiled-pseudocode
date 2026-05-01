/*
 * XREFs of ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x1803B5494
 * Callers:
 *     ?SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803B6840 (-SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18003F3C4 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::RecoverPriorities(ShellPositionerManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int i; // esi
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  struct IApplicationView *v14; // [rsp+80h] [rbp+40h] BYREF

  v13 = 0LL;
  v2 = *((_QWORD *)this + 20);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v4 = v3(v2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1287LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1290LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v12; ++i )
  {
    v14 = 0LL;
    v8 = v13;
    v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v13 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    if ( v9(v8, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v14) >= 0 )
      ShellPositionerManager::GetPositionerPriorityForView(
        this,
        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v14,
        0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  v5 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v5;
}
