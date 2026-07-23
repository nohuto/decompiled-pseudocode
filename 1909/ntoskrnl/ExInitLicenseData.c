/*
 * XREFs of ExInitLicenseData @ 0x140A0E14C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1406A315C (ExpSetKernelDataProtection.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E94CC (ExpCheckPortableOperatingSystem.c)
 *     sub_140754CB0 @ 0x140754CB0 (sub_140754CB0.c)
 *     sub_140762494 @ 0x140762494 (sub_140762494.c)
 *     ExGetExpirationDate @ 0x1407651D0 (ExGetExpirationDate.c)
 *     sub_14090C104 @ 0x14090C104 (sub_14090C104.c)
 *     sub_140A0E0BC @ 0x140A0E0BC (sub_140A0E0BC.c)
 */

__int64 ExInitLicenseData()
{
  char v0; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r12d
  char v3; // al
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int64 v6; // r14
  unsigned __int8 AbAllocationRegionCount; // si
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 result; // rax
  struct _KTHREAD *v17; // rax
  int v18; // r14d
  char v19; // si
  char v20; // cl
  struct _KTHREAD *v21; // rbx
  unsigned int v22; // edx
  unsigned __int8 v23; // r15
  unsigned int v24; // r8d
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int128 *v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  struct _KTHREAD *v32; // rax
  char v33; // al
  struct _KTHREAD *v34; // rbx
  unsigned int v35; // r8d
  unsigned __int8 v36; // si
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdi
  unsigned __int64 v40; // r14
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _KTHREAD *v48; // rax
  char v49; // al
  struct _KTHREAD *v50; // rbx
  unsigned __int8 v51; // si
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rdi
  int v55; // ecx
  unsigned int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  int ExpirationDate; // ecx
  struct _KTHREAD *v60; // rax
  struct _KTHREAD *v61; // rbx
  unsigned int v62; // r8d
  unsigned __int8 v63; // si
  unsigned int v64; // edx
  __int64 v65; // rcx
  __int64 v66; // rdi
  int v67; // eax
  unsigned int v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // [rsp+38h] [rbp-59h] BYREF
  int v72; // [rsp+3Ch] [rbp-55h] BYREF
  int v73; // [rsp+40h] [rbp-51h] BYREF
  int v74; // [rsp+44h] [rbp-4Dh] BYREF
  _DWORD v75[2]; // [rsp+48h] [rbp-49h] BYREF
  int v76; // [rsp+50h] [rbp-41h] BYREF
  int v77; // [rsp+54h] [rbp-3Dh]
  int v78; // [rsp+58h] [rbp-39h]
  int v79; // [rsp+5Ch] [rbp-35h]
  int v80; // [rsp+60h] [rbp-31h]
  unsigned __int64 v81; // [rsp+68h] [rbp-29h]
  LARGE_INTEGER Time; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v83[5]; // [rsp+78h] [rbp-19h] BYREF
  char v84; // [rsp+A0h] [rbp+Fh]
  int v85; // [rsp+A1h] [rbp+10h]
  __int16 v86; // [rsp+A5h] [rbp+14h]
  char v87; // [rsp+A7h] [rbp+16h]
  __int128 v88; // [rsp+A8h] [rbp+17h] BYREF

  v0 = byte_1409AE5C0;
  qword_1409AD3B8 = (__int64)ExIsWindowsToGo;
  qword_1409AD3C0 = (__int64)sub_1406265C0;
  Time.QuadPart = 0LL;
  qword_1409AD4C8 = (__int64)ExUpdateLicenseDataInternal;
  qword_1409AD4D0 = (__int64)sub_1406A1AF0;
  qword_1409AD4D8 = (__int64)ExUpdateOsPfnInRegistry;
  qword_1409AD4E0 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  sub_140754CB0();
  sub_140A0E0BC();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  v84 = 1;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  memset(v83, 0, 32);
  v83[4] = 10800LL;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v84 = 0;
  v2 = -1;
  ExpSetKernelDataProtection((__int64)v83, -1, 1);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
  v4 = KeGetCurrentThread();
  v71 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1409AE5D8) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
  else
    SessionId = -1;
  --v4->SpecialApcDisable;
  ++v4->AbAllocationRegionCount;
  v6 = (unsigned __int64)&qword_1409AE5D8 & 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v4->AbAllocationRegionCount;
  v8 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
  v81 = (unsigned __int64)&qword_1409AE5D8 & 0x7FFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v75[1] = v10;
    if ( v9 )
      break;
    v11 = (__int64)&v4->LockEntries[v10];
    v8 &= ~(1 << v10);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v6
      && *(_DWORD *)(v11 + 40) == SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( v11 )
        {
          *(_BYTE *)(v11 + 32) |= 2u;
          if ( *(__int64 *)(v11 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
          v12 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
          v13 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
          *(_BYTE *)(v11 + 25) &= ~1u;
          v71 = v12;
          *(_DWORD *)(v11 + 88) = v13;
          *(_QWORD *)(v11 + 32) = 0LL;
          v14 = (v11 - (__int64)v4 - 800) / 96;
          if ( AbAllocationRegionCount == 1 )
            v4->AbEntrySummary |= 1 << v14;
          else
            _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v14);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)&qword_1409AE5D8, SessionId, 0LL);
LABEL_19:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&qword_1409AE5D8, &v71);
  v9 = v4->SpecialApcDisable++ == -1;
  if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery(v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = ExpCheckPortableOperatingSystem(&v76);
  if ( (int)result >= 0 )
  {
    v60 = KeGetCurrentThread();
    --v60->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    dword_1409AD200 = v76;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    v61 = KeGetCurrentThread();
    v72 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1409AE5D8) == 1 )
      v62 = MmGetSessionIdEx((__int64)v61->ApcState.Process);
    else
      v62 = -1;
    --v61->SpecialApcDisable;
    v63 = ++v61->AbAllocationRegionCount;
    v64 = ((char)v61->AbEntrySummary | (char)v61->AbOrphanedEntrySummary) ^ 0x3F;
    v9 = !_BitScanReverse((unsigned int *)&v65, v64);
    v77 = v65;
    if ( v9 )
      goto LABEL_136;
    while ( 1 )
    {
      v66 = (__int64)&v61->LockEntries[v65];
      v64 &= ~(1 << v65);
      if ( (*(_BYTE *)(v66 + 26) & 1) != 0
        && (*(_DWORD *)(v66 + 32) & 1) == 0
        && (*(_QWORD *)(v66 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v6
        && *(_DWORD *)(v66 + 40) == v62 )
      {
        *(_BYTE *)(v66 + 26) &= ~1u;
        if ( *(_QWORD *)(v66 + 32) )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v65, v64);
      v77 = v65;
      if ( v9 )
        goto LABEL_136;
    }
    if ( !v66 )
    {
LABEL_136:
      if ( (*((_DWORD *)&v61->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v61, (ULONG_PTR)&qword_1409AE5D8, v62, 0LL);
    }
    else
    {
      *(_BYTE *)(v66 + 32) |= 2u;
      if ( *(__int64 *)(v66 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v66);
      v67 = *(_DWORD *)(v66 + 88) & 0x1FFFF;
      v68 = *(_DWORD *)(v66 + 88) & 0xFFFE0000;
      *(_BYTE *)(v66 + 25) &= ~1u;
      v72 = v67;
      *(_DWORD *)(v66 + 88) = v68;
      *(_QWORD *)(v66 + 32) = 0LL;
      v69 = (v66 - (__int64)v61 - 800) / 96;
      if ( v63 == 1 )
        v61->AbEntrySummary |= 1 << v69;
      else
        _InterlockedOr8((volatile signed __int8 *)&v61->AbOrphanedEntrySummary, 1 << v69);
    }
    --v61->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v61, (__int64)&qword_1409AE5D8, &v72);
    v9 = v61->SpecialApcDisable++ == -1;
    if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v61->ApcState.ApcListHead[0].Flink != &v61->152 )
      KiCheckForKernelApcDelivery(v70);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( off_1409AD038 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    v18 = sub_140762494();
    if ( v18 == -1073741762 )
      byte_1409AE5C0 = 1;
    v19 = byte_1409AE5C0;
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    v21 = KeGetCurrentThread();
    v73 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1409AE5D8) == 1 )
      v22 = MmGetSessionIdEx((__int64)v21->ApcState.Process);
    else
      v22 = -1;
    --v21->SpecialApcDisable;
    v23 = ++v21->AbAllocationRegionCount;
    v24 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
    v9 = !_BitScanReverse((unsigned int *)&v25, v24);
    v78 = v25;
    if ( v9 )
      goto LABEL_35;
    v26 = v81;
    while ( 1 )
    {
      v27 = (__int64)&v21->LockEntries[v25];
      v24 &= ~(1 << v25);
      if ( (*(_BYTE *)(v27 + 26) & 1) != 0
        && (*(_DWORD *)(v27 + 32) & 1) == 0
        && (*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v26
        && *(_DWORD *)(v27 + 40) == v22 )
      {
        *(_BYTE *)(v27 + 26) &= ~1u;
        if ( *(_QWORD *)(v27 + 32) )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v25, v24);
      v78 = v25;
      if ( v9 )
        goto LABEL_35;
    }
    if ( !v27 )
    {
LABEL_35:
      if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v21, (ULONG_PTR)&qword_1409AE5D8, v22, 0LL);
    }
    else
    {
      *(_BYTE *)(v27 + 32) |= 2u;
      if ( *(__int64 *)(v27 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v27);
      v41 = *(_DWORD *)(v27 + 88) & 0x1FFFF;
      v42 = *(_DWORD *)(v27 + 88) & 0xFFFE0000;
      *(_BYTE *)(v27 + 25) &= ~1u;
      v73 = v41;
      *(_DWORD *)(v27 + 88) = v42;
      *(_QWORD *)(v27 + 32) = 0LL;
      v43 = (v27 - (__int64)v21 - 800) / 96;
      if ( v23 == 1 )
        v21->AbEntrySummary |= 1 << v43;
      else
        _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v43);
    }
    --v21->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v21, (__int64)&qword_1409AE5D8, &v73);
    v9 = v21->SpecialApcDisable++ == -1;
    if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
      KiCheckForKernelApcDelivery(v28);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v0 && v19 )
      sub_14090C104(&KernelLicensingCacheCorrupt);
    if ( v18 >= 0 && !v19 )
      ExUpdateLicenseDataInternal(dword_140A4F154, (unsigned int *)off_1409AD038);
    v29 = &v88;
    v30 = 16LL;
    do
    {
      v31 = __rdtsc();
      *(_BYTE *)v29 = v31;
      v29 = (__int128 *)((char *)v29 + 1);
      --v30;
    }
    while ( v30 );
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    xmmword_1409AEE60 = v88;
    v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v33 & 2) != 0 && (v33 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    v34 = KeGetCurrentThread();
    v74 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1409AE5D8) == 1 )
      v35 = MmGetSessionIdEx((__int64)v34->ApcState.Process);
    else
      v35 = -1;
    --v34->SpecialApcDisable;
    v36 = ++v34->AbAllocationRegionCount;
    v37 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v38, v37);
      v79 = v38;
      if ( v9 )
        break;
      v39 = (__int64)&v34->LockEntries[v38];
      v37 &= ~(1 << v38);
      if ( (*(_BYTE *)(v39 + 26) & 1) != 0 && (*(_DWORD *)(v39 + 32) & 1) == 0 )
      {
        v40 = v81;
        if ( (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v81 && *(_DWORD *)(v39 + 40) == v35 )
        {
          *(_BYTE *)(v39 + 26) &= ~1u;
          if ( *(_QWORD *)(v39 + 32) )
          {
            if ( v39 )
            {
              *(_BYTE *)(v39 + 32) |= 2u;
              if ( *(__int64 *)(v39 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
              v44 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
              v45 = *(_DWORD *)(v39 + 88) & 0xFFFE0000;
              *(_BYTE *)(v39 + 25) &= ~1u;
              v74 = v44;
              *(_DWORD *)(v39 + 88) = v45;
              *(_QWORD *)(v39 + 32) = 0LL;
              v46 = (v39 - (__int64)v34 - 800) / 96;
              if ( v36 == 1 )
                v34->AbEntrySummary |= 1 << v46;
              else
                _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, 1 << v46);
              goto LABEL_70;
            }
            break;
          }
        }
      }
    }
    if ( (*((_DWORD *)&v34->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v34, (ULONG_PTR)&qword_1409AE5D8, v35, 0LL);
    v40 = v81;
LABEL_70:
    --v34->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v34, (__int64)&qword_1409AE5D8, &v74);
    v9 = v34->SpecialApcDisable++ == -1;
    if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
      KiCheckForKernelApcDelivery(v47);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    off_1409AD038 = 0LL;
    if ( !Data && (_DWORD)NumOfElements )
    {
      memset(qword_1409AFF80, 0, 16LL * (unsigned int)NumOfElements);
      LODWORD(NumOfElements) = 0;
    }
    v49 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v49 & 2) != 0 && (v49 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    v50 = KeGetCurrentThread();
    v75[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1409AE5D8) == 1 )
      v2 = MmGetSessionIdEx((__int64)v50->ApcState.Process);
    --v50->SpecialApcDisable;
    v51 = ++v50->AbAllocationRegionCount;
    v52 = ((char)v50->AbEntrySummary | (char)v50->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v53, v52);
      v80 = v53;
      if ( v9 )
        break;
      v54 = (__int64)&v50->LockEntries[v53];
      v52 &= ~(1 << v53);
      if ( (*(_BYTE *)(v54 + 26) & 1) != 0
        && (*(_DWORD *)(v54 + 32) & 1) == 0
        && (*(_QWORD *)(v54 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v40
        && *(_DWORD *)(v54 + 40) == v2 )
      {
        *(_BYTE *)(v54 + 26) &= ~1u;
        if ( *(_QWORD *)(v54 + 32) )
        {
          if ( v54 )
          {
            *(_BYTE *)(v54 + 32) |= 2u;
            if ( *(__int64 *)(v54 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v54);
            v55 = *(_DWORD *)(v54 + 88) & 0x1FFFF;
            v56 = *(_DWORD *)(v54 + 88) & 0xFFFE0000;
            *(_BYTE *)(v54 + 25) &= ~1u;
            v75[0] = v55;
            *(_DWORD *)(v54 + 88) = v56;
            *(_QWORD *)(v54 + 32) = 0LL;
            v57 = (v54 - (__int64)v50 - 800) / 96;
            if ( v51 == 1 )
              v50->AbEntrySummary |= 1 << v57;
            else
              _InterlockedOr8((volatile signed __int8 *)&v50->AbOrphanedEntrySummary, 1 << v57);
            goto LABEL_90;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v50->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v50, (ULONG_PTR)&qword_1409AE5D8, v2, 0LL);
LABEL_90:
    --v50->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v50, (__int64)&qword_1409AE5D8, v75);
    v9 = v50->SpecialApcDisable++ == -1;
    if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
      KiCheckForKernelApcDelivery(v58);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    result = Time.QuadPart;
    if ( ExpirationDate < 0 )
      result = 0LL;
    MEMORY[0xFFFFF780000002C8] = result;
  }
  return result;
}
