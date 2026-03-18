/*
 * XREFs of MiDeleteFinalPageTables @ 0x1400AD0A0
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x1400ACAAC (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x1400AD4DC (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x1400AD650 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x1400AD670 (MiUnlinkProcessFromSession.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDeleteVadBitmap @ 0x1406708B8 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter1)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rbp
  int i; // esi
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  bool v7; // zf
  __int64 result; // rax
  _QWORD v9[6]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v10[48]; // [rsp+60h] [rbp-58h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  v2 = 48 * (BugCheckParameter1->DirectoryTableBase >> 12);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v10);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v5 = qword_140465A20;
      if ( !qword_140465A20 )
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
  MiDeleteProcessShadow(BugCheckParameter1, 1LL);
  KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter1->440, 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter1);
  KeFlushProcessTb(BugCheckParameter1->DirectoryTableBase);
  v7 = (unsigned int)MiDeleteTopLevelPage(v6, BugCheckParameter1->DirectoryTableBase >> 12) == 3;
  result = v9[1];
  if ( v7 )
    return v9[1] + 1LL;
  return result;
}
