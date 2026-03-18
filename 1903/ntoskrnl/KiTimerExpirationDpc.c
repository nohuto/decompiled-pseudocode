/*
 * XREFs of KiTimerExpirationDpc @ 0x140166D20
 * Callers:
 *     <none>
 * Callees:
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     KiTimerExpiration @ 0x140166E04 (KiTimerExpiration.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall KiTimerExpirationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // [rsp+30h] [rbp-138h] BYREF
  int v8; // [rsp+38h] [rbp-130h]
  int v9; // [rsp+3Ch] [rbp-12Ch]
  _QWORD v10[34]; // [rsp+40h] [rbp-128h] BYREF

  v4 = (unsigned int)SystemArgument1;
  memset(v10, 0, sizeof(v10));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    EtwTraceKernelEvent((__int64)&v7, 1u, 0x40020000u, 0xF56u, 0x400A02u);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10[1] = MEMORY[0xFFFFF78000000014];
  _disable();
  v6 = MEMORY[0xFFFFF78000000008];
  CurrentPrcb->LastTimerHand = MEMORY[0xFFFFF78000000008] >> 18;
  _enable();
  KiTimerExpiration(CurrentPrcb, v4, v6, v10);
  CurrentPrcb->DpcData[0].ActiveDpc = 0LL;
  if ( CurrentPrcb->ClockOwner )
    KiTimer2Expiration((__int64)CurrentPrcb, v6, 1, v10);
}
