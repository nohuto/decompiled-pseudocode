/*
 * XREFs of NtUserfnINLPHLPSTRUCT @ 0x1C0237BB0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtUserfnINLPHLPSTRUCT(__int64 a1, unsigned int a2, __int64 a3, const void *a4, __int64 a5, char a6)
{
  ULONG64 v10; // rax
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rax
  _WORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD v18[7]; // [rsp+48h] [rbp-50h] BYREF

  memset(v18, 0, 24);
  v10 = (ULONG64)a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v18[5] = *(_QWORD *)(v10 + 16);
  v11 = *(_DWORD *)v10;
  if ( (unsigned __int16)*(_DWORD *)v10 < 0x18u )
    return 0LL;
  v13 = Win32AllocPoolWithQuota((unsigned __int16)v11, 1818784597LL);
  v14 = (_WORD *)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v13, v18, (__int64)Win32FreePool);
  memmove(v14, a4, (unsigned __int16)v11);
  *v14 = v11;
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _WORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v14,
          a5);
  PopAndFreeAlwaysW32ThreadLock((__int64)v18, v15, v16);
  return v12;
}
