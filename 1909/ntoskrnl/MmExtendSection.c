/*
 * XREFs of MmExtendSection @ 0x140624DB0
 * Callers:
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     MiCreateSection @ 0x1405D7770 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     NtExtendSection @ 0x140624D10 (NtExtendSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiControlAreaUsingExtents @ 0x14006EFE0 (MiControlAreaUsingExtents.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140088E10 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140088EC8 (MiLockControlAreaSectionExtend.c)
 *     MiFindLastSubsection @ 0x140088FD8 (MiFindLastSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x1400891DC (MiUpdateLastSubsectionSize.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiSubsectionNeedsExtents @ 0x1402C9AE0 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1402C9B68 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x140625080 (MiExtendSection.c)
 *     FsRtlSetFileSize @ 0x140625490 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  NTSTATUS v11; // esi
  __int64 LastSubsection; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  int updated; // eax
  ULONG_PTR v17; // rax
  struct _FILE_OBJECT *v18; // r15
  int v19; // eax
  struct _KTHREAD *CurrentThread; // rsi
  LARGE_INTEGER *v21; // rcx
  unsigned __int64 v22; // rax
  _DWORD v23[12]; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  memset(v23, 0, 0x28uLL);
  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x3FFFFFFFFFF000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    v23[2] = 16;
    v10 = v9 >> 12;
    MiLockControlAreaSectionExtend(v6, (__int64)v23);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v22 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v22 )
      {
        a2->QuadPart = v22;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v23);
        return 0LL;
      }
    }
    if ( a3 )
      goto LABEL_6;
    MiUnlockControlAreaSectionExtend(v7, (__int64)v23);
    v17 = MiReferenceControlAreaFile(v7);
    v23[2] = 32;
    v18 = (struct _FILE_OBJECT *)v17;
    MiLockControlAreaSectionExtend(v7, (__int64)v23);
    v11 = FsRtlGetFileSize(v18, &FileSize);
    if ( v11 >= 0 )
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_20:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464290, 0LL);
          v21 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v21 )
            *v21 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464290);
          KeAbPostRelease((ULONG_PTR)&qword_140464290);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v23);
        MiDereferenceControlAreaFile(v7, (unsigned __int64)v18);
        v23[2] = 16;
        MiLockControlAreaSectionExtend(v7, (__int64)v23);
LABEL_6:
        v11 = 0;
        BugCheckParameter2 = 0LL;
        LastSubsection = MiFindLastSubsection(v7, 0);
        v13 = *(unsigned int *)(v8 + 8) | ((unsigned __int64)(*(_WORD *)(v8 + 12) & 0x3FF) << 32);
        if ( v10 <= v13 )
        {
          *(LARGE_INTEGER *)(a1 + 48) = *a2;
          if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL) < a2->QuadPart )
          {
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            MiUpdateLastSubsectionSize(LastSubsection, a2, 0);
          }
        }
        else
        {
          v14 = v10 - v13;
          if ( v14 <= (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) )
          {
            if ( MiControlAreaUsingExtents(v7) && *(_QWORD *)(LastSubsection + 8) )
            {
              MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
              BugCheckParameter2 = LastSubsection;
            }
            updated = MiUpdateLastSubsectionSize(LastSubsection, a2, v14);
          }
          else
          {
            updated = MiExtendSection(
                        LastSubsection,
                        (_DWORD)a2,
                        *(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF,
                        (unsigned int)v14 - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF),
                        (__int64)&BugCheckParameter2);
          }
          v11 = updated;
          if ( updated >= 0 )
          {
            v11 = 0;
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            *(LARGE_INTEGER *)(a1 + 48) = *a2;
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v23);
        if ( BugCheckParameter2 )
          return (unsigned int)MiUpdateActiveSubsection((_QWORD *)BugCheckParameter2);
        return (unsigned int)v11;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v19 = FsRtlSetFileSize(v18);
        if ( v19 >= 0 )
          goto LABEL_20;
        v11 = v19;
      }
      else
      {
        v11 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v23);
    MiDereferenceControlAreaFile(v7, (unsigned __int64)v18);
    return (unsigned int)v11;
  }
  return 3221225536LL;
}
