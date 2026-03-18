/*
 * XREFs of ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C001F9B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxWrapSendNotifyMessage(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    if ( a1 != (struct tagWND *)-1LL )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v14 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
      v15 = a1;
      HMLockObject(a1);
    }
    v11 = (int)xxxSendNotifyMessage(a1, a2, a3, a4, 0);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v10, v9, v12);
    return v11;
  }
}
