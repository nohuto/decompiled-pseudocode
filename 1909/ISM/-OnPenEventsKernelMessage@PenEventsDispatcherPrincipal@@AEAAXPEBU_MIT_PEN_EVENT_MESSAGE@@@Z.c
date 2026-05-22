/*
 * XREFs of ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1800326F4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_169f4db4f162cf2479feb08acf74ea7d__void__MIT_PEN_EVENT_MESSAGE_const___::_Do_call @ 0x180033BA0 (std--_Func_impl_no_alloc__lambda_169f4db4f162cf2479feb08acf74ea7d__void__MIT_PEN_EV_ea_180033BA0.c)
 * Callees:
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z@std@@@Z @ 0x180031AFC (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 *     ?GetEffectiveButtonRoutingPolicy@PenEventsDispatcherPrincipal@@AEAA?AW4RoutingPolicy@Input@Devices@Internal@Windows@@XZ @ 0x180031E18 (-GetEffectiveButtonRoutingPolicy@PenEventsDispatcherPrincipal@@AEAA-AW4RoutingPolicy@Input@Devic.c)
 *     ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1800325F8 (-OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 *     ?SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z @ 0x180032E98 (-SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180066D8C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __fastcall PenEventsDispatcherPrincipal::OnPenEventsKernelMessage(
        PenEventsDispatcherPrincipal *this,
        const struct _MIT_PEN_EVENT_MESSAGE *a2)
{
  __int64 EffectiveButtonRoutingPolicy; // rdx
  PenEventsDispatcherPrincipal *v5; // rcx
  __int64 (__fastcall **v6)(); // rax
  int v7; // ecx
  int v8; // ecx
  __int64 (__fastcall **v9)(); // rax
  const char *v10[7]; // [rsp+20h] [rbp-40h] BYREF
  const char **v11; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  InputTraceLogging::PenEvents::OnPenEventsKernelMessage(a2);
  if ( !*(_DWORD *)a2 )
  {
    v7 = *((_DWORD *)a2 + 1);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0xF5,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pe"
                          "neventsdispatcherprincipal.cpp",
            "Invalid pen button action provided.",
            v10[0]);
          __debugbreak();
        }
        v9 = off_18016F948;
      }
      else
      {
        v9 = off_18016F918;
      }
    }
    else
    {
      v9 = off_18016F8E8;
    }
    v10[0] = (const char *)v9;
    v11 = v10;
    EffectiveButtonRoutingPolicy = (unsigned int)PenEventsDispatcherPrincipal::GetEffectiveButtonRoutingPolicy((__int64)this);
    goto LABEL_16;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    EffectiveButtonRoutingPolicy = *((unsigned int *)this + 49);
    v5 = this;
    if ( *((_DWORD *)a2 + 1) )
      v6 = off_18016F978;
    else
      v6 = off_18016F9A8;
    v10[0] = (const char *)v6;
    v11 = v10;
LABEL_16:
    PenEventsDispatcherPrincipal::FireEvents((__int64)v5, EffectiveButtonRoutingPolicy, (__int64)v10);
    return;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      (void *)0x10A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevent"
                    "sdispatcherprincipal.cpp",
      "Invalid pen event type provided.",
      v10[0]);
    JUMPOUT(0x1800327FELL);
  }
  PenEventsDispatcherPrincipal::SettingsChangedApplicationPenButtonEventsEnabled(this, *((_DWORD *)a2 + 1) != 0);
}
