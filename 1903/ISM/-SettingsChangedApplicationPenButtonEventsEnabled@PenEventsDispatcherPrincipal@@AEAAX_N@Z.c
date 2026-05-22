/*
 * XREFs of ?SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z @ 0x1800331B8
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180032A14 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180031FFC (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall PenEventsDispatcherPrincipal::SettingsChangedApplicationPenButtonEventsEnabled(
        PenEventsDispatcherPrincipal *this,
        char a2)
{
  char v2; // dl
  PenEventsDispatcherPrincipal *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char ButtonEventsSupportedFlag; // si
  char v7; // r8
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 188) != a2 )
  {
    PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(this);
    *((_BYTE *)v3 + 188) = v2;
    ButtonEventsSupportedFlag = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(v3);
    if ( v7 != ButtonEventsSupportedFlag )
    {
      v8 = *(_QWORD **)(v5 + 64);
      for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
      {
        LOBYTE(v4) = ButtonEventsSupportedFlag;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 48LL))(i[3] + 8LL, v4);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11E,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pe"
                          "neventsdispatcherprincipal.cpp",
            (const char *)(unsigned int)v10,
            v11);
      }
    }
  }
}
