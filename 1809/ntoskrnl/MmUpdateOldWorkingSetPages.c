/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x1402B4564
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1408650E4 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  bool v11; // zf
  unsigned __int8 v12; // dl
  _QWORD v14[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[22]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v16[48]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v17[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v14, 0, 0xD8uLL);
  memset(v15, 0, sizeof(v15));
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v16);
  }
  v8 = v14[0];
  if ( (a3 & 2) != 0 )
  {
    v8 = LODWORD(v14[0]) | 1;
    LODWORD(v14[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v14[0]) = v8 | 2;
  HIDWORD(v14[0]) = a2;
  v14[4] = 20LL;
  v9 = MiTbFlushType(BugCheckParameter1 + 1280);
  v11 = (*(_BYTE *)(BugCheckParameter1 + 1464) & 7) == 0;
  LODWORD(v14[3]) = v9;
  WORD2(v14[3]) = 4;
  v14[5] = 0LL;
  v14[6] = 0LL;
  if ( v11 && *(_QWORD *)(BugCheckParameter1 + 1856) )
  {
    v17[0] = 0;
    v14[26] = v17;
    v17[1] = 32;
  }
  v15[5] = -1LL;
  v15[21] = v14;
  v15[19] = MiUpdateOldPte;
  v15[20] = MiUpdateOldWorkingSetPagesTail;
  LODWORD(v15[0]) = 6;
  v15[3] = BugCheckParameter1 + 1280;
  HIBYTE(v15[0]) = 6;
  v12 = MiLockWorkingSetShared(v10);
  BYTE4(v15[0]) = v12;
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    v14[1] = *(_QWORD *)(BugCheckParameter1 + 1368);
    if ( v14[1] )
    {
      MiWalkPageTables((int *)v15);
      v12 = BYTE4(v15[0]);
    }
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1280, v12);
  if ( v7 == 1 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  return v6;
}
