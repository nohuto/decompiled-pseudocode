/*
 * XREFs of xxxEnableWindowGDIScaledDpiMessageX @ 0x1C015C530
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C015C470 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxEnableWindowGDIScaledDpiMessageX(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v4 = a2;
  v5 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7) + 448) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9) + 448)
                                    + 8LL)
                      + 64LL) & 1) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 40);
        if ( (*(_DWORD *)(v10 + 288) & 0x4000000F) == 0x40000000 )
        {
          v5 = 1;
          *(_DWORD *)(v10 + 232) ^= (*(_DWORD *)(v10 + 232) ^ (v4 << 29)) & 0x20000000;
        }
      }
    }
  }
  return v5;
}
