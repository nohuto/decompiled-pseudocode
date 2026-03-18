/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C0126F5C
 * Callers:
 *     xxxClientShutdown @ 0x1C0126ED4 (xxxClientShutdown.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DestroyWindowsTimers @ 0x1C0097364 (DestroyWindowsTimers.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  __int64 v5; // r15
  int v6; // r13d
  ULONG_PTR v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  BOOL v12; // edi
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]

  v4 = (unsigned __int64 *)((char *)a1 + 32);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v5 = a3 & 0x108;
  v6 = a2;
  while ( 1 )
  {
    if ( *v4 == 1 )
      return 1LL;
    LOBYTE(a2) = 1;
    v7 = HMValidateHandleNoSecure(*v4, a2, a3, a4);
    if ( v7 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v14 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
      v15 = v7;
      HMLockObject(v7);
      if ( v6 == 17 )
      {
        v12 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v7) != 0;
      }
      else
      {
        xxxSendMessage(v7);
        v12 = 1;
        if ( v5 == 264 )
          DestroyWindowsTimers();
      }
      ThreadUnlock1(v10, v9, v11);
      if ( !v12 )
        break;
    }
    ++v4;
  }
  return 3LL;
}
