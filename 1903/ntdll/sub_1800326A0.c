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

__int64 __fastcall sub_1800326A0(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v6; // rcx
  bool v8; // bp
  __int64 *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v16; // eax

  v6 = 1LL;
  v8 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  v10 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v11 = (-(__int64)v8 & 0xFFFFFFFFFFFFFF88uLL) + a2 + 128;
  if ( v8 )
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
      v16 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v16);
      v6 = MEMORY[0];
    }
    else
    {
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v10 = v6;
    }
    v12 = v6 - *a3;
    if ( v12 < v6 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v10 = v12;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6) )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    sub_18010F7A8(v11, a1);
  RtlAcquireSRWLockExclusive(a2);
  sub_180032940(v11, a1);
  LOBYTE(v14) = v8;
  sub_1800327D4(v11, v14);
  return RtlReleaseSRWLockExclusive(a2);
}
