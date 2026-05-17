/*
 * XREFs of TppWaitCompletion @ 0x18002BD00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppSetupNextWait @ 0x18002C320 (TppSetupNextWait.c)
 *     TppCancelTimer @ 0x18002C984 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWaitCompletion(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 v7; // r8
  signed int v8; // edi
  char v9; // cl

  v4 = (volatile signed __int64 *)(a3 + 240);
  RtlAcquireSRWLockExclusive(a3 + 240, a2, (unsigned __int64 *)a3, a4);
  LOBYTE(v7) = 1;
  v8 = 0;
  if ( (unsigned __int8)TppCancelTimer(a3, *(_QWORD *)(a3 + 144) + 112LL, v7) )
    v8 = -1;
  v9 = *(_BYTE *)(a3 + 464);
  if ( (v9 & 4) == 0 )
  {
    TppBarrierAdjust(a3 + 56, 1LL);
    v9 = *(_BYTE *)(a3 + 464);
  }
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v9 & 1) != 0 )
    v8 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 376), (a3 + 384) & -(__int64)((v9 & 2) != 0));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v8 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v8);
    v8 = 0;
  }
  RtlReleaseSRWLockExclusive(v4);
  if ( v8 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v8) == -v8 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(a1, a3, 0LL);
}
