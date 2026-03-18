/*
 * XREFs of xxxSetForegroundThreadWithWindowHint @ 0x1C005F010
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005B60 (xxxSetModernAppWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     xxxSetForegroundThread @ 0x1C01A1C70 (xxxSetForegroundThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C005E690 (-TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?PublishFocusChange@@YAXPEAUtagWND@@@Z @ 0x1C00601E4 (-PublishFocusChange@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[3]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v15[56]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v16; // [rsp+80h] [rbp+27h] BYREF
  int v17; // [rsp+90h] [rbp+37h]

  result = gptiForeground;
  if ( a1 != (struct tagTHREADINFO *)gptiForeground )
  {
    if ( !a1 || !gptiForeground || *((_QWORD *)a1 + 52) != *(_QWORD *)(gptiForeground + 416LL) )
    {
      EtwTraceFocusedProcessChange();
      v16 = 0uLL;
      v17 = 0;
      if ( (unsigned int)CitProcessForegroundChange(a1, a2, gptiForeground, &v16) )
      {
        if ( a1 && (v5 = *((_QWORD *)a1 + 56)) != 0 && *(_QWORD *)(v5 + 288) )
          DWORD1(v16) = *(_DWORD *)(*((_QWORD *)a1 + 52) + 56LL);
        else
          DWORD1(v16) = 0;
        if ( gptiForeground && (v6 = *(_QWORD *)(gptiForeground + 448LL)) != 0 && *(_QWORD *)(v6 + 288) )
          LODWORD(v16) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 56LL);
        else
          LODWORD(v16) = 0;
        memset(v15, 0, sizeof(v15));
        *(_QWORD *)v15 = 0LL;
        *(_DWORD *)&v15[8] = 9;
        HIWORD(v17) = 0;
        *(_OWORD *)&v15[16] = v16;
        *(_DWORD *)&v15[32] = (unsigned __int16)v17;
        xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v15);
      }
      if ( a1 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &Feature_MultiprocessBoost__private_propertyCache,
          14650201LL,
          &unk_1C02D6BAC,
          1LL);
        *(_QWORD *)(*((_QWORD *)a1 + 52) + 272LL) = PsChargeProcessWakeCounter(**((_QWORD **)a1 + 52), 0LL, 0LL, 1LL);
      }
      if ( gptiForeground )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &Feature_MultiprocessBoost__private_propertyCache,
          14650201LL,
          &unk_1C02D6BAC,
          1LL);
        v7 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 272LL);
        if ( v7 )
        {
          PsReleaseProcessWakeCounter(v7, 1LL);
          *(_QWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 272LL) = 0LL;
        }
      }
    }
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_MultiprocessBoost__private_propertyCache,
      14650201LL,
      &unk_1C02D6BAC,
      1LL);
    TransitionForegroundPriority(a1, a2);
    v8 = gptiForeground;
    if ( gptiForeground )
      v8 = *(_QWORD *)(gptiForeground + 432LL);
    EtwTraceFocusChange(a1);
    if ( gptiForeground )
    {
      if ( !a1 || *(_QWORD *)(gptiForeground + 416LL) != *((_QWORD *)a1 + 52) )
        *(_DWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 1076LL) = (MEMORY[0xFFFFF78000000320]
                                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( gptiForeground )
        DisableDelegation();
    }
    gptiForeground = a1;
    PublishFocusChange(a2);
    if ( gptiForeground )
    {
      v9 = *(_QWORD *)(gptiForeground + 432LL);
      if ( v9 )
      {
        if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v9 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
          v14[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v14;
          v14[1] = v8;
          if ( v8 )
            _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
          xxxChangeForegroundKeyboardTable(v8, *(_QWORD *)(gptiForeground + 432LL));
          ThreadUnlock1(v12, v11, v13);
        }
      }
    }
    memset(gafAsyncKeyStateRecentDown, 0, 0x20uLL);
    result = gpsi;
    ++*(_DWORD *)(gpsi + 6988LL);
  }
  return result;
}
