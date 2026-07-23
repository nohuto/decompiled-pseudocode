/*
 * XREFs of ExUpdateLicenseDataInternal @ 0x1405A1AD0
 * Callers:
 *     ExUpdateLicenseData @ 0x1408CFFE0 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x1409C53A0 (ExInitLicenseData.c)
 * Callees:
 *     ExpLicUpdateChecksum @ 0x1400077F0 (ExpLicUpdateChecksum.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     sub_1405A2530 @ 0x1405A2530 (sub_1405A2530.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405A2B24 (ExpGetKernelDataProtection.c)
 *     sub_1405A2F10 @ 0x1405A2F10 (sub_1405A2F10.c)
 *     MmMapViewInSystemSpace @ 0x1405A33A0 (MmMapViewInSystemSpace.c)
 *     sub_1405A33DC @ 0x1405A33DC (sub_1405A33DC.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1405A3404 (ExpPutLicenseDataIntoRegistry.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     sub_1408D0314 @ 0x1408D0314 (sub_1408D0314.c)
 */

__int64 __fastcall ExUpdateLicenseDataInternal(int a1, unsigned int *a2)
{
  void *v4; // r12
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r9d
  char *v8; // rdi
  char v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v11; // cl
  unsigned int v12; // edx
  int v13; // r14d
  NTSTATUS v14; // edi
  PVOID v15; // r12
  unsigned int *v16; // r12
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  struct _KTHREAD *v19; // rax
  unsigned int v20; // edi
  PVOID PoolWithTag; // rax
  void *v22; // rsi
  struct _KTHREAD *v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int16 v31; // ax
  struct _KTHREAD *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // r9
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // eax
  char v43; // r12
  char v44; // al
  __int64 v45; // rcx
  int v46; // esi
  struct _KTHREAD *v47; // rax
  char v48; // al
  struct _KTHREAD *v50; // rax
  int v51; // eax
  int KernelDataProtection; // eax
  __int64 v53; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // ecx
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // ecx
  unsigned __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  unsigned int v65; // ecx
  unsigned __int64 v66; // rax
  int v67; // eax
  struct _KTHREAD *v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  unsigned int v71; // ecx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  NTSTATUS v74; // [rsp+40h] [rbp-3D8h]
  char v75; // [rsp+44h] [rbp-3D4h]
  bool v76; // [rsp+45h] [rbp-3D3h]
  char v77; // [rsp+46h] [rbp-3D2h]
  int v78; // [rsp+48h] [rbp-3D0h]
  _DWORD NumOfElements[3]; // [rsp+4Ch] [rbp-3CCh] BYREF
  unsigned int v80; // [rsp+58h] [rbp-3C0h]
  int v81; // [rsp+5Ch] [rbp-3BCh]
  PVOID P; // [rsp+60h] [rbp-3B8h]
  PVOID MappedBase; // [rsp+68h] [rbp-3B0h] BYREF
  void *Src; // [rsp+70h] [rbp-3A8h]
  int v85; // [rsp+78h] [rbp-3A0h]
  PVOID v86; // [rsp+80h] [rbp-398h]
  PVOID v87; // [rsp+88h] [rbp-390h]
  PVOID v88; // [rsp+90h] [rbp-388h]
  LARGE_INTEGER MaximumSize; // [rsp+98h] [rbp-380h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-378h] BYREF
  __int128 v91; // [rsp+B0h] [rbp-368h] BYREF
  __int128 v92; // [rsp+C0h] [rbp-358h]
  __int128 v93; // [rsp+D0h] [rbp-348h]
  __int128 v94; // [rsp+E0h] [rbp-338h] BYREF
  __int128 v95; // [rsp+F0h] [rbp-328h]
  __int128 v96; // [rsp+100h] [rbp-318h]
  __int128 v97; // [rsp+110h] [rbp-308h] BYREF
  __int128 v98; // [rsp+120h] [rbp-2F8h]
  __int128 v99; // [rsp+130h] [rbp-2E8h]
  __int128 v100; // [rsp+140h] [rbp-2D8h] BYREF
  __int128 v101; // [rsp+150h] [rbp-2C8h]
  __int128 v102; // [rsp+160h] [rbp-2B8h]
  __int128 v103; // [rsp+170h] [rbp-2A8h] BYREF
  __int128 v104; // [rsp+180h] [rbp-298h]
  __int128 v105; // [rsp+190h] [rbp-288h]
  __int128 v106; // [rsp+1A0h] [rbp-278h] BYREF
  __int128 v107; // [rsp+1B0h] [rbp-268h]
  __int128 v108; // [rsp+1C0h] [rbp-258h]
  __int64 v109; // [rsp+1D0h] [rbp-248h]
  int v110; // [rsp+1D8h] [rbp-240h]
  PVOID Object; // [rsp+1E0h] [rbp-238h] BYREF
  ULONG_PTR ViewSize; // [rsp+1E8h] [rbp-230h] BYREF
  __int128 v113; // [rsp+1F0h] [rbp-228h] BYREF
  __int128 v114; // [rsp+200h] [rbp-218h]
  __int128 v115; // [rsp+210h] [rbp-208h]
  _OWORD v116[3]; // [rsp+220h] [rbp-1F8h] BYREF
  _OWORD v117[3]; // [rsp+250h] [rbp-1C8h] BYREF
  _OWORD v118[3]; // [rsp+280h] [rbp-198h] BYREF
  _OWORD v119[3]; // [rsp+2B0h] [rbp-168h] BYREF
  __int64 v120; // [rsp+2E0h] [rbp-138h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2E8h] [rbp-130h] BYREF
  _BYTE v122[8]; // [rsp+318h] [rbp-100h] BYREF
  int v123; // [rsp+320h] [rbp-F8h]
  _BYTE v124[8]; // [rsp+348h] [rbp-D0h] BYREF
  int v125; // [rsp+350h] [rbp-C8h]
  _BYTE v126[48]; // [rsp+378h] [rbp-A0h] BYREF
  _BYTE v127[8]; // [rsp+3A8h] [rbp-70h] BYREF
  int v128; // [rsp+3B0h] [rbp-68h]
  char v129; // [rsp+428h] [rbp+10h]
  char v130; // [rsp+430h] [rbp+18h]

  v76 = 0;
  v129 = 0;
  v77 = 0;
  v130 = 0;
  MappedBase = 0LL;
  v88 = 0LL;
  v86 = 0LL;
  v4 = 0LL;
  memset(NumOfElements, 0, sizeof(NumOfElements));
  P = 0LL;
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_199;
  v5 = *a2;
  if ( *a2 > 0x10000 || (v6 = a2[1], (unsigned int)v6 > 0x10000) || (v7 = a2[2], v7 > 0x10000) )
  {
    v74 = -1073741760;
    v46 = -1073741811;
    goto LABEL_200;
  }
  v87 = a2 + 5;
  v8 = (char *)a2 + v6 + 20;
  Src = v8;
  if ( ((unsigned __int8)v8 & 3) != 0 )
  {
    v74 = -1073741811;
    v46 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
LABEL_200:
    v9 = 1;
    goto LABEL_201;
  }
  if ( v7 + (_DWORD)v6 + 20 != v5 )
  {
LABEL_199:
    v46 = -1073741811;
    v74 = -1073741811;
    goto LABEL_200;
  }
  v9 = 1;
  if ( v5 != a1 || a2[4] != 1 )
  {
    v46 = -1073741811;
    v74 = -1073741811;
    goto LABEL_201;
  }
  v74 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  if ( off_14096E030 )
  {
    v11 = 1;
    v129 = 1;
  }
  else
  {
    v77 = 1;
    v11 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v11 )
    {
      v74 = -1073741823;
      goto LABEL_32;
    }
  }
  else if ( !v11 && (a2[3] & 1) != 0 )
  {
    v74 = -1073741811;
    goto LABEL_32;
  }
  v76 = 0;
  if ( !v11 )
  {
    if ( Data )
    {
      if ( !byte_14096F4C1 && *a2 == *(_DWORD *)Data )
      {
        v12 = a2[1];
        if ( v12 == *((_DWORD *)Data + 1)
          && a2[2] == *((_DWORD *)Data + 2)
          && a2[3] == *((_DWORD *)Data + 3)
          && a2[4] == *((_DWORD *)Data + 4)
          && RtlCompareMemory((char *)Data + 20, a2 + 5, v12) == a2[1] )
        {
          v76 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v8, a2[2]) == a2[2];
        }
      }
    }
  }
LABEL_32:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v74 < 0 )
  {
    v46 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
LABEL_201:
    v13 = 4;
    goto LABEL_102;
  }
  if ( v76 )
  {
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v116);
      if ( KernelDataProtection < 0 )
      {
        v13 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v91 = 0LL;
            v92 = 0uLL;
            DWORD2(v91) = 4;
            *(_QWORD *)&v93 = 0LL;
            BYTE8(v93) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v91);
            if ( !updated )
            {
              if ( (_DWORD)v53 )
              {
                v55 = 16LL * (unsigned int)v53;
                updated = v55 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v55 <= 0xFFFFFFFF )
                  updated = ExpLicUpdateChecksum((__int64)qword_140970D00, v53, &v91);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v91 = 0LL;
              DWORD2(v91) = 4;
            }
            v116[0] = v91;
            v116[1] = v92;
            v116[2] = v93;
            v56 = 0;
          }
          else
          {
            v56 = -1073741811;
          }
          if ( v56 >= 0 )
          {
            DWORD2(v116[0]) = 4;
            ExpSetKernelDataProtection(v116, 0xFFFFFFFFLL, 0LL);
          }
        }
        v78 = 4;
        goto LABEL_138;
      }
      v51 = DWORD2(v116[0]);
    }
    else
    {
      v51 = dword_14096E0B8;
    }
    v78 = v51;
    v13 = 4;
LABEL_138:
    *(_QWORD *)&v94 = 0LL;
    v95 = 0uLL;
    DWORD2(v94) = 0;
    *(_QWORD *)&v96 = 10800LL;
    BYTE8(v96) = 1;
    v58 = ExpLicUpdateChecksum((__int64)v87, (unsigned int)::NumOfElements, &v94);
    if ( !v58 )
    {
      if ( (_DWORD)v57 )
      {
        v59 = 16LL * (unsigned int)v57;
        v58 = v59 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v59 <= 0xFFFFFFFF )
          v58 = ExpLicUpdateChecksum((__int64)qword_140970D00, v57, &v94);
      }
    }
    if ( v58 )
    {
      *(_QWORD *)&v94 = 0LL;
      DWORD2(v94) = 4;
    }
    v113 = v94;
    v114 = v95;
    v115 = v96;
    ExpSetKernelDataProtection(&v113, 7LL, 1LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v78 )
      ((void (*)(void))sub_1405A33DC)();
    v74 = 0x40000000;
    goto LABEL_149;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v13 = 4;
  v74 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v74 < 0 )
    goto LABEL_152;
  v14 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v15 = Object;
  v86 = Object;
  v74 = v14;
  ZwClose(SectionHandle);
  if ( v14 < 0 )
    goto LABEL_152;
  ViewSize = 0LL;
  v74 = MmMapViewInSystemSpace(v15, &MappedBase, &ViewSize);
  if ( v74 < 0 )
    goto LABEL_152;
  v16 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v16[4] = a2[4];
  memmove(v16 + 5, a2 + 5, a2[1]);
  memmove((char *)v16 + a2[1] + 20, Src, a2[2]);
  v18 = (unsigned int *)((char *)v16 + v16[1] + 20);
  if ( v16[2] != 4 || !v18 || *v18 != 69 )
  {
    v74 = -1073741761;
    goto LABEL_152;
  }
  LOBYTE(v17) = 1;
  v74 = sub_1405A2F10(v16, v17, 0LL, 0LL, NumOfElements);
  if ( v74 != -1073741789 )
    goto LABEL_49;
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  v74 = NumOfElements[0] > 0x923u ? 0xC000000D : 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v74 < 0 )
  {
LABEL_152:
    v46 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
    goto LABEL_102;
  }
  v20 = NumOfElements[0];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * NumOfElements[0], 0x20534C53u);
  v22 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v74 = -1073741801;
    v46 = -1073741811;
    v4 = 0LL;
    goto LABEL_102;
  }
  v74 = sub_1405A2F10(MappedBase, 0LL, PoolWithTag, NumOfElements[0], 0LL);
  if ( v74 >= 0 )
    qsort(v22, v20, 0x10uLL, sub_1405A2530);
LABEL_49:
  if ( v74 < 0 )
  {
    v46 = -1073741811;
    if ( v74 == -1073741762 )
      v74 = -1073741811;
    goto LABEL_157;
  }
  v75 = 0;
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  if ( !v129 )
  {
    v24 = 0;
    v81 = 0;
    v25 = 0;
    v80 = 0;
    while ( v24 < NumOfElements[0] && v25 < (unsigned int)::NumOfElements )
    {
      v26 = 2LL * v25;
      v27 = (char *)P + 16 * v24;
      v28 = sub_1405A2530(v27, &qword_140970D00[2 * v25]);
      v110 = v28;
      v29 = v27[1];
      v109 = v29;
      v30 = qword_140970D00[v26 + 1];
      v120 = v30;
      if ( v28 < 0 )
      {
        if ( (*(_DWORD *)(v29 + 8) & 2) != 0 )
          goto LABEL_61;
        v81 = ++v24;
        v25 = v80;
      }
      else
      {
        if ( v28 <= 0 )
        {
          if ( (*(_DWORD *)(v29 + 8) & 2) != 0 )
          {
            v31 = *(_WORD *)(v30 + 6);
            if ( *(_WORD *)(v29 + 6) != v31
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v29 + 2) + 16LL + v29),
                   (const void *)(*(unsigned __int16 *)(v30 + 2) + 16LL + v30),
                   v31) )
            {
LABEL_61:
              v75 = 1;
              goto LABEL_67;
            }
          }
          v81 = ++v24;
        }
        v25 = ++v80;
      }
    }
    while ( v24 < NumOfElements[0] )
    {
      v109 = *((_QWORD *)P + 2 * v24 + 1);
      if ( (*(_DWORD *)(v109 + 8) & 2) != 0 )
        goto LABEL_61;
      v81 = ++v24;
    }
  }
LABEL_67:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObfReferenceObject(v86);
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
  v87 = MappedBase;
  LOBYTE(v33) = 0;
  if ( !MappedBase )
  {
    LODWORD(v34) = NumOfElements[0];
LABEL_160:
    v37 = -1073741811;
    goto LABEL_79;
  }
  v34 = NumOfElements[0];
  if ( NumOfElements[0] && !P )
    goto LABEL_160;
  *(_QWORD *)&v97 = 0LL;
  v98 = 0uLL;
  DWORD2(v97) = 0;
  *(_QWORD *)&v99 = 10800LL;
  BYTE8(v99) = 1;
  v36 = ExpLicUpdateChecksum((__int64)MappedBase + 20, (__int64)P, &v97);
  if ( !v36 )
  {
    if ( (_DWORD)v34 )
    {
      v36 = (unsigned __int64)(16 * v34) > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( (unsigned __int64)(16 * v34) <= 0xFFFFFFFF )
        v36 = ExpLicUpdateChecksum(v35, v35, &v97);
    }
  }
  if ( v36 )
  {
    *(_QWORD *)&v97 = v33;
    DWORD2(v97) = 4;
  }
  v113 = v97;
  v114 = v98;
  v115 = v99;
  v37 = v33;
LABEL_79:
  LODWORD(Src) = v37;
  v74 = v37;
  if ( v37 < 0 )
    goto LABEL_92;
  ExpSetKernelDataProtection(&v113, 7LL, 1LL);
  *(_QWORD *)&NumOfElements[1] = qword_14096FA58;
  v88 = Data;
  qword_14096FA58 = (__int64)v86;
  Data = v87;
  MappedBase = 0LL;
  off_14096E030 = 0LL;
  v130 = byte_14096F4C1;
  byte_14096F4C1 = 0;
  memset(qword_140970D00, 0, 16LL * (unsigned int)::NumOfElements);
  LODWORD(v38) = 0;
  LODWORD(::NumOfElements) = 0;
  if ( P )
  {
    memmove(qword_140970D00, P, 16LL * (unsigned int)v34);
    LODWORD(::NumOfElements) = v34;
    LODWORD(v38) = 0;
  }
  byte_14096F4DB = 1;
  if ( !v87 )
  {
    v40 = dword_14096E0B8;
    goto LABEL_85;
  }
  v39 = ExpGetKernelDataProtection(v117);
  LODWORD(v38) = 0;
  if ( v39 >= 0 )
  {
    v40 = DWORD2(v117[0]);
LABEL_85:
    v85 = v40;
    goto LABEL_86;
  }
  if ( v39 == -1073741275 )
  {
    if ( Data )
    {
      *(_QWORD *)&v100 = 0LL;
      v101 = 0uLL;
      DWORD2(v100) = 4;
      *(_QWORD *)&v102 = 0LL;
      BYTE8(v102) = 1;
      v61 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v100);
      if ( !v61 )
      {
        if ( (_DWORD)v60 )
        {
          v62 = 16LL * (unsigned int)v60;
          v61 = v62 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v62 <= 0xFFFFFFFF )
            v61 = ExpLicUpdateChecksum((__int64)qword_140970D00, v60, &v100);
        }
      }
      if ( v61 )
      {
        *(_QWORD *)&v100 = v38;
        DWORD2(v100) = 4;
      }
      v117[0] = v100;
      v117[1] = v101;
      v117[2] = v102;
      v63 = v38;
    }
    else
    {
      v63 = -1073741811;
    }
    if ( v63 >= 0 )
    {
      DWORD2(v117[0]) = 4;
      ExpSetKernelDataProtection(v117, 0xFFFFFFFFLL, 0LL);
      LODWORD(v38) = 0;
    }
  }
  v40 = 4;
  v85 = 4;
LABEL_86:
  if ( (*((_DWORD *)Data + 3) & 1) != 0 )
  {
    dword_14096E0B8 = 2;
    v123 = 2;
    ExpSetKernelDataProtection(v122, 2LL, 0LL);
    v77 = 1;
  }
  else
  {
    dword_14096E0B8 = v38;
    v125 = v38;
    ExpSetKernelDataProtection(v124, 2LL, 0LL);
  }
  LOBYTE(v33) = 0;
  if ( Data )
  {
    v41 = ExpGetKernelDataProtection(v118);
    LOBYTE(v33) = 0;
    if ( v41 < 0 )
    {
      if ( v41 == -1073741275 )
      {
        if ( Data )
        {
          *(_QWORD *)&v103 = 0LL;
          v104 = 0uLL;
          DWORD2(v103) = 4;
          *(_QWORD *)&v105 = 0LL;
          BYTE8(v105) = 1;
          v65 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v103);
          if ( !v65 )
          {
            if ( (_DWORD)v64 )
            {
              v66 = 16LL * (unsigned int)v64;
              v65 = v66 > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( v66 <= 0xFFFFFFFF )
                v65 = ExpLicUpdateChecksum((__int64)qword_140970D00, v64, &v103);
            }
          }
          if ( v65 )
          {
            *(_QWORD *)&v103 = v33;
            DWORD2(v103) = 4;
          }
          v118[0] = v103;
          v118[1] = v104;
          v118[2] = v105;
          v67 = v33;
        }
        else
        {
          v67 = -1073741811;
        }
        if ( v67 >= 0 )
        {
          DWORD2(v118[0]) = 4;
          ExpSetKernelDataProtection(v118, 0xFFFFFFFFLL, 0LL);
          LOBYTE(v33) = 0;
        }
      }
      v42 = 4;
    }
    else
    {
      v42 = DWORD2(v118[0]);
    }
  }
  else
  {
    v42 = dword_14096E0B8;
  }
  if ( v40 != v42 && (!v40 || !v42) )
  {
    v43 = 1;
    goto LABEL_93;
  }
LABEL_92:
  v43 = v33;
LABEL_93:
  v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v44 & 2) != 0 && (v44 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
  KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (int)Src < 0 )
  {
LABEL_149:
    v46 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
    goto LABEL_102;
  }
  if ( !v129 )
  {
    v74 = ExpPutLicenseDataIntoRegistry();
    v45 = 0LL;
    if ( v74 < 0 )
    {
      v46 = -1073741811;
LABEL_157:
      v4 = *(void **)&NumOfElements[1];
      goto LABEL_102;
    }
  }
  if ( v43 || !v129 )
    sub_1405A33DC(v45);
  v74 = 0;
  v46 = -1073741811;
  v4 = *(void **)&NumOfElements[1];
  if ( v75 == 1 )
    v74 = 263;
LABEL_102:
  if ( v130 && !byte_14096F4C1 )
    sub_1408D0314(&KernelLicensingCacheCorruptionFixed);
  if ( v77 )
  {
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
    v126[40] = 0;
    ExpSetKernelDataProtection(v126, 32LL, 0LL);
    v48 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v48 & 2) != 0 && (v48 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v86 )
    ObfDereferenceObject(v86);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v88 )
    MmUnmapViewInSystemSpace(v88);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v74 == -1073741811 || (unsigned int)(v74 + 1073741761) <= 1 )
  {
    v68 = KeGetCurrentThread();
    --v68->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
    if ( Data )
    {
      v69 = ExpGetKernelDataProtection(v119);
      if ( v69 < 0 )
      {
        if ( v69 == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v106 = 0LL;
            v107 = 0uLL;
            DWORD2(v106) = 4;
            *(_QWORD *)&v108 = 0LL;
            BYTE8(v108) = 1;
            v71 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v106);
            if ( !v71 )
            {
              if ( (_DWORD)v70 )
              {
                v72 = 16LL * (unsigned int)v70;
                v71 = v72 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v72 <= 0xFFFFFFFF )
                  v71 = ExpLicUpdateChecksum((__int64)qword_140970D00, v70, &v106);
              }
            }
            if ( v71 )
            {
              *(_QWORD *)&v106 = 0LL;
              DWORD2(v106) = 4;
            }
            v119[0] = v106;
            v119[1] = v107;
            v119[2] = v108;
            v46 = 0;
          }
          if ( v46 >= 0 )
          {
            DWORD2(v119[0]) = 4;
            ExpSetKernelDataProtection(v119, 0xFFFFFFFFLL, 0LL);
          }
        }
      }
      else
      {
        v13 = DWORD2(v119[0]);
      }
    }
    else
    {
      v13 = dword_14096E0B8;
    }
    if ( v13 )
    {
      v9 = 0;
    }
    else
    {
      dword_14096E0B8 = 5;
      v128 = 5;
      ExpSetKernelDataProtection(v127, 2LL, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v9 )
      sub_1405A33DC(v73);
  }
  return (unsigned int)v74;
}
