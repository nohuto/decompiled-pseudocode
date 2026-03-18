/*
 * XREFs of CitProcessCallout @ 0x1C00332B0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1C009B0FC (xxxInitProcessInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0033808 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0037F14 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C003B2A0 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C003B2DC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0076BD8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0076DA4 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C00771B0 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0079478 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C008813C (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 *     ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0184730 (-CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z.c)
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
    *(_QWORD *)(a1 + 928) = 52976LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 384) && !(_BYTE)g_CompatImpact )
    {
      IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
      v6 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      if ( !IsStateSeparationEnabled )
        v6 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
      CitpInitialize(v6);
    }
    if ( qword_1C01D0CF0 && !*((_QWORD *)qword_1C01D0CF0 + 12) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_UNKNOWN **)(i + 24) == &gTermIO )
        {
          v9 = *(struct _LUID *)(i + 152);
          goto LABEL_28;
        }
      }
      v9 = 0LL;
LABEL_28:
      v11 = v9;
      if ( v9 )
        CitpContextUserLogon(qword_1C01D0CF0, &v11);
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 928);
    if ( CitpProcessInfoIsValid((struct _CIT_PROCESS *)v3) )
    {
      v7 = qword_1C01D0CF0;
      if ( qword_1C01D0CF0 )
      {
        if ( a1 == *((_QWORD *)qword_1C01D0CF0 + 15) )
          CitpSetForegroundProcess(
            qword_1C01D0CF0,
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
              (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 100),
              *(_BYTE *)(v3 + 88));
        }
        if ( *(_BYTE *)(v3 + 89) )
        {
          PsUpdateComponentPower(**(_QWORD **)(v3 + 8), 11LL);
          if ( Outstanding )
            CitpAudioStatDecrementStreams(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 108),
              *(_BYTE *)(v3 + 89));
        }
      }
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v3 + 16));
      CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v3 + 32));
      Win32FreePool(v3);
    }
    *(_QWORD *)(a1 + 928) = 52977LL;
    if ( gppiList && !*(_QWORD *)(gppiList + 384) )
    {
      if ( qword_1C01D0CF0 )
        CitpContextFlush(
          qword_1C01D0CF0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      CitpCleanup();
    }
  }
}
