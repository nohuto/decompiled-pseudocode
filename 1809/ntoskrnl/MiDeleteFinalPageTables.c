/*
 * XREFs of MiDeleteFinalPageTables @ 0x1400917F8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x140026134 (MiDeleteVirtualAddresses.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiDeleteTopLevelPage @ 0x140091960 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140091AD4 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x140091AF4 (MiUnlinkProcessFromSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDeleteVadBitmap @ 0x140609CFC (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter1)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  int i; // esi
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  bool v7; // zf
  __int64 result; // rax
  _QWORD v9[5]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v10[48]; // [rsp+58h] [rbp-50h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = 48 * (BugCheckParameter1->DirectoryTableBase >> 12);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v10);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v5 = qword_14043B0C8;
      if ( !qword_14043B0C8 )
        continue;
    }
    else
    {
      v5 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v5 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter1[1].Affinity.Bitmap[7], 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      MiDeleteVirtualAddresses(v5, v5, 0, (__int64)v9);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter1);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter1);
  if ( (*(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter1,
      v2 / 48,
      *(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow((__int64)BugCheckParameter1, 1);
  KiUnstackDetachProcess((__int64)v10, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter1->440, 0x1Eu);
  MiUnlinkProcessFromSession(BugCheckParameter1);
  KeFlushProcessTb(BugCheckParameter1->DirectoryTableBase);
  v7 = (unsigned int)MiDeleteTopLevelPage(v6, BugCheckParameter1->DirectoryTableBase >> 12) == 3;
  result = v9[1];
  if ( v7 )
    return v9[1] + 1LL;
  return result;
}
