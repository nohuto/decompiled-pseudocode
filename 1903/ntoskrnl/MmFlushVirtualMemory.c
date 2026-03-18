/*
 * XREFs of MmFlushVirtualMemory @ 0x14069E9FC
 * Callers:
 *     NtFlushVirtualMemory @ 0x14069E8A0 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053990 (MiUnlockAndDereferenceVadShared.c)
 *     MiFlushRelease @ 0x140071544 (MiFlushRelease.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     KeAreAllApcsDisabled @ 0x1400C17F0 (KeAreAllApcsDisabled.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiFindLastSubsection @ 0x1400EAE78 (MiFindLastSubsection.c)
 *     MiFlushAcquire @ 0x1400EC0A0 (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069ECE0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushVirtualMemory(
        _KPROCESS *BugCheckParameter1,
        unsigned __int64 *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  char *v14; // rdi
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r12
  __int64 v18; // r14
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // rbp
  __int64 *v21; // r15
  unsigned __int64 v22; // r12
  ULONG_PTR v23; // rax
  unsigned int *v24; // r14
  struct _FILE_OBJECT *v25; // rdi
  int v26; // ebx
  unsigned int *v28; // rax
  BOOLEAN v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-B8h]
  unsigned int *v32; // [rsp+58h] [rbp-B0h]
  _QWORD *v33; // [rsp+60h] [rbp-A8h]
  __int64 *v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v37[48]; // [rsp+80h] [rbp-88h] BYREF

  v33 = a3;
  v32 = a4;
  memset(v37, 0, sizeof(v37));
  v7 = 0;
  v8 = 0;
  v9 = *a2 + *a3 - 1LL;
  v10 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  *a2 = v10;
  v11 = v9 | 0xFFF;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != BugCheckParameter1 )
  {
    v8 = 2;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v37);
  }
  v12 = 0;
  v29 = KeAreAllApcsDisabled();
  v13 = MiObtainReferencedVadEx(v10, 2, (int *)&v30);
  v14 = (char *)v13;
  if ( !v13 )
  {
    v7 = v30;
    if ( (_DWORD)v30 == -1073741664 )
      v7 = -1073741799;
    goto LABEL_24;
  }
  v15 = *(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32);
  if ( !*a3 )
  {
    v11 = (v15 << 12) | 0xFFF;
    v8 |= 1u;
  }
  v16 = *(_DWORD *)(v13 + 48);
  if ( (v16 & 0x100000) != 0 || (v17 = v11 >> 12, v11 >> 12 > v15) )
  {
LABEL_30:
    v7 = -1073741799;
    goto LABEL_23;
  }
  v18 = **(_QWORD **)(v13 + 72);
  v30 = v18;
  if ( *(_QWORD *)(v18 + 64) && (v16 & 0x70) != 0x20 )
  {
    *v33 = v11 - v10 + 1;
    if ( !v29 && (*(_DWORD *)(v18 + 56) & 0x20000) != 0 )
      v12 = 4;
    MiFlushDirtyBitsToPfn(v10, v11, (__int64)CurrentThread);
    MiGetProtoPteAddress((__int64)v14, v11 >> 12, 0, &v35);
    ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v14, v10 >> 12, 0, &v34);
    LastSubsection = v35;
    v21 = v34;
    CurrentThread = ProtoPteAddress;
    if ( v35 )
    {
      v22 = MiGetProtoPteAddress((__int64)v14, v17, 0, &v36);
LABEL_15:
      if ( (unsigned int)MiFlushAcquire(v18, (ULONG_PTR)v21, LastSubsection) )
      {
        MiUnlockAndDereferenceVadShared(v14);
        if ( v8 >= 2 )
          KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
        v23 = MiReferenceControlAreaFile(v18);
        v24 = v32;
        v25 = (struct _FILE_OBJECT *)v23;
        while ( 1 )
        {
          v26 = FsRtlAcquireFileForCcFlushEx(v25);
          if ( v26 < 0 )
            break;
          v26 = MiFlushSectionInternal((ULONG_PTR)CurrentThread, v22, v21, LastSubsection, 0LL, v12, v24);
          FsRtlReleaseFileForCcFlush(v25);
          if ( v26 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        }
        MiDereferenceControlAreaFile(v30, (unsigned __int64)v25);
        MiFlushRelease(v30, (ULONG_PTR)v21, LastSubsection);
        return (unsigned int)v26;
      }
      v7 = -1073741670;
      goto LABEL_23;
    }
    if ( v34 )
    {
      if ( (v8 & 1) != 0 )
      {
        LastSubsection = MiFindLastSubsection(v18, 0);
        v22 = *(_QWORD *)(LastSubsection + 8)
            + 8
            * (*(unsigned int *)(LastSubsection + 44)
             - (unsigned __int64)(*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF)
             - 1);
        goto LABEL_15;
      }
    }
    else if ( (v8 & 1) != 0 )
    {
      v28 = v32;
      *v32 = 0;
      *((_QWORD *)v28 + 1) = 0LL;
      goto LABEL_23;
    }
    goto LABEL_30;
  }
  v7 = -1073741688;
LABEL_23:
  MiUnlockAndDereferenceVadShared(v14);
LABEL_24:
  if ( v8 >= 2 )
    KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
  return v7;
}
