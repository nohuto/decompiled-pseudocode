/*
 * XREFs of KiForceIdleUpdateSchedulerParkState @ 0x14029B4F0
 * Callers:
 *     KiForceIdleStartDpcRoutine @ 0x14029B2F0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14029B400 (KiForceIdleStopDpcRoutine.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14029B198 (KiForceIdleParkUnparkProcessor.c)
 */

__int64 __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 *v3; // rdx
  unsigned int v4; // edi
  int v5; // eax
  __int64 result; // rax
  struct _KPRCB *Prcb; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 *v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v12; // [rsp+50h] [rbp-B8h]
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v14[21]; // [rsp+60h] [rbp-A8h]

  CurrentPrcb = KeGetCurrentPrcb();
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  v3 = (unsigned __int16 *)&KiForceIdleUnparkRestoreMask;
  if ( a1 )
    v3 = (unsigned __int16 *)KeActiveProcessors;
  KeCopyAffinityEx((__int64)&v13, v3);
  v4 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
  v5 = KeCountSetBitsAffinityEx(&v13);
  if ( ((v14[v4 >> 6] >> (v4 & 0x3F)) & 1) != 0 )
    --v5;
  KiForceIdlePendingDpcCount = v5;
  v11[1] = (unsigned __int16 *)v14[0];
  v11[0] = (unsigned __int16 *)&v13;
  v12 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v11);
    if ( (_DWORD)result )
      break;
    Prcb = (struct _KPRCB *)KeGetPrcb(v10);
    if ( Prcb == KeGetCurrentPrcb() )
    {
      LOBYTE(v8) = a1;
      KiForceIdleParkUnparkProcessor((__int64)Prcb, v8, v9);
    }
    else
    {
      KiInsertQueueDpc((ULONG_PTR)&Prcb->ForceIdleDpc, a1, 0LL, 0LL, 0);
    }
  }
  return result;
}
