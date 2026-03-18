/*
 * XREFs of rimObsPushInputMessage @ 0x1C0157FD0
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C0157A68 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     rimObsCopyMessage @ 0x1C0157900 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebp
  void *v11; // rax
  int v12; // edx
  _QWORD *v13; // rsi
  _QWORD *v14; // rax

  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = a1 + 144;
  v6 = *(_DWORD *)(v5 + 16);
  if ( v6 == -1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v6 = *(_DWORD *)(v5 + 16);
  }
  if ( v6 < *(_DWORD *)(v5 + 24) )
  {
    if ( *((_QWORD *)a2 + 3) <= 0xFFFFFFBFuLL )
    {
      v9 = a2[6];
      v10 = v9 + 48;
      v11 = Win32AllocPoolZInit((unsigned int)(v9 + 64), 1902989138LL);
      v13 = v11;
      if ( v11 )
      {
        v8 = rimObsCopyMessage((__int64)a2, 0LL, (void **)v11 + 2, v10);
        if ( v8 < 0 )
        {
          Win32FreePool((__int64)v13);
        }
        else
        {
          v14 = *(_QWORD **)(v5 + 8);
          if ( *v14 != v5 )
            __fastfail(3u);
          *v13 = v5;
          v13[1] = v14;
          *v14 = v13;
          *(_QWORD *)(v5 + 8) = v13;
          ++*(_DWORD *)(v5 + 16);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 10, (__int64)&WPP_96b8d168e8993da494f8231fea9fe50b_Traceguids);
        }
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 20);
    if ( v7 != -1 )
      *(_DWORD *)(v5 + 20) = v7 + 1;
    return (unsigned int)-1073741756;
  }
  return (unsigned int)v8;
}
