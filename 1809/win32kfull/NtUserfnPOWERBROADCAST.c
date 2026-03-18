/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C00B0CD0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  _DWORD *v6; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int128 v19; // [rsp+48h] [rbp-50h]
  _QWORD v20[3]; // [rsp+58h] [rbp-40h] BYREF

  v6 = a4;
  v10 = 0LL;
  if ( (a3 & 0x8000) != 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v19 = *(_OWORD *)v6;
    v12 = v6[4];
    if ( v12 + 20 < v12 )
    {
      v17 = 0LL;
      goto LABEL_9;
    }
    ProbeForRead(v6, v12 + 20, 1u);
    v13 = Win32AllocPoolWithQuota(v12 + 20, 1651536725LL);
    v10 = v13;
    if ( !v13 )
    {
      UserSetLastError(8LL, v14, v15, v16);
      v17 = 0LL;
      goto LABEL_9;
    }
    PushW32ThreadLock(v13, v20, (__int64)Win32FreePool);
    *(_OWORD *)v10 = v19;
    *(_DWORD *)(v10 + 16) = v12;
    memmove((void *)(v10 + 20), v6 + 5, v12);
    v6 = (_DWORD *)v10;
  }
  v17 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v6,
          a5);
LABEL_9:
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v20, v11);
  return v17;
}
