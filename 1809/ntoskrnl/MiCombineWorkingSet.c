/*
 * XREFs of MiCombineWorkingSet @ 0x14013DC80
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiIsStoreProcess @ 0x1400837DC (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiFreeCombineMdls @ 0x1406D314C (MiFreeCombineMdls.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  int v4; // r13d
  void *v5; // rsi
  __int64 v6; // rbx
  int v7; // r12d
  __int64 v8; // rbx
  SIZE_T v9; // rbx
  PVOID PoolWithTag; // rax
  _QWORD v12[6]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v13[22]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v12, 0, 0x28uLL);
  memset(v13, 0, sizeof(v13));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = v2 - 1280;
  v7 = 3;
  if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    v6 = 0LL;
  BYTE4(v13[0]) = MiLockWorkingSetShared(v2);
  if ( !v6
    || (*(_DWORD *)(v6 + 772) & 0xC00u) >= 0xC00
    && !*(_QWORD *)(v2 + 104)
    && !(unsigned int)MiIsStoreProcess(v6)
    && (*(_DWORD *)(v6 + 2084) & 0x1000) == 0 )
  {
    v8 = *(_QWORD *)(v2 + 144);
    if ( v8 )
    {
      v9 = (32 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x6D75534Du);
        v5 = PoolWithTag;
        if ( PoolWithTag )
          break;
        v9 >>= 1;
        if ( v9 < 0x10000 )
          goto LABEL_12;
      }
      v13[5] = -1LL;
      v12[4] = PoolWithTag;
      v13[21] = v12;
      v13[19] = MiCombinePte;
      v13[20] = MiCombineWorkingSetTail;
      v12[3] = a1;
      v12[2] = v9 >> 5;
      LODWORD(v12[0]) = v4;
      v13[3] = v2;
      LODWORD(v13[0]) = 6;
      BYTE6(v13[0]) = 7;
      v7 = MiWalkPageTables((int *)v13);
    }
  }
LABEL_12:
  MiUnlockWorkingSetShared(v2, BYTE4(v13[0]));
  MiFreeCombineMdls(a1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v7 == 4 )
    return (unsigned int)-1073741248;
  return v3;
}
