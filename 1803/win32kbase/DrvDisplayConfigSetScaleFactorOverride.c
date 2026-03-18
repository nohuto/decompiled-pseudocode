/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1C00D4520
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00D40C0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C006E590 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  struct PDEV *i; // rbx
  _DWORD *v7; // rcx
  int v8; // eax
  char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rcx

  LODWORD(v4) = -1073741811;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    if ( (*((_DWORD *)i + 10) & 0x401) == 1 )
    {
      v7 = (_DWORD *)*((_QWORD *)i + 321);
      if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v8 = v7[40];
        if ( (v8 & 0x800000) != 0 )
        {
          v9 = (char *)i + 2448;
          if ( a2 )
          {
            if ( *a2 )
            {
              v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD, char *))qword_1C01A1E40)(
                      v7 + 62,
                      (unsigned int)v7[64],
                      (unsigned int)a1[5],
                      v9);
              v4 = v10;
              if ( v10 < 0 )
              {
                v13 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v5);
                v13[3] = v4;
                v13[4] = (int)a1[5];
                v13[5] = *(int *)(*((_QWORD *)i + 321) + 252LL);
                v13[6] = *(unsigned int *)(*((_QWORD *)i + 321) + 248LL);
                v13[7] = *(unsigned int *)(*((_QWORD *)i + 321) + 256LL);
                WdLogEvent5_WdError(v13);
              }
            }
            else if ( (v8 & 4) != 0 )
            {
              v14 = (unsigned int)v7[64];
              v15 = v7 + 62;
LABEL_18:
              LODWORD(v4) = ((__int64 (__fastcall *)(_DWORD *, __int64, _QWORD, char *))qword_1C01A1E40)(
                              v15,
                              v14,
                              (unsigned int)a1[5],
                              v9);
              break;
            }
          }
          else if ( a1[2] == v7[62] && a1[3] == v7[63] )
          {
            v14 = (unsigned int)v7[64];
            if ( a1[4] == (_DWORD)v14 )
            {
              v15 = v7 + 62;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v5);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v16);
  }
  if ( (int)v4 >= 0 )
  {
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    GreIncrementDisplaySettingsUniqueness();
    xxxSendNotifyMessage(-1LL, 26LL, 159LL);
    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
  }
  return (unsigned int)v4;
}
