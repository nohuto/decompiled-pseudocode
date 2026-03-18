/*
 * XREFs of rimObsPushInputMessage @ 0x1C01055D0
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01050B4 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimObsCopyMessage @ 0x1C0104F50 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // eax
  signed int v7; // esi
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  void *v10; // rdi
  _QWORD *v11; // rax

  if ( *(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = a1 + 136;
  v5 = *(_DWORD *)(v4 + 16);
  if ( v5 == -1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v5 = *(_DWORD *)(v4 + 16);
  }
  if ( v5 < *(_DWORD *)(v4 + 24) )
  {
    v8 = *(_QWORD *)(a2 + 24);
    v7 = v8 > 0xFFFFFFBF ? 0xC0000095 : 0;
    if ( v8 <= 0xFFFFFFBF )
    {
      v9 = v8 + 48;
      v10 = Win32AllocPoolZInit((unsigned int)(v8 + 64), 0x716D4F52u);
      if ( !v10 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0xAu,
          (__int64)&WPP_1670ca8aa8063ace32855d68d9fa11a1_Traceguids);
        v7 = -1073741670;
      }
      if ( v7 < 0 || (v7 = rimObsCopyMessage(a2, 0LL, (void **)v10 + 2, v9), v7 < 0) )
      {
        if ( v10 )
          Win32FreePool((__int64)v10);
      }
      else
      {
        v11 = *(_QWORD **)(v4 + 8);
        if ( *v11 != v4 )
          __fastfail(3u);
        *(_QWORD *)v10 = v4;
        *((_QWORD *)v10 + 1) = v11;
        *v11 = v10;
        *(_QWORD *)(v4 + 8) = v10;
        ++*(_DWORD *)(v4 + 16);
      }
    }
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 20);
    if ( v6 != -1 )
      *(_DWORD *)(v4 + 20) = v6 + 1;
    return (unsigned int)-1073741756;
  }
  return (unsigned int)v7;
}
