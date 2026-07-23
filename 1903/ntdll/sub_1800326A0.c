/*
 * XREFs of sub_1800326A0 @ 0x1800326A0
 * Callers:
 *     sub_180031544 @ 0x180031544 (sub_180031544.c)
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 * Callees:
 *     sub_1800327D4 @ 0x1800327D4 (sub_1800327D4.c)
 *     sub_180032940 @ 0x180032940 (sub_180032940.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180074070 (RtlNtStatusToDosErrorNoTeb.c)
 *     sub_18010F7A8 @ 0x18010F7A8 (sub_18010F7A8.c)
 */

void __fastcall sub_1800326A0(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  bool v7; // bp
  __int64 *v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  LONG v15; // eax

  v7 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  v9 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v10 = (unsigned __int64)&a2[16] + (-(__int64)v7 & 0xFFFFFFFFFFFFFF88uLL);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v12 = *a3;
    if ( !*a3 )
      v12 = 1LL;
  }
  else
  {
    if ( a1 == -328 )
    {
      v15 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v15);
      v11 = MEMORY[0];
    }
    else
    {
      v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v9 = v11;
    }
    v12 = v11 - *a3;
    if ( v12 < v11 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v9 = v12;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    sub_18010F7A8(v10, a1);
  RtlAcquireSRWLockExclusive(a2);
  sub_180032940(v10, a1);
  LOBYTE(v14) = v7;
  sub_1800327D4(v10, v14);
  RtlReleaseSRWLockExclusive(a2);
}
