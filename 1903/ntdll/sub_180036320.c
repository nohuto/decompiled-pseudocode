/*
 * XREFs of sub_180036320 @ 0x180036320
 * Callers:
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 *     sub_180032940 @ 0x180032940 (sub_180032940.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180066D3C @ 0x180066D3C (sub_180066D3C.c)
 *     ZwCancelWaitCompletionPacket @ 0x18009D930 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010EF18 @ 0x18010EF18 (sub_18010EF18.c)
 *     sub_18010F68C @ 0x18010F68C (sub_18010F68C.c)
 */

__int64 __fastcall sub_180036320(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  void *v12; // rcx
  unsigned __int32 v13; // eax
  __int64 v14; // rbx

  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    sub_18010F68C((char *)&a2[16] + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFF88uLL), a1);
  v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v8 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v8 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v12 = *(void **)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v13 = ZwCancelWaitCompletionPacket(v12, 0);
      if ( v13 )
      {
        if ( v13 != 259 && v13 != -1073741536 )
          sub_18010EF18(v13, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_9;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v9 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v9 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v7;
        v11 = 10000 * v9 + *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v11;
        if ( v11 <= v7 )
          *(_QWORD *)(a1 + 328) = 10000 * v9 + v7 - (v7 - v11) % (10000 * v9);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        sub_180032940((__int64)&a2[16], a1);
        sub_1800327D4((__int64)&a2[16], 0);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    sub_180038510(a1);
LABEL_9:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v14 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  sub_180066D3C(v14);
LABEL_10:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
