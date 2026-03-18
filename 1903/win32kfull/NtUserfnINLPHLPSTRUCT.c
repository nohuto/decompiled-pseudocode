/*
 * XREFs of NtUserfnINLPHLPSTRUCT @ 0x1C02381D0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserfnINLPHLPSTRUCT(__int64 a1, unsigned int a2, __int64 a3, const void *a4, __int64 a5, char a6)
{
  ULONG64 v10; // rax
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  _WORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v20[7]; // [rsp+48h] [rbp-50h] BYREF

  memset(v20, 0, 24);
  v10 = (ULONG64)a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v20[5] = *(_QWORD *)(v10 + 16);
  v11 = *(_DWORD *)v10;
  if ( (unsigned __int16)*(_DWORD *)v10 < 0x18u )
    return 0LL;
  v13 = Win32AllocPoolWithQuota((unsigned __int16)v11, 1818784597LL);
  v15 = (_WORD *)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v13, v20, (__int64)Win32FreePool, v14);
  memmove(v15, a4, (unsigned __int16)v11);
  *v15 = v11;
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _WORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v15,
          a5);
  PopAndFreeAlwaysW32ThreadLock((__int64)v20, v16, v17, v18);
  return v12;
}
