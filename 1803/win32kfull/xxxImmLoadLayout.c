/*
 * XREFs of xxxImmLoadLayout @ 0x1C010D42C
 * Callers:
 *     EditionResetIMELayout @ 0x1C010D3C0 (EditionResetIMELayout.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ClientImmLoadLayout @ 0x1C010D4BC (ClientImmLoadLayout.c)
 */

__int64 __fastcall xxxImmLoadLayout(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 ThreadWin32Thread; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(352LL, 1835627349LL);
    v3 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, v7, (__int64)Win32FreePool);
      if ( (unsigned int)ClientImmLoadLayout(a1, v3) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
        *(_QWORD *)(ThreadWin32Thread + 16) = v7[0];
        return v3;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v7);
    }
  }
  return 0LL;
}
