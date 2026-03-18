/*
 * XREFs of xxxEnableWindowGDIScaledDpiMessageX @ 0x1C0155180
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C01550E0 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxEnableWindowGDIScaledDpiMessageX(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = a2;
  v4 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 456) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 456) + 8LL)
                      + 64LL) & 1) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 40);
        if ( (*(_DWORD *)(v7 + 288) & 0x4000000F) == 0x40000000 )
        {
          v4 = 1;
          *(_DWORD *)(v7 + 232) ^= (*(_DWORD *)(v7 + 232) ^ (v3 << 29)) & 0x20000000;
        }
      }
    }
  }
  return v4;
}
