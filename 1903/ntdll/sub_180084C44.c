/*
 * XREFs of sub_180084C44 @ 0x180084C44
 * Callers:
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18010BD2C @ 0x18010BD2C (sub_18010BD2C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180084C44(__int64 a1, _RTL_SRWLOCK *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  char *v10; // rbp
  unsigned int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // ebp

  _BitScanForward64(&v5, a3);
  v7 = a4;
  _BitScanReverse64(&v8, a3);
  LODWORD(v8) = v8 - v5;
  v10 = (char *)a2 + (unsigned int)((_DWORD)v5 << 12);
  v11 = ((_DWORD)v8 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v8 + 1)) - 1) << v5;
  RtlAcquireSRWLockExclusive(a2 + 3);
  v13 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( a5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, char *, _QWORD))(a1 ^ qword_180163540 ^ *(_QWORD *)(a1 + 152)))(
            v13,
            v10,
            v11);
    if ( v15 < 0 )
      goto LABEL_4;
    a2[2].Ptr = (PVOID)((__int64)a2[2].Ptr | v12);
    v14 = v7;
  }
  else
  {
    ((void (__fastcall *)(__int64, char *, _QWORD))(a1 ^ qword_180163540 ^ *(_QWORD *)(a1 + 160)))(v13, v10, v11);
    a2[2].Ptr = (PVOID)((__int64)a2[2].Ptr & ~v12);
    v14 = -(int)v7;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v14);
  v15 = 0;
LABEL_4:
  RtlReleaseSRWLockExclusive(a2 + 3);
  return (unsigned int)v15;
}
