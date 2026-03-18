/*
 * XREFs of xxxInternalEnumWindow @ 0x1C01C1F34
 * Callers:
 *     xxxTurnOffCompositing @ 0x1C01D4704 (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C02226E4 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        struct tagWND *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        char a4)
{
  struct tagBWL *result; // rax
  __int64 v7; // rdx
  struct tagBWL *v8; // rdi
  unsigned __int64 *v9; // rbx
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  result = BuildHwndList(a1, a4, 0LL);
  v8 = result;
  if ( result )
  {
    v9 = (unsigned __int64 *)((char *)result + 32);
    v10 = 1;
    v11 = *((_QWORD *)result + 4);
    if ( v11 != 1 )
    {
      do
      {
        LOBYTE(v7) = 1;
        v12 = HMValidateHandleNoSecure(v11, v7);
        if ( v12 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
          v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v16;
          v16[1] = v12;
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v10 = a2(v12, a3);
          ThreadUnlock1(v15, v14);
          if ( !v10 )
            break;
        }
        v11 = *++v9;
      }
      while ( *v9 != 1 );
    }
    FreeHwndList(v8);
    return (struct tagBWL *)v10;
  }
  return result;
}
