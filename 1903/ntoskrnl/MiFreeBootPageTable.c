/*
 * XREFs of MiFreeBootPageTable @ 0x140A16E24
 * Callers:
 *     MxZeroBootMappings @ 0x140A16D10 (MxZeroBootMappings.c)
 * Callees:
 *     MiPageToChannel @ 0x14002F36C (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiLockAndInsertPageInFreeList @ 0x14019344C (MiLockAndInsertPageInFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  __int16 v3; // ax
  unsigned __int8 v4; // al
  char v5; // cl
  unsigned __int8 v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v9; // ebx
  char v10; // al
  __int64 v11; // rdx
  _QWORD v12[6]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = *(_WORD *)(v2 + 32);
  if ( v3 )
  {
    if ( v3 != 2 || (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    v4 = MiLockPageInline(v2);
    v5 = *(_BYTE *)(v2 + 34);
    v6 = v4;
    *(_WORD *)(v2 + 32) = 0;
    *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(v2 + 34) = v5 & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
  }
  else
  {
    v9 = MiPageToNode(BugCheckParameter2, 0);
    memset(v12, 0, sizeof(v12));
    v12[5] = *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v9 << 58);
    *(_QWORD *)(v2 + 40) = v12[5];
    v10 = MiPageToChannel(BugCheckParameter2);
    v11 = *(_QWORD *)(v2 + 40);
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 40) = v11 & 0xFFFFFFCFFFFFFFFFuLL | ((unsigned __int64)(v10 & 3) << 36) | 0x20000000000000LL;
  }
  return MiLockAndInsertPageInFreeList(v2);
}
