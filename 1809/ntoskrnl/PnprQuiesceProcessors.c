/*
 * XREFs of PnprQuiesceProcessors @ 0x14057B720
 * Callers:
 *     PnprQuiesce @ 0x14028A75C (PnprQuiesce.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeSuspendClockTimerSafe @ 0x14028EB90 (KeSuspendClockTimerSafe.c)
 *     PnprGetMillisecondCounter @ 0x14057A7BC (PnprGetMillisecondCounter.c)
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
  struct _KDPC Dpc; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+88h] [rbp-80h] BYREF
  __int128 v62; // [rsp+98h] [rbp-70h]
  __int128 v63; // [rsp+A8h] [rbp-60h]
  __int128 v64; // [rsp+B8h] [rbp-50h]
  __int128 v65; // [rsp+C8h] [rbp-40h]
  __int128 v66; // [rsp+D8h] [rbp-30h]
  __int128 v67; // [rsp+E8h] [rbp-20h]
  __int128 v68; // [rsp+F8h] [rbp-10h]
  __int128 v69; // [rsp+108h] [rbp+0h]
  __int128 v70; // [rsp+118h] [rbp+10h]
  __int64 v71; // [rsp+128h] [rbp+20h]

  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  Dpc.Importance = 2;
  v2 = *(_OWORD *)&KeActiveProcessors[4];
  v3 = *(_QWORD *)&KeActiveProcessors[40];
  v61 = *(_OWORD *)KeActiveProcessors;
  v4 = *(_OWORD *)&KeActiveProcessors[8];
  v62 = v2;
  v5 = *(_OWORD *)&KeActiveProcessors[12];
  v63 = v4;
  v6 = *(_OWORD *)&KeActiveProcessors[16];
  v64 = v5;
  v7 = *(_OWORD *)&KeActiveProcessors[20];
  v65 = v6;
  v8 = *(_OWORD *)&KeActiveProcessors[24];
  v66 = v7;
  v9 = *(_OWORD *)&KeActiveProcessors[32];
  v67 = v8;
  v68 = *(_OWORD *)&KeActiveProcessors[28];
  v10 = *(_OWORD *)&KeActiveProcessors[36];
  v69 = v9;
  v70 = v10;
  v71 = v3;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)&v61, *(_DWORD *)(PnprContext + 180));
  v58[1] = *((unsigned __int16 **)&v61 + 1);
  v58[0] = (unsigned __int16 *)&v61;
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
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && (int)off_1403FF418[0]() < 0 )
  {
    v11 = (_DWORD *)PnprContext;
    v12 = 2451;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD))off_1403FF3C8[0])(0LL, *(_QWORD *)(PnprContext + 20872));
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
    v61 = *(_OWORD *)KeActiveProcessors;
    v31 = *(_OWORD *)&KeActiveProcessors[8];
    v62 = v29;
    v32 = *(_OWORD *)&KeActiveProcessors[12];
    v63 = v31;
    v33 = *(_OWORD *)&KeActiveProcessors[16];
    v64 = v32;
    v34 = *(_OWORD *)&KeActiveProcessors[20];
    v65 = v33;
    v35 = *(_OWORD *)&KeActiveProcessors[24];
    v66 = v34;
    v36 = *(_OWORD *)&KeActiveProcessors[28];
    v67 = v35;
    v37 = *(_OWORD *)&KeActiveProcessors[32];
    v68 = v36;
    v38 = *(_OWORD *)&KeActiveProcessors[36];
    v69 = v37;
    v70 = v38;
    v71 = v28;
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
          v44 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1403FF3C8[0])(1LL, *(_QWORD *)(v43 + 20872)),
          v45 = PnprGetMillisecondCounter(0),
          v11 = (_DWORD *)PnprContext,
          *(_DWORD *)(PnprContext + 21008) = v45,
          v44 >= 0) )
    {
      *(_OWORD *)KeActiveProcessors = v61;
      v46 = v63;
      *(_OWORD *)&KeActiveProcessors[4] = v62;
      v47 = v64;
      *(_OWORD *)&KeActiveProcessors[8] = v46;
      v48 = v65;
      *(_OWORD *)&KeActiveProcessors[12] = v47;
      v49 = v66;
      *(_OWORD *)&KeActiveProcessors[16] = v48;
      v50 = v67;
      *(_OWORD *)&KeActiveProcessors[20] = v49;
      v51 = v68;
      *(_OWORD *)&KeActiveProcessors[24] = v50;
      v52 = v69;
      *(_OWORD *)&KeActiveProcessors[28] = v51;
      v53 = v70;
      v54 = v71;
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
    v12 = 2536;
  }
  v13 = v11[5246];
  if ( !v13 )
    v13 = v12;
  v11[5246] = v13;
  v14 = v11[5247];
  if ( !v14 )
    v14 = 1;
  v11[5247] = v14;
  *(_OWORD *)KeActiveProcessors = v61;
  v15 = v63;
  *(_OWORD *)&KeActiveProcessors[4] = v62;
  v16 = v64;
  *(_OWORD *)&KeActiveProcessors[8] = v15;
  v17 = v65;
  *(_OWORD *)&KeActiveProcessors[12] = v16;
  v18 = v66;
  *(_OWORD *)&KeActiveProcessors[16] = v17;
  v19 = v67;
  *(_OWORD *)&KeActiveProcessors[20] = v18;
  v20 = v68;
  *(_OWORD *)&KeActiveProcessors[24] = v19;
  v21 = v69;
  *(_OWORD *)&KeActiveProcessors[28] = v20;
  v22 = v70;
  result = v71;
  *(_OWORD *)&KeActiveProcessors[32] = v21;
  *(_OWORD *)&KeActiveProcessors[36] = v22;
  *(_QWORD *)&KeActiveProcessors[40] = result;
  return result;
}
