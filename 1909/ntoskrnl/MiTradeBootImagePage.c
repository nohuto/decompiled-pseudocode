/*
 * XREFs of MiTradeBootImagePage @ 0x1409EF854
 * Callers:
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWriteValidPteNewPage @ 0x1400FA008 (MiWriteValidPteNewPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeCopyPrivilegedPage @ 0x1402A441C (KeCopyPrivilegedPage.c)
 */

__int64 __fastcall MiTradeBootImagePage(unsigned __int64 a1, ULONG_PTR a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int8 v8; // r12
  unsigned int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // [rsp+30h] [rbp-D0h]
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v19[24]; // [rsp+60h] [rbp-A0h] BYREF

  v17 = (__int64 *)a1;
  memset(v19, 0, 0xB8uLL);
  v19[3] = 0LL;
  LODWORD(v19[1]) = 20;
  v16 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v16;
  v5 = (__int64)(a1 << 25) >> 16;
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
  v7 = 48 * v6 - 0x58000000000LL;
  v15 = 48 * a2 - 0x58000000000LL;
  v8 = MiLockPageInline(v7);
  MiLockNestedPageAtDpcInline(v15);
  MiCopyPfnEntryEx(v15, (__int128 *)v7);
  v9 = ((unsigned int)MiFlags >> 15) & 1;
  if ( !v9 || ((*(_QWORD *)(v7 + 40) >> 54) & 7) == 3 )
  {
    MiCopyPage(a2, v6, 0LL, 2 * v9 + 4);
  }
  else
  {
    v18 = v5;
    KeCopyPrivilegedPage(a2, &v18, v6, &v18, 0LL, 1);
  }
  v16 = v4 ^ (v4 ^ (a2 << 12)) & 0xFFFFFFFFF000LL;
  MiWriteValidPteNewPage(v17, v16, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)v19, v5, 1LL, 0);
  MiFlushTbList((int *)v19, v10, v11, v12);
  if ( (MiFlags & 0x8000) == 0 && ((*(_QWORD *)(v7 + 40) >> 54) & 7) == 3 )
    MiClearPfnImageVerified(48 * v6 - 0x58000000000LL, 12);
  *(_BYTE *)(v7 + 35) &= ~8u;
  MiDecrementShareCount(48 * v6 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  return result;
}
