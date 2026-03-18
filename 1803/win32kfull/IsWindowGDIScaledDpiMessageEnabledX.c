/*
 * XREFs of IsWindowGDIScaledDpiMessageEnabledX @ 0x1C01AF68C
 * Callers:
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01F1CB0 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsWindowGDIScaledDpiMessageEnabledX(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rax
  unsigned int v6; // ecx
  __int64 v7; // rdx

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) )
    return 0;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3) + 448) )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v6 = 1;
  if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL) + 52LL) & 1) == 0 )
    return 0;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v7 + 288) & 0x4000000F) != 0x40000000 || (*(_DWORD *)(v7 + 232) & 0x20000000) == 0 )
    return 0;
  return v6;
}
