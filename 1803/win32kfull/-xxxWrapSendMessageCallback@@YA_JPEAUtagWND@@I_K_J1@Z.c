/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0060E20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG64 a5)
{
  unsigned int v7; // edi
  _BYTE *v9; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v16[2]; // [rsp+60h] [rbp-58h]
  _QWORD v17[9]; // [rsp+70h] [rbp-48h] BYREF

  v7 = a2;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[15] = v9[15];
    *(_OWORD *)v16 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v9);
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v17;
      v17[1] = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    }
    v13 = (int)xxxSendMessageCallback(a1, v7, a3, a4, v16[0], v16[1], 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v12, v11, v14);
    return v13;
  }
}
