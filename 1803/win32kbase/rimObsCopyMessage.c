/*
 * XREFs of rimObsCopyMessage @ 0x1C0104F50
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01050B4 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C010547C (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01055D0 (rimObsPushInputMessage.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C0104C94 (rimObsCalculateObserverMessageSize.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCopyMessage(__int64 a1, __int64 a2, void **a3, unsigned int a4)
{
  SIZE_T v4; // r14
  int v6; // r15d
  __int64 v8; // rdx
  int v9; // esi
  void **v10; // rdx
  void **v11; // r9
  _QWORD *v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  void *v15; // rcx
  ULONG64 v16; // r9

  v4 = a4;
  v6 = a2;
  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v9 = 0;
  if ( (unsigned int)v4 < (unsigned int)rimObsCalculateObserverMessageSize((unsigned int *)a1) )
    v9 = -1073741789;
  if ( v9 >= 0 )
  {
    if ( v4 < *(_QWORD *)(a1 + 24) + 48LL )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(3221225507LL, v8);
    if ( v6 )
    {
      ProbeForWrite(a3, v4, 2u);
      memset(a3, 0, v4);
      v10 = a3 + 6;
      if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || v10 <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = *(_OWORD *)a1;
      *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v11 = a3 + 5;
        v12 = a3 + 5;
        if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = v10;
        v13 = *(_QWORD *)(a1 + 24);
        v14 = *(const void **)(a1 + 40);
        v15 = *v11;
        v16 = (ULONG64)*v11 + v13;
        if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)v15 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v15, v14, v13);
      }
    }
    else
    {
      memset(a3, 0, v4);
      *(_OWORD *)a3 = *(_OWORD *)a1;
      *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 40) )
      {
        a3[5] = a3 + 6;
        memmove(a3 + 6, *(const void **)(a1 + 40), *(_QWORD *)(a1 + 24));
      }
    }
  }
  return (unsigned int)v9;
}
