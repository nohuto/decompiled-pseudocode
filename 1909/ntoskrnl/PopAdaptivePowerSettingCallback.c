/*
 * XREFs of PopAdaptivePowerSettingCallback @ 0x140759C90
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x14018A3F0 (PopVideoPowerSettingCallback.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1406EF0C8 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406F05CC (PopReleaseAdaptiveLock.c)
 *     PopDiagTracePolicyChange @ 0x140759D8C (PopDiagTracePolicyChange.c)
 *     PopCheckConsoleTimeouts @ 0x1408B57E4 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1408B592C (PopInputDisabled.c)
 */

__int64 __fastcall PopAdaptivePowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  unsigned int v5; // ebx
  bool v6; // bp
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax

  if ( a3 != 4 )
    return (unsigned int)-1073741811;
  v5 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = PopConsoleSession != 0;
  PopAcquireAdaptiveLock(PopConsoleSession == 0);
  v8 = *a1;
  v9 = *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 == *a1 )
    v9 = *(_QWORD *)GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data4 - a1[1];
  if ( !v9 )
  {
    v12 = *a2;
    PopInputTimeout = *a2;
    if ( v6 )
    {
      BYTE3(qword_140438770) = 1;
      DWORD2(PopLazyContext) = v12;
      if ( !v12 )
      {
        LOBYTE(v7) = 1;
        PopInputDisabled((unsigned int)PopConsoleContext, 0LL, v7);
      }
    }
    goto LABEL_14;
  }
  v10 = *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 == v8 )
    v10 = *(_QWORD *)GUID_VIDEO_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v10 )
  {
    PopDisplayTimeout = *a2;
LABEL_14:
    PopDiagTracePolicyChange();
    if ( v6 )
      PopCheckConsoleTimeouts();
    goto LABEL_16;
  }
  v11 = *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 == v8 )
    v11 = *(_QWORD *)GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data4 - a1[1];
  if ( !v11 )
  {
    PopAdaptiveLockConsoleTimeout = *a2;
    goto LABEL_14;
  }
  v5 = -1073741811;
LABEL_16:
  PopReleaseAdaptiveLock();
  return v5;
}
