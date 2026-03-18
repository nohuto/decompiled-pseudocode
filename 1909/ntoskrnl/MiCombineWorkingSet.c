/*
 * XREFs of MiCombineWorkingSet @ 0x1402E5F90
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiIsStoreProcess @ 0x140120098 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFreeCombineMdls @ 0x1406F989C (MiFreeCombineMdls.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v4; // r13d
  void *v5; // rsi
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rax
  SIZE_T v9; // rdi
  PVOID PoolWithTag; // rax
  _QWORD v12[6]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v13[22]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v12, 0, 0x28uLL);
  memset(v13, 0, 0xA8uLL);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 60);
  v5 = 0LL;
  v6 = v2 - 1280;
  v7 = 3;
  if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    v6 = 0LL;
  BYTE6(v13[0]) = MiLockWorkingSetShared(v2);
  if ( !v6 || (*(_DWORD *)(v6 + 780) & 0xC00u) >= 0xC00 && !*(_QWORD *)(v2 + 104) && !(unsigned int)MiIsStoreProcess(v6) )
  {
    v8 = *(_QWORD *)(v2 + 144);
    if ( v8 )
    {
      v9 = (40 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
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
      v13[4] = -1LL;
      v12[3] = a1;
      v12[4] = PoolWithTag;
      v13[20] = v12;
      v13[18] = MiCombinePte;
      v13[19] = MiCombineWorkingSetTail;
      v12[2] = v9 / 0x28;
      LODWORD(v12[0]) = v4;
      v13[2] = v2;
      LOWORD(v13[0]) = 6;
      BYTE5(v13[0]) = 7;
      v7 = MiWalkPageTables((__int16 *)v13);
    }
  }
LABEL_12:
  MiUnlockWorkingSetShared(v2, BYTE6(v13[0]));
  MiFreeCombineMdls(a1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v7 == 4 )
    return (unsigned int)-1073741248;
  return v3;
}
