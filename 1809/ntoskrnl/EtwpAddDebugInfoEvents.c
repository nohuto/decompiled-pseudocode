/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x1406FF3A0
 * Callers:
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x14069B7E8 (EtwpAddLogHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406CAE34 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x1408BEEA8 (EtwpSendDbgId.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x1406FF520 (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  __int64 *v5; // r12
  int v6; // edi
  char v9; // r15
  int v10; // r13d
  __int64 v11; // rax
  int v12; // r15d
  int v13; // esi
  __int64 *i; // rsi
  __int64 *v15; // rax
  _OWORD *v16; // rax
  __int64 *v17; // rcx
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a3 - *(_DWORD *)(a2 + 48);
  if ( !a4 )
  {
    v19 = 0LL;
    v5 = &v19;
  }
  v9 = a5;
  v10 = a5 & 2;
  if ( (a5 & 2) != 0 )
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( (v9 & 1) != 0 && *(_QWORD *)(a1 + 112) != a1 + 112 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( NtBuildLabEx[v11] );
    if ( !EtwpAddEventToBuffer(a2, 66LL, v5, NtBuildLabEx, (int)v11 + 1, v6, &a5) )
      goto LABEL_19;
    v6 -= a5;
  }
  v12 = v9 & 4;
  if ( v12 )
  {
    v15 = *(__int64 **)(a1 + 128);
    v13 = 0;
    if ( !v15 )
      goto LABEL_14;
    do
    {
      if ( *((_BYTE *)v15 + 40) )
        break;
      v15 = (__int64 *)*v15;
      ++v13;
    }
    while ( v15 );
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 136);
  }
  if ( v13 )
  {
    v16 = (_OWORD *)EtwpAddEventToBuffer(a2, 68LL, v5, 0LL, 32 * v13, v6, &a5);
    if ( v16 )
    {
      v17 = *(__int64 **)(a1 + 128);
      do
      {
        *v16 = *(_OWORD *)(v17 + 1);
        v16 += 2;
        *(v16 - 1) = *(_OWORD *)(v17 + 3);
        v17 = (__int64 *)*v17;
        --v13;
      }
      while ( v13 );
      v6 -= a5;
    }
  }
LABEL_14:
  for ( i = *(__int64 **)(a1 + 112); i != (__int64 *)(a1 + 112); i = (__int64 *)*i )
  {
    if ( !v12 || !*((_BYTE *)i + 16) )
    {
      if ( !EtwpAddEventToBuffer(a2, 64LL, v5, (char *)i + 28, *((_DWORD *)i + 5) - 4, v6, &a5) )
        break;
      v6 -= a5;
    }
  }
LABEL_19:
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
    KeAbPostRelease(a1 + 704);
  }
}
