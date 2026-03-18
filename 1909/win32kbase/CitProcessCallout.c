/*
 * XREFs of CitProcessCallout @ 0x1C003625C
 * Callers:
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1C00AA140 (xxxInitProcessInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C00367B4 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0080940 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0080B08 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0082D78 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0082DEC (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0082E28 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00836E0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C0098C9C (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C00B7C50 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x1C01C7330 (-CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z.c)
 */

void __fastcall CitProcessCallout(__int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // dx
  char IsStateSeparationEnabled; // al
  const WCHAR *v6; // rcx
  struct _CIT_IMPACT_CONTEXT *v7; // rsi
  __int64 i; // rax
  struct _LUID v9; // rax
  struct _CIT_INTERACTION_SUMMARY *Outstanding; // rsi
  struct _LUID v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    *(_QWORD *)(a1 + 920) = 52976LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 376) && !(_BYTE)g_CompatImpact )
    {
      IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
      v6 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      if ( !IsStateSeparationEnabled )
        v6 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      CitpInitialize(v6);
    }
    if ( qword_1C0215810 && !*((_QWORD *)qword_1C0215810 + 12) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_UNKNOWN **)(i + 24) == &gTermIO )
        {
          v9 = *(struct _LUID *)(i + 152);
          goto LABEL_28;
        }
      }
      v9 = *(struct _LUID *)&DOUBLE_0_0;
LABEL_28:
      v11 = v9;
      if ( v9 != *(_QWORD *)&DOUBLE_0_0 )
        CitpContextUserLogon(qword_1C0215810, &v11);
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 920);
    if ( CitpProcessInfoIsValid((struct _CIT_PROCESS *)v3) )
    {
      v7 = qword_1C0215810;
      if ( qword_1C0215810 )
      {
        if ( a1 == *((_QWORD *)qword_1C0215810 + 15) )
          CitpSetForegroundProcess(
            qword_1C0215810,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
            0LL,
            0LL,
            0LL,
            0LL);
        if ( a1 == *((_QWORD *)v7 + 16) )
          *((_QWORD *)v7 + 16) = 0LL;
      }
      if ( *(_BYTE *)(v3 + 88) || *(_BYTE *)(v3 + 89) )
      {
        Outstanding = CitpInteractionSummaryGetOutstanding((struct _CIT_PROCESS *)v3, v4);
        if ( *(_BYTE *)(v3 + 88) )
        {
          PsUpdateComponentPower(**(_QWORD **)(v3 + 8), 10LL);
          if ( Outstanding )
            CitpAudioStatDecrementStreams(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 104),
              *(_BYTE *)(v3 + 88));
        }
        if ( *(_BYTE *)(v3 + 89) )
        {
          PsUpdateComponentPower(**(_QWORD **)(v3 + 8), 11LL);
          if ( Outstanding )
            CitpAudioStatDecrementStreams(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 112),
              *(_BYTE *)(v3 + 89));
        }
      }
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v3 + 16));
      CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v3 + 32));
      Win32FreePool(v3);
    }
    *(_QWORD *)(a1 + 920) = 52977LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 376) )
    {
      if ( qword_1C0215810 )
        CitpContextFlush(
          qword_1C0215810,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      CitpCleanup();
    }
  }
}
