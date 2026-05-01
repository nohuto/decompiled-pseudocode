/*
 * XREFs of ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1803B0050
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803AAAB0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803AB4B0 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1803B5160 (-TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1803ABA4C (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803AFFE8 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 */

void __fastcall TabletModePositioner::SetTabletMode(__int64 a1, int a2)
{
  __int64 v3; // rdx
  int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int EmptyAppLayout; // eax
  int v9; // eax
  struct IAppLayout *v10[2]; // [rsp+28h] [rbp-19h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+38h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  *(_DWORD *)(a1 + 236) = a2;
  *(_BYTE *)(a1 + 240) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 288));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 280));
  v4 = *(_DWORD *)(a1 + 236);
  v5 = *(_QWORD *)(a1 + 304);
  if ( v5 )
  {
    LOBYTE(v3) = v4 == 1;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, v3);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAE1,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
  }
  LOBYTE(v3) = v4 == 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 312) + 40LL))(*(_QWORD *)(a1 + 312), v3);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAE3,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v7);
  if ( v4 == 1 )
  {
    if ( !*(_BYTE *)(a1 + 241) )
      *(_BYTE *)(a1 + 241) = (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 24LL))(*(_QWORD *)(a1 + 384)) >= 0;
    pgui.cbSize = 72;
    memset_0(&pgui.flags, 0, 0x44uLL);
    if ( GetGUIThreadInfo(0, &pgui) )
    {
      if ( (pgui.flags & 4) != 0 )
        SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
    }
  }
  else if ( !*(_DWORD *)(a1 + 236) )
  {
    (*(void (__fastcall **)(_QWORD, struct tagGUITHREADINFO *))(**(_QWORD **)(a1 + 248) + 24LL))(
      *(_QWORD *)(a1 + 248),
      &pgui);
    v10[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
    EmptyAppLayout = TabletModePositioner::CreateEmptyAppLayout((const struct LAYOUT_ENVIRONMENT_DETAILS *)&pgui, v10);
    if ( EmptyAppLayout < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAFA,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)EmptyAppLayout);
    v9 = TabletModePositioner::SetAppLayout((TabletModePositioner *)a1, v10[0]);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAFB,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 264));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 272));
    if ( *(_BYTE *)(a1 + 241) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 32LL))(*(_QWORD *)(a1 + 384));
      *(_BYTE *)(a1 + 241) = 0;
    }
    if ( *(_BYTE *)(a1 + 242) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 48LL))(*(_QWORD *)(a1 + 384));
      *(_BYTE *)(a1 + 242) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
  }
}
