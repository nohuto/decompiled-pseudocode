/*
 * XREFs of PnprQuiesceProcessors @ 0x1405AA548
 * Callers:
 *     PnprQuiesce @ 0x1402A0658 (PnprQuiesce.c)
 * Callees:
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x14009A150 (KeRemoveProcessorAffinityEx.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeSuspendClockTimerSafe @ 0x1402A51E0 (KeSuspendClockTimerSafe.c)
 *     PnprGetMillisecondCounter @ 0x1405A95CC (PnprGetMillisecondCounter.c)
 */

__int64 PnprQuiesceProcessors()
{
  void *v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int128 v2; // xmm1
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _DWORD *v11; // rcx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int128 v29; // xmm1
  unsigned int v30; // r8d
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  int v44; // ebx
  int v45; // eax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rax
  int i; // edx
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v58[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v59; // [rsp+40h] [rbp-C8h]
  int v60; // [rsp+42h] [rbp-C6h]
  __int16 v61; // [rsp+46h] [rbp-C2h]
  struct _KDPC Dpc; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v63[11]; // [rsp+88h] [rbp-80h] BYREF

  memset(v63, 0, 0xA8uLL);
  v60 = 0;
  v61 = 0;
  memset(&Dpc, 0, sizeof(Dpc));
  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  Dpc.Importance = 2;
  v2 = *(_OWORD *)&KeActiveProcessors[4];
  v3 = *(_QWORD *)&KeActiveProcessors[40];
  v63[0] = *(_OWORD *)KeActiveProcessors;
  v4 = *(_OWORD *)&KeActiveProcessors[8];
  v63[1] = v2;
  v5 = *(_OWORD *)&KeActiveProcessors[12];
  v63[2] = v4;
  v6 = *(_OWORD *)&KeActiveProcessors[16];
  v63[3] = v5;
  v7 = *(_OWORD *)&KeActiveProcessors[20];
  v63[4] = v6;
  v8 = *(_OWORD *)&KeActiveProcessors[24];
  v63[5] = v7;
  v9 = *(_OWORD *)&KeActiveProcessors[32];
  v63[6] = v8;
  v63[7] = *(_OWORD *)&KeActiveProcessors[28];
  v10 = *(_OWORD *)&KeActiveProcessors[36];
  v63[8] = v9;
  v63[9] = v10;
  *(_QWORD *)&v63[10] = v3;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)v63, *(_DWORD *)(PnprContext + 180));
  v58[1] = *((unsigned __int16 **)&v63[0] + 1);
  v58[0] = (unsigned __int16 *)v63;
  v59 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v58) )
  {
    if ( !Dpc.DpcData )
      Dpc.Number = DeferredContext_4 + 1280;
    DeferredContext = 0;
    KeInsertQueueDpc(&Dpc, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && (int)off_140424418[0]() < 0 )
  {
    v11 = (_DWORD *)PnprContext;
    v12 = 2447;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD))off_1404243C8[0])(0LL, *(_QWORD *)(PnprContext + 20872));
    KeSuspendClockTimerSafe();
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v25 = PnprContext;
    *(_QWORD *)(PnprContext + 20992) = MillisecondCounter;
    _InterlockedAdd((volatile signed __int32 *)(v25 + 184), 1u);
    while ( *(_DWORD *)(PnprContext + 184) < (int)v0 )
      _mm_pause();
    v26 = PnprContext;
    if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
      while ( *(_DWORD *)(PnprContext + 192) < (int)v0 )
        _mm_pause();
      LOBYTE(v26) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(PnprContext + 20976))(*(_QWORD *)(PnprContext + 20880), v26);
      v27 = PnprGetMillisecondCounter(0);
      v26 = PnprContext;
      *(_DWORD *)(PnprContext + 21000) = v27;
    }
    v28 = *(_QWORD *)&KeActiveProcessors[40];
    v29 = *(_OWORD *)&KeActiveProcessors[4];
    v30 = 0;
    v63[0] = *(_OWORD *)KeActiveProcessors;
    v31 = *(_OWORD *)&KeActiveProcessors[8];
    v63[1] = v29;
    v32 = *(_OWORD *)&KeActiveProcessors[12];
    v63[2] = v31;
    v33 = *(_OWORD *)&KeActiveProcessors[16];
    v63[3] = v32;
    v34 = *(_OWORD *)&KeActiveProcessors[20];
    v63[4] = v33;
    v35 = *(_OWORD *)&KeActiveProcessors[24];
    v63[5] = v34;
    v36 = *(_OWORD *)&KeActiveProcessors[28];
    v63[6] = v35;
    v37 = *(_OWORD *)&KeActiveProcessors[32];
    v63[7] = v36;
    v38 = *(_OWORD *)&KeActiveProcessors[36];
    v63[8] = v37;
    v63[9] = v38;
    *(_QWORD *)&v63[10] = v28;
    v39 = *(_QWORD *)(v26 + 16);
    if ( *(_DWORD *)(v39 + 8) )
    {
      do
      {
        v40 = v30++;
        *(_QWORD *)&KeActiveProcessors[2 * v40 + 2] &= ~*(_QWORD *)(*(_QWORD *)v39 + 8 * v40);
      }
      while ( v30 < *(_DWORD *)(v39 + 8) );
    }
    v11 = (_DWORD *)PnprContext;
    v41 = *(_QWORD *)(PnprContext + 16);
    *(_QWORD *)(PnprContext + 200) = 1LL;
    if ( !*(_DWORD *)(v41 + 16)
      || (v42 = PnprGetMillisecondCounter(0),
          v43 = PnprContext,
          *(_DWORD *)(PnprContext + 21004) = v42,
          v44 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1404243C8[0])(1LL, *(_QWORD *)(v43 + 20872)),
          v45 = PnprGetMillisecondCounter(0),
          v11 = (_DWORD *)PnprContext,
          *(_DWORD *)(PnprContext + 21008) = v45,
          v44 >= 0) )
    {
      *(_OWORD *)KeActiveProcessors = v63[0];
      v46 = v63[2];
      *(_OWORD *)&KeActiveProcessors[4] = v63[1];
      v47 = v63[3];
      *(_OWORD *)&KeActiveProcessors[8] = v46;
      v48 = v63[4];
      *(_OWORD *)&KeActiveProcessors[12] = v47;
      v49 = v63[5];
      *(_OWORD *)&KeActiveProcessors[16] = v48;
      v50 = v63[6];
      *(_OWORD *)&KeActiveProcessors[20] = v49;
      v51 = v63[7];
      *(_OWORD *)&KeActiveProcessors[24] = v50;
      v52 = v63[8];
      *(_OWORD *)&KeActiveProcessors[28] = v51;
      v53 = v63[9];
      v54 = *(_QWORD *)&v63[10];
      *(_OWORD *)&KeActiveProcessors[32] = v52;
      *(_OWORD *)&KeActiveProcessors[36] = v53;
      *(_QWORD *)&KeActiveProcessors[40] = v54;
      for ( i = v11[51]; ; i = *(_DWORD *)(PnprContext + 204) )
      {
        result = PnprContext;
        if ( i >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
          break;
        _mm_pause();
      }
      return result;
    }
    v12 = 2532;
  }
  v13 = v11[5246];
  if ( !v13 )
    v13 = v12;
  v11[5246] = v13;
  v14 = v11[5247];
  if ( !v14 )
    v14 = 1;
  v11[5247] = v14;
  *(_OWORD *)KeActiveProcessors = v63[0];
  v15 = v63[2];
  *(_OWORD *)&KeActiveProcessors[4] = v63[1];
  v16 = v63[3];
  *(_OWORD *)&KeActiveProcessors[8] = v15;
  v17 = v63[4];
  *(_OWORD *)&KeActiveProcessors[12] = v16;
  v18 = v63[5];
  *(_OWORD *)&KeActiveProcessors[16] = v17;
  v19 = v63[6];
  *(_OWORD *)&KeActiveProcessors[20] = v18;
  v20 = v63[7];
  *(_OWORD *)&KeActiveProcessors[24] = v19;
  v21 = v63[8];
  *(_OWORD *)&KeActiveProcessors[28] = v20;
  v22 = v63[9];
  result = *(_QWORD *)&v63[10];
  *(_OWORD *)&KeActiveProcessors[32] = v21;
  *(_OWORD *)&KeActiveProcessors[36] = v22;
  *(_QWORD *)&KeActiveProcessors[40] = result;
  return result;
}
