/*
 * XREFs of IsWindowGDIScaledDpiMessageEnabledX @ 0x1C01E70D0
 * Callers:
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C0231050 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsWindowGDIScaledDpiMessageEnabledX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) )
    return 0;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) + 448) )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
  v12 = 1;
  if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL) + 64LL) & 1) == 0 )
    return 0;
  v13 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v13 + 288) & 0x4000000F) != 0x40000000 || (*(_DWORD *)(v13 + 232) & 0x20000000) == 0 )
    return 0;
  return v12;
}
