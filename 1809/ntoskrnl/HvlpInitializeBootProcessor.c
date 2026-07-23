/*
 * XREFs of HvlpInitializeBootProcessor @ 0x1402722A0
 * Callers:
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 * Callees:
 *     HvlEnlightenProcessor @ 0x140178780 (HvlEnlightenProcessor.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlpMapStatisticsPage @ 0x140272430 (HvlpMapStatisticsPage.c)
 */

__int64 __fastcall HvlpInitializeBootProcessor(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rax
  __int64 v6; // rax
  signed __int32 v7[12]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0LL;
  if ( HvlHypervisorConnected )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedOr(v7, 0);
    v10 = 0LL;
    v11 = 0LL;
    v9 = 0LL;
    if ( (HvlpFlags & 0x80000) != 0 && (HvlpFlags & 2) == 0 )
    {
      v4 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))qword_1403FF458)(a1, 1LL, &v10, 4LL);
      if ( !v4 )
        return 3221225626LL;
      CurrentPrcb->VirtualApicAssist = (void *)v4;
    }
    if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
    {
      v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_1403FF458)(a1, 1LL, &v11);
      if ( v6 )
        CurrentPrcb->SchedulerAssist = (void *)v6;
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v8[1] = 0LL;
      v8[0] = 0LL;
      if ( (int)HvlpMapStatisticsPage(2LL, v8, &v9) >= 0 )
        v1 = ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1403FF460)(v9, 1LL, 4LL);
      CurrentPrcb->StatisticsPage = (unsigned __int64 *)v1;
    }
    HvlEnlightenProcessor(0);
  }
  return 0LL;
}
