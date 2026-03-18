/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C00FE820
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  _DWORD *v6; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int128 v20; // [rsp+48h] [rbp-50h]
  _QWORD v21[3]; // [rsp+58h] [rbp-40h] BYREF

  v6 = a4;
  v10 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( (a3 & 0x8000) != 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v20 = *(_OWORD *)v6;
    v13 = v6[4];
    if ( v13 + 20 < v13 )
    {
      v18 = 0LL;
      goto LABEL_9;
    }
    ProbeForRead(v6, v13 + 20, 1u);
    v14 = Win32AllocPoolWithQuota(v13 + 20, 1651536725LL);
    v10 = v14;
    if ( !v14 )
    {
      UserSetLastError(8LL, v15, v16, v17);
      v18 = 0LL;
      goto LABEL_9;
    }
    PushW32ThreadLock(v14, v21, (__int64)Win32FreePool);
    *(_OWORD *)v10 = v20;
    *(_DWORD *)(v10 + 16) = v13;
    memmove((void *)(v10 + 20), v6 + 5, v13);
    v6 = (_DWORD *)v10;
  }
  v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v6,
          a5);
LABEL_9:
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v21, v11, v12);
  return v18;
}
