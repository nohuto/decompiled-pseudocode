/*
 * XREFs of xxxImmLoadLayout @ 0x1C0114D9C
 * Callers:
 *     EditionResetIMELayout @ 0x1C0114D30 (EditionResetIMELayout.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ClientImmLoadLayout @ 0x1C0114E44 (ClientImmLoadLayout.c)
 */

__int64 __fastcall xxxImmLoadLayout(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 ThreadWin32Thread; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v8, 0, 24);
  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(352LL, 1835627349LL);
    v3 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, v8, (__int64)Win32FreePool);
      if ( (unsigned int)ClientImmLoadLayout(a1, v3) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
        *(_QWORD *)(ThreadWin32Thread + 16) = v8[0];
        return v3;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v8, v4, v5);
    }
  }
  return 0LL;
}
