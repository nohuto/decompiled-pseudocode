/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x18004CE64
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x18004CD90 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x18010B1CC (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x18004CEF8 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2, unsigned int a3)
{
  _RTL_SRWLOCK *v3; // rbp
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v12; // r8
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = (_RTL_SRWLOCK *)(a1 + 2144);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 2144));
  v7 = a3 >> 20;
  v8 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v7, &v15);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_WORD *)(v8 + 42);
    if ( v10 == -1 )
      v9 = 0LL;
    else
      *(_WORD *)(v9 + 42) = v10 + 1;
  }
  else
  {
    v12 = v15;
    if ( v15 )
    {
      *(_BYTE *)(v15 + 46) &= ~1u;
      v13 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 32) = v13;
      *(_WORD *)(v12 + 40) = v7;
      *(_WORD *)(v12 + 42) = 1;
      v9 = v12;
      *(_QWORD *)(v12 + 24) = a1;
      LOBYTE(v13) = *(_BYTE *)(a2 + 8);
      *(_BYTE *)(v12 + 44) = (v12 - a1 - 2160) / 48;
      v14 = *(_BYTE *)(a2 + 12);
      *(_BYTE *)(v12 + 45) = v13;
      *(_BYTE *)(v12 + 46) = *(_BYTE *)(v12 + 46) & 0xF1 | (*(_DWORD *)(a2 + 4) != 0) | (2
                                                                                       * (*(_BYTE *)(a2 + 4) & 3 | (4 * (v14 & 1))));
      ++*(_DWORD *)(a1 + 2152);
    }
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v9 )
    return *(unsigned __int8 *)(v9 + 44);
  else
    return 0xFFFFFFFFLL;
}
