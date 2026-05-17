/*
 * XREFs of RtlUpdateTimer @ 0x18007E540
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030D7C @ 0x180030D7C (sub_180030D7C.c)
 *     sub_1800310E4 @ 0x1800310E4 (sub_1800310E4.c)
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlUpdateTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r14
  int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v5 = (unsigned int)a3;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
    return 3221225480LL;
  v7 = sub_180030D7C(&v9, 0, a3);
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
    if ( *(_BYTE *)(a2 + 88) || !*(_DWORD *)(a2 + 92) )
    {
      *(_BYTE *)(a2 + 88) = a4 != 0;
      v10 = -10000 * v5;
      TpSetTimerEx(*(_QWORD *)(a2 + 64), (__int64)&v10, a4, 0);
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
    v7 = 0;
  }
  sub_1800310E4(v9);
  return (unsigned int)v7;
}
