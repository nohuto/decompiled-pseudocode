/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C001CF90
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  _BYTE *v7; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int128 v14; // [rsp+58h] [rbp-50h]
  __int64 v15; // [rsp+68h] [rbp-40h] BYREF
  struct tagWND *v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    v14 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v15 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
      v16 = a1;
      HMLockObject(a1);
    }
    v11 = (int)xxxSendMessageCallback(a1, a2, v14, *((__int64 *)&v14 + 1), 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v10, v9, v12);
    return v11;
  }
}
