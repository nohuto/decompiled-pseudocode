/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x140153FD0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140153E74 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int8 v5; // r14
  __int64 v6; // rax
  char v7; // cl
  unsigned __int64 v8; // rbx
  struct _KEVENT *v9; // r15
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1 + 12;
  v2 = (unsigned int)a1[10] + 4095LL;
  v3 = (unsigned __int64)&a1[2 * ((v2 + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12) + 12];
  while ( (unsigned __int64)v1 < v3 )
  {
    v4 = 48LL * *v1 - 0x58000000000LL;
    v5 = MiLockPageInline(v4);
    v6 = MiCapturePageFileInfoInline((_QWORD *)(v4 + 16), 1, 0);
    v7 = *(_BYTE *)(v4 + 34);
    v8 = v6;
    if ( (v7 & 0x10) == 0 )
      *(_BYTE *)(v4 + 34) = v7 | 0x10;
    v9 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    LODWORD(v2) = v5;
    __writecr8(v5);
    if ( v8 )
      LODWORD(v2) = MiReleasePageFileInfo(v9, v8, 0);
    ++v1;
  }
  return v2;
}
