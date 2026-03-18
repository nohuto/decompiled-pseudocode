/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0092BF8
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0092BD4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0043680 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00436AC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C004D220 (_TlgCreateSz.c)
 *     TraceLoggingProviderEnabled @ 0x1C005AE10 (TraceLoggingProviderEnabled.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 ReturnAddress,
        unsigned int BucketArg1,
        const char *BucketArg2,
        unsigned int a4,
        unsigned int hasArgs)
{
  KIRQL v6; // al
  _LIST_ENTRY *Flink; // rcx
  KIRQL v8; // r12
  _LIST_ENTRY *v9; // rdi
  _LIST_ENTRY *PoolWithTag; // rax
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int16 v17; // cx
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int Flink_high; // eax
  unsigned int v23; // r13d
  int Blink; // edi
  unsigned __int8 v25; // dl
  unsigned __int64 v26; // r8
  const char *v27; // r12
  const char *v28; // rdx
  unsigned __int8 CurrentIrql; // al
  const _GUID *v30; // r8
  const _GUID *v31; // r9
  __int64 v32; // r10
  int v33; // edi
  const _GUID *v34; // r8
  const _GUID *v35; // r9
  ULONG v36; // r11d
  KIRQL v37; // al
  _LIST_ENTRY *v38; // rcx
  unsigned int _TlgTemp0; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int _TlgTemp1; // [rsp+5Ch] [rbp-ACh]
  unsigned int _TlgTemp2; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int _TlgTemp3; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int _TlgTemp5; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int _TlgTemp6; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int _TlgTemp7; // [rsp+70h] [rbp-98h] BYREF
  unsigned int _TlgTemp9; // [rsp+74h] [rbp-94h] BYREF
  unsigned int _TlgTemp10; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v48; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v49; // [rsp+80h] [rbp-88h] BYREF
  int v50; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v51; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v52; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v53; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+94h] [rbp-74h] BYREF
  int v55; // [rsp+98h] [rbp-70h] BYREF
  _EVENT_DATA_DESCRIPTOR v56; // [rsp+A8h] [rbp-60h] BYREF
  int *v57; // [rsp+C8h] [rbp-40h]
  __int64 v58; // [rsp+D0h] [rbp-38h]
  unsigned int *v59; // [rsp+D8h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  unsigned int *v61; // [rsp+E8h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-18h]
  unsigned int *v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp-8h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  unsigned int *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  unsigned int *p_TlgTemp0; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  int *v70; // [rsp+138h] [rbp+30h]
  _EVENT_DATA_DESCRIPTOR _TlgData[14]; // [rsp+140h] [rbp+38h] BYREF

  _TlgTemp1 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v6 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
  v8 = v6;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == g_MicrosoftTelemetryAssertsTriggeredList.Flink )
  {
LABEL_5:
    PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
$Done_66:
      KeReleaseSpinLock(&g_AssertSpinLock, v8);
      return;
    }
    v11 = MEMORY[0xFFFFF78000000320];
    PoolWithTag->Flink = (_LIST_ENTRY *)ReturnAddress;
    TimeIncrement = KeQueryTimeIncrement();
    v9[1].Flink = 0LL;
    LODWORD(v9[1].Blink) = 0;
    v9->Blink = (_LIST_ENTRY *)(((__int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
                              + ((unsigned __int64)((unsigned __int128)(v11
                                                                      * TimeIncrement
                                                                      * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
                              - 60001);
    v13 = v9 + 2;
    v14 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    if ( g_MicrosoftTelemetryAssertsTriggeredList.Flink->Blink != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    v13->Flink = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
    v9[2].Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    v14->Blink = v13;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = v9 + 2;
  }
  else
  {
    while ( 1 )
    {
      v9 = Flink - 2;
      if ( Flink[-2].Flink == (_LIST_ENTRY *)ReturnAddress )
        break;
      Flink = Flink->Flink;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == Flink )
        goto LABEL_5;
    }
  }
  ++LODWORD(v9[1].Flink);
  ++HIDWORD(v9[1].Flink);
  v15 = MEMORY[0xFFFFF78000000320];
  v16 = v15 * KeQueryTimeIncrement() / 10000;
  if ( v16 - (unsigned __int64)v9->Blink <= 0xEA60 )
    goto $Done_66;
  v17 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v17 == 267 || v17 == 523 )
  {
    v18 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    v19 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v18 = 0;
    v19 = 0;
  }
  if ( ReturnAddress < 0x1C0000000LL || (v20 = 0x1C0000000LL + v19, v20 <= 0x1C0000000LL) || ReturnAddress > v20 )
    v21 = 0;
  else
    v21 = ReturnAddress - 0xC0000000;
  Flink_high = HIDWORD(v9[1].Flink);
  v23 = (unsigned int)v9[1].Flink;
  v9->Blink = (_LIST_ENTRY *)v16;
  Blink = (int)v9[1].Blink;
  _TlgTemp0 = Flink_high;
  KeReleaseSpinLock(&g_AssertSpinLock, v8);
  v27 = "<unknown>";
  if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && TlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
  {
    v28 = "<unknown>";
    _TlgTemp2 = 10;
    _TlgTemp3 = v21;
    if ( g_ModuleName )
      v28 = (const char *)g_ModuleName;
    _TlgTemp5 = v18;
    _TlgTemp9 = _TlgTemp0;
    _TlgTemp6 = v19;
    _TlgTemp7 = v23;
    CurrentIrql = KeGetCurrentIrql();
    v48 = _TlgTemp1;
    v49 = hasArgs;
    *(_QWORD *)&_TlgData[2].Size = &_TlgTemp2;
    *(_QWORD *)&_TlgData[3].Size = &_TlgTemp3;
    *(_QWORD *)&_TlgData[4].Size = &_TlgTemp5;
    _TlgTemp10 = CurrentIrql;
    *(_QWORD *)&_TlgData[5].Size = &_TlgTemp6;
    _TlgData[3].Ptr = 4LL;
    _TlgData[4].Ptr = 4LL;
    _TlgData[5].Ptr = 4LL;
    _TlgData[6].Ptr = 4LL;
    TlgCreateSz((_EVENT_DATA_DESCRIPTOR *)&_TlgData[6].Size, v28);
    _TlgData[8].Ptr = 4LL;
    *(_QWORD *)&_TlgData[8].Size = &_TlgTemp9;
    *(_QWORD *)&_TlgData[7].Size = &_TlgTemp7;
    *(_QWORD *)&_TlgData[9].Size = &_TlgTemp10;
    _TlgData[9].Ptr = 4LL;
    _TlgData[10].Ptr = 4LL;
    TlgCreateSz((_EVENT_DATA_DESCRIPTOR *)&_TlgData[10].Size, "wdf01000.sys");
    _TlgData[12].Ptr = 4LL;
    *(_QWORD *)&_TlgData[11].Size = &v48;
    *(_QWORD *)&_TlgData[12].Size = &v49;
    _TlgData[13].Ptr = 4LL;
    TlgCreateSz((_EVENT_DATA_DESCRIPTOR *)&_TlgData[13].Size, "<unknown>");
    TlgWrite(
      &Tlgmtakm_hTelemetryAssertProv,
      (char *)&TlgEvent_3._TlgChannel,
      v30,
      v31,
      0xEu,
      (_EVENT_DATA_DESCRIPTOR *)&_TlgData[0].Size);
  }
  if ( TraceLoggingProviderEnabled(&Tlgmtakm_hTelemetryAssertDiagTrack_KMProv, v25, v26)
    && !Blink
    && !KeGetCurrentIrql() )
  {
    v33 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v21, g_ModuleName, v18, v19, v32, v32, v32);
    if ( Tlgmtakm_hTelemetryAssertProv.LevelPlus1 > 5 && TlgKeywordOn(&Tlgmtakm_hTelemetryAssertProv, 0x400000000000uLL) )
    {
      v51 = v21;
      v52 = v18;
      if ( g_ModuleName )
        v27 = (const char *)g_ModuleName;
      v50 = 10;
      v57 = &v50;
      v59 = &v51;
      v61 = &v52;
      v63 = &v53;
      v53 = v19;
      v54 = v23;
      v55 = v33;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      TlgCreateSz(&pDesc, v27);
      v67 = 4LL;
      p_TlgTemp0 = &_TlgTemp0;
      v66 = &v54;
      v70 = &v55;
      v69 = 4LL;
      _TlgData[0].Ptr = 4LL;
      TlgWrite(&Tlgmtakm_hTelemetryAssertProv, (char *)&TlgEvent_4._TlgChannel, v34, v35, v36, &v56);
    }
    if ( !v33 )
    {
      v37 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v38 = g_MicrosoftTelemetryAssertsTriggeredList.Flink;
      v8 = v37;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != g_MicrosoftTelemetryAssertsTriggeredList.Flink )
      {
        while ( v38[-2].Flink != (_LIST_ENTRY *)ReturnAddress )
        {
          v38 = v38->Flink;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v38 )
            goto $Done_66;
        }
        ++LODWORD(v38[-1].Blink);
      }
      goto $Done_66;
    }
  }
}
