/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C0102774
 * Callers:
 *     xxxClientShutdown @ 0x1C01026EC (xxxClientShutdown.c)
 * Callees:
 *     DestroyWindowsTimers @ 0x1C0038094 (DestroyWindowsTimers.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v4; // r15
  int v5; // r13d
  ULONG_PTR v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  BOOL v11; // edi
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)((char *)a1 + 32);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = a3 & 0x108;
  v5 = a2;
  while ( 1 )
  {
    if ( *v3 == 1 )
      return 1LL;
    LOBYTE(a2) = 1;
    v6 = HMValidateHandleNoSecure(*v3, a2, a3);
    if ( v6 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
      v13 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
      v14 = v6;
      HMLockObject(v6);
      if ( v5 == 17 )
      {
        v11 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v6) != 0;
      }
      else
      {
        xxxSendMessage(v6);
        v11 = 1;
        if ( v4 == 264 )
          DestroyWindowsTimers();
      }
      ThreadUnlock1(v9, v8, v10);
      if ( !v11 )
        break;
    }
    ++v3;
  }
  return 3LL;
}
