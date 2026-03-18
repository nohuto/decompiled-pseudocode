/*
 * XREFs of IsWindowGDIScaledDpiMessageEnabledX @ 0x1C01E6F50
 * Callers:
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C0230A30 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsWindowGDIScaledDpiMessageEnabledX(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
    return 0;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5) + 448) )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
  v9 = 1;
  if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL) + 64LL) & 1) == 0 )
    return 0;
  v10 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v10 + 288) & 0x4000000F) != 0x40000000 || (*(_DWORD *)(v10 + 232) & 0x20000000) == 0 )
    return 0;
  return v9;
}
