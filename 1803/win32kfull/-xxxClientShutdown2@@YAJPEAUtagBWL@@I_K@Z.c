/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00FEF70
 * Callers:
 *     xxxClientShutdown @ 0x1C00FEEE8 (xxxClientShutdown.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     DestroyWindowsTimers @ 0x1C0035C74 (DestroyWindowsTimers.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, __int16 a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v4; // r15
  int v5; // r13d
  ULONG_PTR v6; // rbx
  __int64 v7; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v9; // r8
  BOOL v10; // edi
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF

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
      v12[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v12;
      v12[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( v5 == 17 )
      {
        v10 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v6) != 0;
      }
      else
      {
        xxxSendMessage(v6);
        v10 = 1;
        if ( v4 == 264 )
          DestroyWindowsTimers();
      }
      ThreadUnlock1(ThreadWin32Thread, v7, v9);
      if ( !v10 )
        break;
    }
    ++v3;
  }
  return 3LL;
}
