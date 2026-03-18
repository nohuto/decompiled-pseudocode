/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C00624D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  _DWORD *v6; // rsi
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int128 v16; // [rsp+48h] [rbp-50h]
  _QWORD v17[3]; // [rsp+58h] [rbp-40h] BYREF

  v6 = a4;
  v10 = 0LL;
  if ( (a3 & 0x8000) != 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v16 = *(_OWORD *)v6;
    v11 = v6[4];
    if ( v11 + 20 < v11 )
    {
      v14 = 0LL;
      goto LABEL_9;
    }
    ProbeForRead(v6, v11 + 20, 1u);
    v12 = Win32AllocPoolWithQuota(v11 + 20, 1651536725LL);
    v10 = v12;
    if ( !v12 )
    {
      UserSetLastError(8LL, v13);
      v14 = 0LL;
      goto LABEL_9;
    }
    PushW32ThreadLock(v12, v17, (__int64)Win32FreePool);
    *(_OWORD *)v10 = v16;
    *(_DWORD *)(v10 + 16) = v11;
    memmove((void *)(v10 + 20), v6 + 5, v11);
    v6 = (_DWORD *)v10;
  }
  v14 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v6,
          a5);
LABEL_9:
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v17);
  return v14;
}
