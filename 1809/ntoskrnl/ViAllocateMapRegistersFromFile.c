/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x14092D9A0
 * Callers:
 *     ViMapDoubleBuffer @ 0x14092F13C (ViMapDoubleBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x14092FAEC (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, _DWORD *a5)
{
  ULONG_PTR *v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  int v10; // r15d
  unsigned int v11; // r13d
  KIRQL v12; // r12
  unsigned int v13; // r10d
  ULONG_PTR *v14; // rbp
  const void *v15; // rcx
  ULONG_PTR *v16; // r14
  const void *v17; // r13
  ULONG_PTR v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 *v20; // rbx
  __int64 v21; // r9
  char v22; // r11
  unsigned int v23; // ecx
  int v24; // r10d
  struct _KPRCB *v25; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  KSPIN_LOCK *SpinLock; // [rsp+40h] [rbp-58h]

  v5 = (ULONG_PTR *)(a1 + 88);
  v6 = a1;
  v7 = 0;
  v8 = ((a2 & 0xFFF) + a3 + 4095LL) >> 12;
  SpinLock = (KSPIN_LOCK *)(a1 + 80);
  v9 = a2;
  v10 = 0;
  v11 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( !*(_DWORD *)(v6 + 32) )
  {
LABEL_10:
    v13 = a3;
    goto LABEL_11;
  }
  v13 = a3;
  v14 = &v5[4 * *(unsigned int *)(v6 + 28)];
  v15 = (const void *)(v9 + a3);
  v16 = v5;
  if ( v5 < v14 )
  {
    v17 = v15;
    do
    {
      v18 = *v16;
      if ( *v16 && v18 >= a2 && v18 < (unsigned __int64)v17 )
      {
        ViHalPreprocessOptions(
          byte_1404064B4,
          "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
          (const void *)0x1D,
          (const void *)a2,
          v17);
        VfReportIssueWithOptions(0xE6u, 0x1DuLL, a2, (ULONG_PTR)v17, *v16, byte_1404064B4);
      }
      v16 += 4;
    }
    while ( v16 < v14 );
    v10 = 0;
    v9 = a2;
    v11 = 0;
    v6 = a1;
    goto LABEL_10;
  }
  v9 = a2;
  v6 = a1;
LABEL_11:
  if ( (_DWORD)v8 )
  {
    while ( v10 != *(_DWORD *)(v6 + 28) )
    {
      v19 = v11 + 1;
      v11 = 0;
      if ( !*v5 )
        v11 = v19;
      v5 += 4;
      ++v10;
      if ( v11 >= (unsigned int)v8 )
        goto LABEL_16;
    }
    ViHalPreprocessOptions(byte_1404064B8, "Map registers needed: %x available: %x", 0x10000000, 2);
    VfReportIssueWithOptions(0xE6u, 0LL, 2uLL, (unsigned int)v8, v11, byte_1404064B8);
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
LABEL_16:
    v20 = &v5[-4 * (unsigned int)v8];
    *a5 = v10 - v8;
    if ( (_DWORD)v8 )
    {
      v21 = a1;
      v22 = a4;
      do
      {
        *v20 = v9;
        v20[3] = v9;
        v23 = 4096 - (v9 & 0xFFF);
        if ( v23 >= v13 )
          v23 = v13;
        *((_DWORD *)v20 + 2) = v23;
        *((_DWORD *)v20 + 3) = 2 - (v22 != 0);
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 32));
        ViTagBuffer((v9 & 0xFFF) + v20[2] + 4096, *((unsigned int *)v20 + 2), 3LL);
        v13 = v24 - *((_DWORD *)v20 + 2);
        v20 += 4;
        v9 = (v9 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v25);
    }
    v7 = 1;
  }
  __writecr8(v12);
  return v7;
}
