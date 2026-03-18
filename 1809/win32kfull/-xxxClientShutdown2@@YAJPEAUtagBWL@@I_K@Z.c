/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C011E0E8
 * Callers:
 *     xxxClientShutdown @ 0x1C011E060 (xxxClientShutdown.c)
 * Callees:
 *     DestroyWindowsTimers @ 0x1C001D37C (DestroyWindowsTimers.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, __int16 a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v4; // r15
  int v5; // r13d
  ULONG_PTR v6; // rbx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rcx
  BOOL v9; // edi
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned __int64 *)((char *)a1 + 32);
  v4 = a3 & 0x108;
  v5 = a2;
  while ( 1 )
  {
    if ( *v3 == 1 )
      return 1LL;
    LOBYTE(a2) = 1;
    v6 = HMValidateHandleNoSecure(*v3, a2);
    if ( v6 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v11;
      v11[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( v5 == 17 )
      {
        v9 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v6) != 0;
      }
      else
      {
        xxxSendMessage(v6);
        v9 = 1;
        if ( v4 == 264 )
          DestroyWindowsTimers();
      }
      ThreadUnlock1(ThreadWin32Thread, v7);
      if ( !v9 )
        break;
    }
    ++v3;
  }
  return 3LL;
}
