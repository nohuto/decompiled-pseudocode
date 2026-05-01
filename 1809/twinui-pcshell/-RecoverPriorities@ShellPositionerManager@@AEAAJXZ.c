/*
 * XREFs of ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x180335718
 * Callers:
 *     ?SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180336960 (-SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18002EE54 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::RecoverPriorities(ShellPositionerManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int i; // edi
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationView *v12; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0LL;
  v2 = *((_QWORD *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1226LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1229LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v10; ++i )
  {
    v12 = 0LL;
    v7 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v7 + 32LL))(
           v7,
           i,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v12) >= 0 )
      ShellPositionerManager::GetPositionerPriorityForView(this, v12, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  v4 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v4;
}
