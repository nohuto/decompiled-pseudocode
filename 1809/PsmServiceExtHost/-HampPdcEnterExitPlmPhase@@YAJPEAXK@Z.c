/*
 * XREFs of ?HampPdcEnterExitPlmPhase@@YAJPEAXK@Z @ 0x18006DCD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006DAC4 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006DE40 (-HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006DE9C (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampPdcEnterExitPlmPhase(struct _HAM_PDC_CONTEXT *a1, int a2)
{
  DWORD v4; // ebx
  unsigned int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v8[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v10; // [rsp+F0h] [rbp-10h]
  int v11; // [rsp+F8h] [rbp-8h]
  int v12; // [rsp+FCh] [rbp-4h]
  int *v13; // [rsp+100h] [rbp+0h]
  int v14; // [rsp+108h] [rbp+8h]
  int v15; // [rsp+10Ch] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C0C3, 0LL, 0LL, 2u, &pData);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      HampPdcEnterPlmPhase(a1);
      v6 = 259;
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    HampPdcExitPlmPhase(a1);
    HampWakeManagerNotifyConnectedStandbyExit((struct _HAM_WAKE_REFERENCE_MANAGER *)(*(_QWORD *)a1 + 408LL));
    v6 = 0;
  }
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v6;
    v13 = &v7;
    v11 = 4;
    v7 = a2;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BFE8, 0LL, 0LL, 4u, &pData);
  }
  return v6;
}
