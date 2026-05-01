/*
 * XREFs of ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180044F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180044F94 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1801143E0 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1801219B0 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x180127900 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     WPP_SF_q @ 0x18014C598 (WPP_SF_q.c)
 *     ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x18014DE8C (--$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z.c)
 *     WPP_SF_lq @ 0x18014EF18 (WPP_SF_lq.c)
 */

void __fastcall CTaskWindow::SetVisibility(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  bool v4; // zf
  char v5; // cl
  unsigned __int8 v6; // si
  unsigned __int8 v7; // cl
  _DWORD *v8; // r8
  PSRWLOCK v9; // rdi
  char *Ptr; // rdx
  _DWORD *v11; // rdx
  char *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v18; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
  {
    v4 = *(_DWORD *)(a1 + 120) == 2;
    *(_DWORD *)(a1 + 120) = a2;
    v5 = v4;
    v6 = (_DWORD)a2 == 2;
    v4 = *(_QWORD *)(a1 + 48) == 0LL;
    *(_BYTE *)(a1 + 56) = (_DWORD)a2 != 2;
    if ( v4 )
    {
      if ( v5 != v6 )
      {
        v7 = (unsigned __int8)WPP_GLOBAL_Control;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, v6, *(_QWORD *)(a1 + 32));
        v18 = v6;
        if ( CAppManagerTelemetry::IsEnabled(v7, a2) )
        {
          v8 = (_DWORD *)(a1 + 140);
          if ( !v18 )
            ++*v8;
          v17 = *(_DWORD *)(a1 + 32);
          CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(&v18, &v17, v8);
        }
        v9 = CApplicationManagerUtility::g_pIAMGlobals;
        Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
        if ( Ptr != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
          || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                    &CApplicationManagerUtility::g_pIAMGlobals[1],
                    Ptr + 1) >= 0 )
        {
          v11 = (char *)v9[1].Ptr + 4 * (__int64)v9[2].Ptr++;
          if ( v11 )
            *v11 = 1;
        }
        v15 = *(_QWORD *)(a1 + 128);
        CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
          &CApplicationManagerUtility::g_pIAMGlobals[1],
          *(_QWORD *)(a1 + 32),
          13LL);
        v12 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
        if ( v12 )
          CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v12 - 1;
      }
    }
    else
    {
      CTaskWindow::_ReconcileViewWithVisibility((CTaskWindow *)(a1 - 8));
    }
    if ( *(_BYTE *)(a1 + 92) && !*(_DWORD *)(a1 + 120) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_ec79cc65924f314eb7ae55323d0afa97_Traceguids, v13);
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 520LL))(
              *(_QWORD *)(a1 + 48),
              (*(_DWORD *)(a1 + 96) & 1u) + 1);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3CB,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
          (const char *)(unsigned int)v14,
          v15);
      *(_BYTE *)(a1 + 92) = 0;
    }
  }
}
