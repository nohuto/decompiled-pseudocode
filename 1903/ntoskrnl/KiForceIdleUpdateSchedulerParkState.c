/*
 * XREFs of KiForceIdleUpdateSchedulerParkState @ 0x1402B27A0
 * Callers:
 *     KiForceIdleStartDpcRoutine @ 0x1402B25A0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x1402B26B0 (KiForceIdleStopDpcRoutine.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1400B8D40 (KeCountSetBitsAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeOrAffinityEx @ 0x1400FDD80 (KeOrAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiForceIdleParkUnparkProcessor @ 0x1402B2438 (KiForceIdleParkUnparkProcessor.c)
 */

__int64 __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v3; // edi
  int v4; // eax
  struct _KPRCB *Prcb; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 *v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h]
  __int64 v10; // [rsp+50h] [rbp-B8h]
  _QWORD v11[22]; // [rsp+58h] [rbp-B0h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v11, 0, 0xA8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  if ( a1 )
  {
    KeCopyAffinityEx((__int64)v11, (unsigned __int16 *)KeActiveProcessors);
  }
  else
  {
    KeCopyAffinityEx((__int64)v11, KiForceIdleUnparkRestoreMask);
    if ( PoSoftParkingAllowed )
      KeOrAffinityEx((unsigned __int16 *)v11, KiForceIdleSoftParkRestoreMask, v11);
  }
  v3 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
  v4 = KeCountSetBitsAffinityEx(v11);
  if ( ((v11[(v3 >> 6) + 1] >> (v3 & 0x3F)) & 1) != 0 )
    --v4;
  KiForceIdlePendingDpcCount = v4;
  v9 = v11[1];
  v8 = (unsigned __int16 *)v11;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v7, &v8);
    if ( (_DWORD)result )
      break;
    Prcb = (struct _KPRCB *)KeGetPrcb(v7);
    if ( Prcb == KeGetCurrentPrcb() )
      KiForceIdleParkUnparkProcessor((__int64)Prcb, a1);
    else
      KiInsertQueueDpc((ULONG_PTR)&Prcb->ForceIdleDpc, a1, 0LL, 0LL, 0);
  }
  return result;
}
