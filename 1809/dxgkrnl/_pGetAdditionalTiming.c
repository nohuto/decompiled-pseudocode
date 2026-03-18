/*
 * XREFs of _pGetAdditionalTiming @ 0x1C015B2AC
 * Callers:
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C015B1C4 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 * Callees:
 *     _pGetAdditionalModeEntry @ 0x1C015B408 (_pGetAdditionalModeEntry.c)
 *     _pLoadAdditinalMode @ 0x1C015B450 (_pLoadAdditinalMode.c)
 */

__int64 __fastcall pGetAdditionalTiming(__int64 a1, char a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 AdditionalModeEntry; // rbx
  __int64 v11; // rdx
  int AdditinalMode; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  v4 = (int)a1;
  LODWORD(v5) = 0;
  if ( (_DWORD)a1 == -2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( (_DWORD)v4 == 15 )
  {
    *a3 = 0;
    *a4 = 0LL;
    return 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C008FA08, 0LL);
    LOBYTE(v9) = a2;
    AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, v9);
    if ( !AdditionalModeEntry )
    {
      ExReleasePushLockEx(&qword_1C008FA08, 0LL);
      ExAcquirePushLockExclusiveEx(&qword_1C008FA08, 0LL);
      LOBYTE(v11) = a2;
      AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, v11);
      if ( !AdditionalModeEntry )
      {
        AdditinalMode = pLoadAdditinalMode((unsigned int)v4);
        v5 = AdditinalMode;
        if ( AdditinalMode == -1073741275 || AdditinalMode == -1073741772 )
        {
          v28 = WdLogNewEntry5_WdDmmEvent(v14, v13, v15, v16);
          *(_QWORD *)(v28 + 24) = v4;
          WdLogEvent5_WdDmmEvent(v28);
        }
        else if ( AdditinalMode < 0 )
        {
          v26 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v26 + 24) = v4;
          *(_QWORD *)(v26 + 32) = v5;
          WdLogEvent5_WdWarning(v26);
        }
        else
        {
          LOBYTE(v13) = a2;
          AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, v13);
          if ( !AdditionalModeEntry )
          {
            v27 = WdLogNewEntry5_WdDmmEvent(v18, v17, v19, v20);
            *(_QWORD *)(v27 + 24) = v4;
            WdLogEvent5_WdDmmEvent(v27);
            LODWORD(v5) = -1073741275;
          }
        }
      }
    }
    ExReleasePushLockEx(&qword_1C008FA08, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v5 < 0 )
    {
      if ( AdditionalModeEntry )
      {
        v30 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v30);
      }
    }
    else
    {
      if ( !AdditionalModeEntry )
      {
        v29 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v29);
      }
      *a3 = *(_DWORD *)(AdditionalModeEntry + 16);
      *a4 = AdditionalModeEntry + 20;
    }
    return (unsigned int)v5;
  }
}
