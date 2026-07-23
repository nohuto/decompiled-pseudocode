/*
 * XREFs of MiTradeBootImagePage @ 0x1409B96AC
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewPage @ 0x1400EEBAC (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPrivilegedPage @ 0x14028DD7C (KeCopyPrivilegedPage.c)
 */

__int64 __fastcall MiTradeBootImagePage(__int64 *a1, ULONG_PTR a2)
{
  __int64 v3; // r9
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int8 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r13d
  bool v11; // zf
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  char v17; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int64 *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v25; // [rsp+64h] [rbp-9Ch]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]

  v27 = 0;
  v24 = 0;
  v25 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v22 = a1;
  v26 = 20;
  v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v4 = v19;
  v21 = v3 << 25 >> 16;
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
  v6 = 48 * v5 - 0x58000000000LL;
  v23 = 48 * a2 - 0x58000000000LL;
  v7 = MiLockPageInline(v6);
  MiLockNestedPageAtDpcInline(48 * a2 - 0x58000000000LL, v8, v9);
  MiCopyPfnEntryEx(48 * a2 - 0x58000000000LL, v6);
  v19 = v4;
  *(_QWORD *)&v20 = v4;
  v10 = ((unsigned int)MiFlags >> 15) & 1;
  if ( !v10 || (v17 = (*(_QWORD *)(v6 + 40) >> 54) & 7, v19 = v4, *(_QWORD *)&v20 = v4, v17 == 3) )
  {
    MiCopyPage(a2, v5, 0LL, 2 * ((MiFlags & 0x8000) != 0) + 4);
    v4 = v20;
    v11 = v10 == 0;
    v12 = v21;
    if ( v11 )
      v4 = v19;
  }
  else
  {
    v12 = v21;
    v20 = (unsigned __int64)v21;
    KeCopyPrivilegedPage(a2, &v20, v5, &v20, 0LL, 1);
  }
  v19 = v4 ^ (v4 ^ (a2 << 12)) & 0xFFFFFFFFF000LL;
  MiWriteValidPteNewPage(v22, v19, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)&v24, v12, 1LL, 0);
  MiFlushTbList(&v24, v13, v14, v15);
  if ( (MiFlags & 0x8000) == 0 && ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 3 )
    MiClearPfnImageVerified(48 * v5 - 0x58000000000LL, 12);
  MiDecrementShareCount(48 * v5 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
