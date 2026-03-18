/*
 * XREFs of MiDeleteFinalPageTables @ 0x14008E9B4
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlinkProcessFromSession @ 0x14008E8E8 (MiUnlinkProcessFromSession.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x14008EDEC (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x14008EF60 (KeFlushProcessTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x1400E7FBC (MiDeleteVirtualAddresses.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiDeleteVadBitmap @ 0x1406445A0 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter2)
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
  v2 = 48LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 12);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v5 = qword_140465720;
      if ( !qword_140465720 )
        continue;
    }
    else
    {
      v5 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v5 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 880, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      MiDeleteVirtualAddresses(v5, v5, 0LL, v9);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap(BugCheckParameter2);
  if ( (*(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      BugCheckParameter2,
      v2 / 48,
      *(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(v10, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 440), 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v7 = (unsigned int)MiDeleteTopLevelPage(v6, *(_QWORD *)(BugCheckParameter2 + 40) >> 12) == 3;
  result = v9[1];
  if ( v7 )
    return v9[1] + 1LL;
  return result;
}
