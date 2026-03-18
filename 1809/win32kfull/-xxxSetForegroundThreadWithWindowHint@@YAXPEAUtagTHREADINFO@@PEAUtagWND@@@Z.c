/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CE80C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxSetForegroundThread @ 0x1C01C3430 (xxxSetForegroundThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CDE60 (-TransitionForegroundPriority@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v13[56]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v14; // [rsp+80h] [rbp-19h] BYREF
  int v15; // [rsp+90h] [rbp-9h]
  _QWORD v16[5]; // [rsp+98h] [rbp-1h] BYREF

  if ( a1 != (struct tagTHREADINFO *)gptiForeground )
  {
    if ( !a1 || !gptiForeground || *((_QWORD *)a1 + 53) != *(_QWORD *)(gptiForeground + 424LL) )
    {
      EtwTraceFocusedProcessChange();
      v14 = 0uLL;
      v15 = 0;
      if ( (unsigned int)CitProcessForegroundChange(a1, a2, gptiForeground, &v14) )
      {
        if ( a1 && (v4 = *((_QWORD *)a1 + 57)) != 0 && *(_QWORD *)(v4 + 288) )
          DWORD1(v14) = *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL);
        else
          DWORD1(v14) = 0;
        if ( gptiForeground && (v5 = *(_QWORD *)(gptiForeground + 456LL)) != 0 && *(_QWORD *)(v5 + 288) )
          LODWORD(v14) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
        else
          LODWORD(v14) = 0;
        memset(v13, 0, sizeof(v13));
        *(_QWORD *)v13 = 0LL;
        HIWORD(v15) = 0;
        *(_OWORD *)&v13[16] = v14;
        *(_DWORD *)&v13[32] = (unsigned __int16)v15;
        *(_DWORD *)&v13[8] = 9;
        anonymous_namespace_::NotifyIAMWindowManagementEvent(v13);
      }
      if ( a1 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (unsigned int)&Feature_MultiprocessBoost__private_propertyCache,
          14650201,
          (unsigned int)&unk_1C02C86B0,
          1);
        *(_QWORD *)(*((_QWORD *)a1 + 53) + 272LL) = PsChargeProcessWakeCounter(**((_QWORD **)a1 + 53), 0LL, 0LL);
      }
      if ( gptiForeground )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (unsigned int)&Feature_MultiprocessBoost__private_propertyCache,
          14650201,
          (unsigned int)&unk_1C02C86B0,
          1);
        v6 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL);
        if ( v6 )
        {
          PsReleaseProcessWakeCounter(v6, 1LL);
          *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL) = 0LL;
        }
      }
    }
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (unsigned int)&Feature_MultiprocessBoost__private_propertyCache,
      14650201,
      (unsigned int)&unk_1C02C86B0,
      1);
    TransitionForegroundPriority(a1, a2);
    if ( gptiForeground )
      v7 = *(_QWORD *)(gptiForeground + 440LL);
    else
      v7 = 0LL;
    EtwTraceFocusChange(a1);
    if ( gptiForeground )
    {
      if ( !a1 || *(_QWORD *)(gptiForeground + 424LL) != *((_QWORD *)a1 + 53) )
        *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 1084LL) = (MEMORY[0xFFFFF78000000320]
                                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( gptiForeground )
        DisableDelegation();
    }
    gptiForeground = a1;
    if ( a1 && *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL) == gpidLogonUI )
      gfEnableHexNumpad |= 2u;
    else
      gfEnableHexNumpad &= ~2u;
    if ( gSessionId != gServiceSessionId && !gProtocolType )
    {
      memset(v16, 0, sizeof(v16));
      if ( gptiForeground )
      {
        LODWORD(v16[0]) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
        HIDWORD(v16[0]) = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
        if ( a2 )
          v16[2] = *(_QWORD *)a2;
        else
          v16[2] = 0LL;
      }
      SendMessageTo(3LL, v16, 40LL);
    }
    if ( gptiForeground )
    {
      v8 = *(_QWORD *)(gptiForeground + 440LL);
      if ( v8 )
      {
        if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v8 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
          v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v12;
          v12[1] = v7;
          if ( v7 )
            _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
          xxxChangeForegroundKeyboardTable(v7, *(_QWORD *)(gptiForeground + 440LL));
          ThreadUnlock1(v11, v10);
        }
      }
    }
    memset(gafAsyncKeyStateRecentDown, 0, 0x20uLL);
    ++*(_DWORD *)(gpsi + 6988LL);
  }
}
