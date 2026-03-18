/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C0123EF0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  _DWORD *v6; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int128 v21; // [rsp+48h] [rbp-50h]
  _QWORD v22[3]; // [rsp+58h] [rbp-40h] BYREF

  v6 = a4;
  v10 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( (a3 & 0x8000) != 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v21 = *(_OWORD *)v6;
    v14 = v6[4];
    if ( v14 + 20 < v14 )
    {
      v19 = 0LL;
      goto LABEL_9;
    }
    ProbeForRead(v6, v14 + 20, 1u);
    v15 = Win32AllocPoolWithQuota(v14 + 20, 1651536725LL);
    v10 = v15;
    if ( !v15 )
    {
      UserSetLastError(8LL, v16, v17, v18);
      v19 = 0LL;
      goto LABEL_9;
    }
    PushW32ThreadLock(v15, v22, (__int64)Win32FreePool, v18);
    *(_OWORD *)v10 = v21;
    *(_DWORD *)(v10 + 16) = v14;
    memmove((void *)(v10 + 20), v6 + 5, v14);
    v6 = (_DWORD *)v10;
  }
  v19 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v6,
          a5);
LABEL_9:
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v22, v11, v12, v13);
  return v19;
}
