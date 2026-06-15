/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180013480
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000EB64 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000FF30 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180018CB0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001B124 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001BEC0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000E584 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  int v3; // edx
  HRESULT Instance; // edi
  __int64 v5; // rcx
  int v6; // eax

  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(_DWORD *)(a1 + 448) )
        return;
      if ( !*(_DWORD *)(a1 + 264) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x31u,
            &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids,
            *(_DWORD *)(a1 + 192));
        }
        if ( !*(_QWORD *)(a1 + 272) )
        {
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 272));
          if ( Instance < 0 )
            goto LABEL_48;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 272) + 32LL))(
                     *(_QWORD *)(a1 + 272),
                     *(_QWORD *)(a1 + 184),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_48;
        *(_DWORD *)(a1 + 264) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 264) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x32u,
        &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids,
        *(_DWORD *)(a1 + 192));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 40LL))(*(_QWORD *)(a1 + 272));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance < 0 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 264) = 0;
  }
  v5 = *(_QWORD *)(a1 + 256);
  if ( v5 )
  {
    v6 = CApplication::Category(v5);
  }
  else if ( *(_DWORD *)(a1 + 512) )
  {
    v6 = *(_DWORD *)(a1 + 516);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 344);
  }
  if ( v6 || !*(_DWORD *)(a1 + 468) )
  {
    if ( !*(_DWORD *)(a1 + 268) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x34u,
        &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids,
        *(_DWORD *)(a1 + 192));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 40LL))(*(_QWORD *)(a1 + 280));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 268) = 0;
      return;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 268) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x33u,
        &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids,
        *(_DWORD *)(a1 + 192));
    }
    if ( *(_QWORD *)(a1 + 280)
      || (Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 280)),
          Instance >= 0) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 280) + 32LL))(
                   *(_QWORD *)(a1 + 280),
                   *(_QWORD *)(a1 + 184),
                   0x80000LL);
      if ( Instance >= 0 )
      {
        *(_DWORD *)(a1 + 268) = 1;
        return;
      }
    }
  }
LABEL_48:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, Instance);
  }
  AudPolicyLogError("CProcess::NotifyPLM", 3740, Instance);
}
