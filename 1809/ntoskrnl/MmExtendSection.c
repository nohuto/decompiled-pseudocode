/*
 * XREFs of MmExtendSection @ 0x14061D8CC
 * Callers:
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     NtExtendSection @ 0x1406CFEF0 (NtExtendSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140092B68 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140092C20 (MiLockControlAreaSectionExtend.c)
 *     MiFindLastSubsection @ 0x140092D30 (MiFindLastSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x140134568 (MiUpdateLastSubsectionSize.c)
 *     MiSubsectionNeedsExtents @ 0x1402B4880 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1402B4908 (MiUpdateActiveSubsection.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 *     FsRtlSetFileSize @ 0x1406CBD00 (FsRtlSetFileSize.c)
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
  _BYTE v23[8]; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x3FFFFFFFFFF000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    v24 = 16;
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
    v24 = 32;
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
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439C90, 0LL);
          v21 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v21 )
            *v21 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439C90);
          KeAbPostRelease((ULONG_PTR)&qword_140439C90);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v23);
        MiDereferenceControlAreaFile(v7, (unsigned __int64)v18);
        v24 = 16;
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
                        a2,
                        *(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF,
                        v14 - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF),
                        &BugCheckParameter2);
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
