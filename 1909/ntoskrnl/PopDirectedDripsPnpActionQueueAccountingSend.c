/*
 * XREFs of PopDirectedDripsPnpActionQueueAccountingSend @ 0x1402F1140
 * Callers:
 *     PopDirectedDripsNotify @ 0x140749280 (PopDirectedDripsNotify.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe @ 0x1402F13FC (PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe.c)
 *     PopDirectedDripsDiagTracePnpActionQueueSessionData @ 0x1408B81B0 (PopDirectedDripsDiagTracePnpActionQueueSessionData.c)
 */

__int64 PopDirectedDripsPnpActionQueueAccountingSend()
{
  KIRQL v0; // al
  char v1; // di
  KIRQL v2; // bl
  __int64 v3; // rsi
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  int v18; // ett
  _OWORD v19[6]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v20; // [rsp+80h] [rbp-F8h]
  _OWORD v21[13]; // [rsp+90h] [rbp-E8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1404449E0);
  v1 = byte_140444A58;
  v2 = v0;
  if ( byte_140444A58 )
    PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe(PopDirectedDripsState, 0LL);
  v3 = qword_140444A60;
  v19[0] = xmmword_140444B48;
  v19[1] = xmmword_140444B58;
  v19[2] = xmmword_140444B68;
  v19[3] = xmmword_140444B78;
  v19[4] = xmmword_140444B88;
  v20 = qword_140444BA8;
  v4 = *(_OWORD *)&PopDirectedDripsState[182];
  v19[5] = xmmword_140444B98;
  v5 = *(_OWORD *)&PopDirectedDripsState[186];
  v21[0] = v4;
  v6 = *(_OWORD *)&PopDirectedDripsState[190];
  v21[1] = v5;
  v7 = *(_OWORD *)&PopDirectedDripsState[194];
  v21[2] = v6;
  v8 = *(_OWORD *)&PopDirectedDripsState[198];
  v21[3] = v7;
  v9 = *(_OWORD *)&PopDirectedDripsState[202];
  v21[4] = v8;
  v10 = *(_OWORD *)&PopDirectedDripsState[206];
  v21[5] = v9;
  v21[6] = v10;
  v21[7] = *(_OWORD *)&PopDirectedDripsState[210];
  v11 = *(_OWORD *)&PopDirectedDripsState[218];
  v21[8] = *(_OWORD *)&PopDirectedDripsState[214];
  v12 = *(_OWORD *)&PopDirectedDripsState[222];
  v21[9] = v11;
  v13 = *(_OWORD *)&PopDirectedDripsState[226];
  v21[10] = v12;
  v14 = *(_OWORD *)&PopDirectedDripsState[230];
  qword_140444A60 = 0LL;
  v21[11] = v13;
  v21[12] = v14;
  memset(&xmmword_140444B48, 0, 0x68uLL);
  memset(&unk_140444A78, 0, 0xD0uLL);
  if ( v1 )
  {
    LOBYTE(v15) = 1;
    PopDirectedDripsPnpActionQueueAccountingUpdateUnsafe(PopDirectedDripsState, v15);
  }
  KxReleaseSpinLock(&qword_1404449E0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  _m_prefetchw(PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState[0];
  do
  {
    v18 = result;
    result = (unsigned int)_InterlockedCompareExchange(PopDirectedDripsState, result, result);
  }
  while ( v18 != (_DWORD)result );
  if ( (result & 1) != 0 )
    return PopDirectedDripsDiagTracePnpActionQueueSessionData(v3, v19, v21);
  return result;
}
