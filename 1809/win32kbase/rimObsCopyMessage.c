/*
 * XREFs of rimObsCopyMessage @ 0x1C012CB70
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C012CCD8 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C012D0DC (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C012D234 (rimObsPushInputMessage.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C012C89C (rimObsCalculateObserverMessageSize.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCopyMessage(__int64 a1, __int64 a2, void **a3, unsigned int a4)
{
  SIZE_T v4; // r14
  int v6; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  void **v11; // rdx
  void **v12; // r9
  _QWORD *v13; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  void *v16; // rcx
  ULONG64 v17; // r9

  v4 = a4;
  v6 = a2;
  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = 0;
  if ( (unsigned int)v4 < (unsigned int)rimObsCalculateObserverMessageSize((unsigned int *)a1, a2, (__int64)a3) )
    v10 = -1073741789;
  if ( v10 >= 0 )
  {
    if ( v4 < *(_QWORD *)(a1 + 24) + 48LL )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(3221225507LL, v8, v9);
    if ( v6 )
    {
      ProbeForWrite(a3, v4, 2u);
      memset(a3, 0, v4);
      v11 = a3 + 6;
      if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || v11 <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = *(_OWORD *)a1;
      *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v12 = a3 + 5;
        v13 = a3 + 5;
        if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
          v13 = (_QWORD *)MmUserProbeAddress;
        *v13 = v11;
        v14 = *(_QWORD *)(a1 + 24);
        v15 = *(const void **)(a1 + 40);
        v16 = *v12;
        v17 = (ULONG64)*v12 + v14;
        if ( v17 > MmUserProbeAddress || v17 <= (unsigned __int64)v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, v15, v14);
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
  return (unsigned int)v10;
}
