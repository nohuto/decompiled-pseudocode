/*
 * XREFs of xxxEnableWindowGDIScaledDpiMessageX @ 0x1C015B580
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C015B4C0 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxEnableWindowGDIScaledDpiMessageX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx

  v5 = a2;
  v6 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9) + 448) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12)
                                                + 448)
                                    + 8LL)
                      + 64LL) & 1) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 40);
        if ( (*(_DWORD *)(v13 + 288) & 0x4000000F) == 0x40000000 )
        {
          v6 = 1;
          *(_DWORD *)(v13 + 232) ^= (*(_DWORD *)(v13 + 232) ^ (v5 << 29)) & 0x20000000;
        }
      }
    }
  }
  return v6;
}
