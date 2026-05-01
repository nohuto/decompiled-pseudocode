/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18006D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18006D888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@C.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x180113330 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // si
  char v6; // bp
  bool v8; // di
  HWND ForegroundWindow; // rax
  __int64 v10; // rax
  void (*v11)(void); // rax
  _DWORD v12[10]; // [rsp+20h] [rbp-28h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::ReportUsageToService();
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) )
  {
    v5 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 96LL))(*(_QWORD *)(a1 + 48))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48)) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48)) )
      {
        return 0LL;
      }
    }
    v8 = 1;
    ForegroundWindow = GetForegroundWindow();
    if ( (unsigned int)GetWindowBand(ForegroundWindow, v12) )
      v8 = v12[0] != 13;
    if ( !v6
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))) )
    {
      v5 = 0;
    }
    if ( v8 )
    {
      if ( v5 && (unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) )
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48), 7LL);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))
        && ((unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) || a3 == 6) )
      {
        v10 = **(_QWORD **)(a1 + 48);
        if ( v6 )
        {
          v11 = *(void (**)(void))(v10 + 88);
        }
        else
        {
          if ( (*(unsigned __int8 (**)(void))(v10 + 128))() )
            return 0LL;
          v11 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 80LL);
        }
        v11();
      }
    }
  }
  return 0LL;
}
