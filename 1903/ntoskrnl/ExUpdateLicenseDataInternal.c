/*
 * XREFs of ExUpdateLicenseDataInternal @ 0x1406ABBE0
 * Callers:
 *     ExUpdateLicenseData @ 0x14090C360 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x140A0D9CC (ExInitLicenseData.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExpLicUpdateChecksum @ 0x1400FA64C (ExpLicUpdateChecksum.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401C0A10 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 *     ExpLicensingDescriptorCompare @ 0x1406AC700 (ExpLicensingDescriptorCompare.c)
 *     ExpSetKernelDataProtection @ 0x1406AC7AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406ACCC0 (ExpGetKernelDataProtection.c)
 *     sub_1406ACF88 @ 0x1406ACF88 (sub_1406ACF88.c)
 *     MmMapViewInSystemSpace @ 0x1406AD0D0 (MmMapViewInSystemSpace.c)
 *     sub_1406AD10C @ 0x1406AD10C (sub_1406AD10C.c)
 *     sub_1406AD4E0 @ 0x1406AD4E0 (sub_1406AD4E0.c)
 *     sub_14090C6A4 @ 0x14090C6A4 (sub_14090C6A4.c)
 */

__int64 __fastcall ExUpdateLicenseDataInternal(int a1, unsigned int *a2)
{
  void *v4; // r15
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  char *v8; // rdi
  char v9; // r12
  char v10; // cl
  unsigned int v11; // edx
  NTSTATUS v12; // edi
  PVOID v13; // r15
  unsigned int *v14; // r15
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  struct _KTHREAD *v17; // rax
  unsigned int v18; // edi
  PVOID PoolWithTag; // rax
  void *v20; // rsi
  unsigned int v21; // r15d
  unsigned int v22; // ecx
  __int64 v23; // rsi
  _QWORD *v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int16 v28; // ax
  struct _KTHREAD *v29; // rax
  PVOID v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // eax
  char v36; // r15
  int v37; // esi
  int v38; // eax
  int v39; // eax
  signed __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // esi
  struct _KTHREAD *v43; // rax
  signed __int64 v44; // rax
  struct _KTHREAD *v46; // rax
  int v47; // eax
  int KernelDataProtection; // eax
  __int64 v49; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // ecx
  unsigned __int64 v55; // rax
  signed __int64 v56; // rax
  __int64 v57; // rdx
  unsigned int v58; // ecx
  unsigned __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  unsigned int v62; // ecx
  unsigned __int64 v63; // rax
  int v64; // eax
  struct _KTHREAD *v65; // rax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  unsigned int v69; // ecx
  unsigned __int64 v70; // rax
  char v71; // bl
  __int64 v72; // rcx
  NTSTATUS v73; // [rsp+40h] [rbp-418h]
  char v74; // [rsp+44h] [rbp-414h]
  bool v75; // [rsp+45h] [rbp-413h]
  char v76; // [rsp+46h] [rbp-412h]
  int v77; // [rsp+48h] [rbp-410h]
  _DWORD NumOfElements[3]; // [rsp+4Ch] [rbp-40Ch] BYREF
  unsigned int v79; // [rsp+58h] [rbp-400h]
  int v80; // [rsp+5Ch] [rbp-3FCh]
  PVOID P; // [rsp+60h] [rbp-3F8h]
  PVOID MappedBase; // [rsp+68h] [rbp-3F0h] BYREF
  unsigned int *v83; // [rsp+70h] [rbp-3E8h]
  int v84; // [rsp+78h] [rbp-3E0h]
  PVOID v85; // [rsp+80h] [rbp-3D8h]
  LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp-3D0h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-3C8h] BYREF
  PVOID v88; // [rsp+98h] [rbp-3C0h]
  __int128 v89; // [rsp+A0h] [rbp-3B8h] BYREF
  __int128 v90; // [rsp+B0h] [rbp-3A8h]
  __int128 v91; // [rsp+C0h] [rbp-398h]
  __int128 v92; // [rsp+D0h] [rbp-388h] BYREF
  __int128 v93; // [rsp+E0h] [rbp-378h]
  __int128 v94; // [rsp+F0h] [rbp-368h]
  __int128 v95; // [rsp+100h] [rbp-358h] BYREF
  __int128 v96; // [rsp+110h] [rbp-348h]
  __int128 v97; // [rsp+120h] [rbp-338h]
  __int128 v98; // [rsp+130h] [rbp-328h] BYREF
  __int128 v99; // [rsp+140h] [rbp-318h]
  __int128 v100; // [rsp+150h] [rbp-308h]
  __int128 v101; // [rsp+160h] [rbp-2F8h] BYREF
  __int128 v102; // [rsp+170h] [rbp-2E8h]
  __int128 v103; // [rsp+180h] [rbp-2D8h]
  __int128 v104; // [rsp+190h] [rbp-2C8h] BYREF
  __int128 v105; // [rsp+1A0h] [rbp-2B8h]
  __int128 v106; // [rsp+1B0h] [rbp-2A8h]
  int v107; // [rsp+1C0h] [rbp-298h]
  PVOID Object; // [rsp+1C8h] [rbp-290h] BYREF
  ULONG_PTR ViewSize; // [rsp+1D0h] [rbp-288h] BYREF
  void *Src; // [rsp+1D8h] [rbp-280h]
  __int64 v111; // [rsp+1E0h] [rbp-278h]
  _OWORD v112[3]; // [rsp+1E8h] [rbp-270h] BYREF
  _OWORD v113[3]; // [rsp+218h] [rbp-240h] BYREF
  _OWORD v114[3]; // [rsp+248h] [rbp-210h] BYREF
  _OWORD v115[3]; // [rsp+278h] [rbp-1E0h] BYREF
  _OWORD v116[3]; // [rsp+2A8h] [rbp-1B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2D8h] [rbp-180h] BYREF
  signed __int64 v118; // [rsp+308h] [rbp-150h]
  struct _KTHREAD *CurrentThread; // [rsp+310h] [rbp-148h]
  signed __int64 v120; // [rsp+318h] [rbp-140h]
  struct _KTHREAD *v121; // [rsp+320h] [rbp-138h]
  __int64 v122; // [rsp+328h] [rbp-130h]
  signed __int64 v123; // [rsp+330h] [rbp-128h]
  signed __int64 v124; // [rsp+338h] [rbp-120h]
  signed __int64 v125; // [rsp+350h] [rbp-108h]
  signed __int64 v126; // [rsp+358h] [rbp-100h]
  _DWORD v127[12]; // [rsp+360h] [rbp-F8h] BYREF
  _DWORD v128[12]; // [rsp+390h] [rbp-C8h] BYREF
  _BYTE v129[48]; // [rsp+3C0h] [rbp-98h] BYREF
  _BYTE v130[104]; // [rsp+3F0h] [rbp-68h] BYREF
  char v131; // [rsp+468h] [rbp+10h]
  char v132; // [rsp+470h] [rbp+18h]

  v75 = 0;
  v131 = 0;
  v76 = 0;
  v132 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  MaximumSize.QuadPart = 0LL;
  MappedBase = 0LL;
  v88 = 0LL;
  v85 = 0LL;
  v4 = 0LL;
  memset(NumOfElements, 0, sizeof(NumOfElements));
  P = 0LL;
  memset(v112, 0, sizeof(v112));
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_128;
  v5 = *a2;
  if ( *a2 > 0x10000 || (v6 = a2[1], (unsigned int)v6 > 0x10000) || (v7 = a2[2], v7 > 0x10000) )
  {
    v73 = -1073741760;
    v9 = 1;
    goto LABEL_127;
  }
  v83 = a2 + 5;
  v8 = (char *)a2 + v6 + 20;
  Src = v8;
  if ( ((unsigned __int8)v8 & 3) != 0 )
  {
    v73 = -1073741811;
    v9 = 1;
    goto LABEL_126;
  }
  if ( v7 + (_DWORD)v6 + 20 != v5 )
  {
LABEL_128:
    v9 = 1;
LABEL_129:
    v42 = -1073741811;
    v73 = -1073741811;
    goto LABEL_100;
  }
  v9 = 1;
  if ( v5 != a1 || a2[4] != 1 )
    goto LABEL_129;
  v73 = 0;
  ExpSubscriptionPfnInitialized = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  if ( off_1409AD038 )
  {
    v10 = 1;
    v131 = 1;
  }
  else
  {
    v76 = 1;
    v10 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v10 )
    {
      v73 = -1073741823;
      goto LABEL_32;
    }
  }
  else if ( !v10 && (a2[3] & 1) != 0 )
  {
    v73 = -1073741811;
    goto LABEL_32;
  }
  v75 = 0;
  if ( !v10 )
  {
    if ( Data )
    {
      if ( !byte_1409AE5C0 && *a2 == *(_DWORD *)Data )
      {
        v11 = a2[1];
        if ( v11 == *((_DWORD *)Data + 1)
          && a2[2] == *((_DWORD *)Data + 2)
          && a2[3] == *((_DWORD *)Data + 3)
          && a2[4] == *((_DWORD *)Data + 4)
          && RtlCompareMemory((char *)Data + 20, a2 + 5, v11) == a2[1] )
        {
          v75 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v8, a2[2]) == a2[2];
        }
      }
    }
  }
LABEL_32:
  v118 = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL);
  if ( v118 != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegion();
  if ( v73 < 0 )
    goto LABEL_126;
  if ( v75 )
  {
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    memset(v114, 0, sizeof(v114));
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v114);
      if ( KernelDataProtection < 0 )
      {
        if ( KernelDataProtection == -1073741275 )
        {
          HIDWORD(v92) = 0;
          *(_DWORD *)((char *)&v94 + 9) = 0;
          *(_WORD *)((char *)&v94 + 13) = 0;
          HIBYTE(v94) = 0;
          if ( Data )
          {
            *(_QWORD *)&v92 = 0LL;
            v93 = 0uLL;
            DWORD2(v92) = 4;
            *(_QWORD *)&v94 = 0LL;
            BYTE8(v94) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v92);
            if ( !updated )
            {
              if ( (_DWORD)v49 )
              {
                v51 = 16LL * (unsigned int)v49;
                updated = v51 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v51 <= 0xFFFFFFFF )
                  updated = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v49, &v92);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v92 = 0LL;
              DWORD2(v92) = 4;
            }
            v114[0] = v92;
            v114[1] = v93;
            v114[2] = v94;
            v52 = 0;
          }
          else
          {
            v52 = -1073741811;
          }
          if ( v52 >= 0 )
          {
            DWORD2(v114[0]) = 4;
            ExpSetKernelDataProtection(v114, 0xFFFFFFFFLL, 0LL);
          }
        }
        v77 = 4;
        goto LABEL_148;
      }
      v47 = DWORD2(v114[0]);
    }
    else
    {
      v47 = dword_1409AD0F8;
    }
    v77 = v47;
LABEL_148:
    *(_DWORD *)((char *)&v91 + 9) = 0;
    *(_WORD *)((char *)&v91 + 13) = 0;
    HIBYTE(v91) = 0;
    v89 = 0uLL;
    v90 = 0uLL;
    *(_QWORD *)&v91 = 10800LL;
    BYTE8(v91) = 1;
    v54 = ExpLicUpdateChecksum((__int64)v83, (unsigned int)::NumOfElements, &v89);
    if ( !v54 )
    {
      if ( (_DWORD)v53 )
      {
        v55 = 16LL * (unsigned int)v53;
        v54 = v55 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v55 <= 0xFFFFFFFF )
          v54 = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v53, &v89);
      }
    }
    if ( v54 )
    {
      *(_QWORD *)&v89 = 0LL;
      DWORD2(v89) = 4;
    }
    v112[0] = v89;
    v112[1] = v90;
    v112[2] = v91;
    ExpSetKernelDataProtection(v112, 7LL, 1LL);
    v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    v125 = v56;
    if ( (v56 & 2) != 0 && (v56 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
    KeLeaveCriticalRegion();
    if ( v77 )
      ((void (*)(void))sub_1406AD10C)();
    v73 = 0x40000000;
    goto LABEL_126;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v73 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v73 < 0 )
    goto LABEL_126;
  v12 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v13 = Object;
  v85 = Object;
  v73 = v12;
  ZwClose(SectionHandle);
  if ( v12 < 0 )
    goto LABEL_126;
  ViewSize = 0LL;
  v73 = MmMapViewInSystemSpace(v13, &MappedBase, &ViewSize);
  if ( v73 < 0 )
    goto LABEL_126;
  v14 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v14[4] = a2[4];
  memmove(v14 + 5, a2 + 5, a2[1]);
  memmove((char *)v14 + a2[1] + 20, Src, a2[2]);
  v16 = (unsigned int *)((char *)v14 + v14[1] + 20);
  if ( v14[2] != 4 || !v16 || *v16 != 69 )
  {
    v73 = -1073741761;
    goto LABEL_126;
  }
  LOBYTE(v15) = 1;
  v73 = sub_1406ACF88(v14, v15, 0LL, 0LL, NumOfElements);
  if ( v73 != -1073741789 )
    goto LABEL_49;
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
  v73 = NumOfElements[0] > 0x923u ? 0xC000000D : 0;
  v120 = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL);
  if ( v120 != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
  KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
  KeLeaveCriticalRegion();
  if ( v73 < 0 )
  {
LABEL_126:
    v4 = *(void **)&NumOfElements[1];
LABEL_127:
    v42 = -1073741811;
    goto LABEL_100;
  }
  v18 = NumOfElements[0];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * NumOfElements[0], 0x20534C53u);
  v20 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v73 = -1073741801;
    v4 = 0LL;
    goto LABEL_127;
  }
  v73 = sub_1406ACF88(MappedBase, 0LL, PoolWithTag, NumOfElements[0], 0LL);
  if ( v73 >= 0 )
    qsort(v20, v18, 0x10uLL, ExpLicensingDescriptorCompare);
LABEL_49:
  if ( v73 >= 0 )
  {
    v74 = 0;
    v121 = KeGetCurrentThread();
    --v121->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    if ( !v131 )
    {
      v21 = 0;
      v80 = 0;
      v22 = 0;
      v79 = 0;
      while ( v21 < NumOfElements[0] && v22 < (unsigned int)::NumOfElements )
      {
        v23 = 2LL * v22;
        v24 = (char *)P + 16 * v21;
        v25 = ExpLicensingDescriptorCompare(v24, &qword_1409AFF80[2 * v22]);
        v107 = v25;
        v26 = v24[1];
        v111 = v26;
        v27 = qword_1409AFF80[v23 + 1];
        v122 = v27;
        if ( v25 < 0 )
        {
          if ( (*(_DWORD *)(v26 + 8) & 2) != 0 )
            goto LABEL_61;
          v80 = ++v21;
          v22 = v79;
        }
        else
        {
          if ( v25 <= 0 )
          {
            if ( (*(_DWORD *)(v26 + 8) & 2) != 0 )
            {
              v28 = *(_WORD *)(v27 + 6);
              if ( *(_WORD *)(v26 + 6) != v28
                || memcmp(
                     (const void *)(*(unsigned __int16 *)(v26 + 2) + 16LL + v26),
                     (const void *)(*(unsigned __int16 *)(v27 + 2) + 16LL + v27),
                     v28) )
              {
LABEL_61:
                v74 = 1;
                goto LABEL_67;
              }
            }
            v80 = ++v21;
          }
          v22 = ++v79;
        }
      }
      while ( v21 < NumOfElements[0] )
      {
        v111 = *((_QWORD *)P + 2 * v21 + 1);
        if ( (*(_DWORD *)(v111 + 8) & 2) != 0 )
          goto LABEL_61;
        v80 = ++v21;
      }
    }
LABEL_67:
    v123 = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL);
    if ( v123 != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
    KeLeaveCriticalRegion();
    ObfReferenceObject(v85);
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    HIDWORD(v95) = 0;
    *(_DWORD *)((char *)&v97 + 9) = 0;
    *(_WORD *)((char *)&v97 + 13) = 0;
    HIBYTE(v97) = 0;
    v30 = MappedBase;
    if ( MappedBase )
    {
      v31 = NumOfElements[0];
      if ( !NumOfElements[0] || P )
      {
        *(_QWORD *)&v95 = 0LL;
        v96 = 0uLL;
        DWORD2(v95) = 0;
        *(_QWORD *)&v97 = 10800LL;
        BYTE8(v97) = 1;
        v33 = ExpLicUpdateChecksum((__int64)MappedBase + 20, (__int64)P, &v95);
        if ( !v33 )
        {
          if ( (_DWORD)v31 )
          {
            v33 = (unsigned __int64)(16 * v31) > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( (unsigned __int64)(16 * v31) <= 0xFFFFFFFF )
              v33 = ExpLicUpdateChecksum(v32, v32, &v95);
          }
        }
        v34 = 0;
        if ( v33 )
        {
          *(_QWORD *)&v95 = 0LL;
          DWORD2(v95) = 4;
        }
        v112[0] = v95;
        v112[1] = v96;
        v112[2] = v97;
LABEL_79:
        LODWORD(v83) = v34;
        v73 = v34;
        if ( v34 < 0 )
        {
          v36 = 0;
        }
        else
        {
          ExpSetKernelDataProtection(v112, 7LL, 1LL);
          *(_QWORD *)&NumOfElements[1] = qword_1409AEB28;
          v88 = Data;
          qword_1409AEB28 = (__int64)v85;
          Data = v30;
          MappedBase = 0LL;
          off_1409AD038 = 0LL;
          v132 = byte_1409AE5C0;
          byte_1409AE5C0 = 0;
          memset(qword_1409AFF80, 0, 16LL * (unsigned int)::NumOfElements);
          LODWORD(::NumOfElements) = 0;
          if ( P )
          {
            memmove(qword_1409AFF80, P, 16LL * (unsigned int)v31);
            LODWORD(::NumOfElements) = v31;
          }
          byte_1409AE5C3 = 1;
          memset(v115, 0, sizeof(v115));
          if ( v30 )
          {
            v35 = ExpGetKernelDataProtection(v115);
            v36 = 0;
            if ( v35 < 0 )
            {
              if ( v35 == -1073741275 )
              {
                HIDWORD(v98) = 0;
                *(_DWORD *)((char *)&v100 + 9) = 0;
                *(_WORD *)((char *)&v100 + 13) = 0;
                HIBYTE(v100) = 0;
                if ( Data )
                {
                  *(_QWORD *)&v98 = 0LL;
                  v99 = 0uLL;
                  DWORD2(v98) = 4;
                  *(_QWORD *)&v100 = 0LL;
                  BYTE8(v100) = 1;
                  v58 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v98);
                  if ( !v58 )
                  {
                    if ( (_DWORD)v57 )
                    {
                      v59 = 16LL * (unsigned int)v57;
                      v58 = v59 > 0xFFFFFFFF ? 0xC0000095 : 0;
                      if ( v59 <= 0xFFFFFFFF )
                        v58 = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v57, &v98);
                    }
                  }
                  if ( v58 )
                  {
                    *(_QWORD *)&v98 = 0LL;
                    DWORD2(v98) = 4;
                  }
                  v115[0] = v98;
                  v115[1] = v99;
                  v115[2] = v100;
                  v60 = 0;
                }
                else
                {
                  v60 = -1073741811;
                }
                if ( v60 >= 0 )
                {
                  DWORD2(v115[0]) = 4;
                  ExpSetKernelDataProtection(v115, 0xFFFFFFFFLL, 0LL);
                }
              }
              v37 = 4;
              v84 = 4;
            }
            else
            {
              v37 = DWORD2(v115[0]);
              v84 = DWORD2(v115[0]);
            }
          }
          else
          {
            v37 = dword_1409AD0F8;
            v84 = dword_1409AD0F8;
            v36 = 0;
          }
          if ( (*((_DWORD *)Data + 3) & 1) != 0 )
          {
            memset(v127, 0, sizeof(v127));
            dword_1409AD0F8 = 2;
            v127[2] = 2;
            ExpSetKernelDataProtection(v127, 2LL, 0LL);
            v76 = 1;
          }
          else
          {
            memset(v129, 0, sizeof(v129));
            dword_1409AD0F8 = 0;
            ExpSetKernelDataProtection(v129, 2LL, 0LL);
          }
          memset(v113, 0, sizeof(v113));
          if ( Data )
          {
            v38 = ExpGetKernelDataProtection(v113);
            if ( v38 < 0 )
            {
              if ( v38 == -1073741275 )
              {
                HIDWORD(v101) = 0;
                *(_DWORD *)((char *)&v103 + 9) = 0;
                *(_WORD *)((char *)&v103 + 13) = 0;
                HIBYTE(v103) = 0;
                if ( Data )
                {
                  *(_QWORD *)&v101 = 0LL;
                  v102 = 0uLL;
                  DWORD2(v101) = 4;
                  *(_QWORD *)&v103 = 0LL;
                  BYTE8(v103) = 1;
                  v62 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v101);
                  if ( !v62 )
                  {
                    if ( (_DWORD)v61 )
                    {
                      v63 = 16LL * (unsigned int)v61;
                      v62 = v63 > 0xFFFFFFFF ? 0xC0000095 : 0;
                      if ( v63 <= 0xFFFFFFFF )
                        v62 = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v61, &v101);
                    }
                  }
                  if ( v62 )
                  {
                    *(_QWORD *)&v101 = 0LL;
                    DWORD2(v101) = 4;
                  }
                  v113[0] = v101;
                  v113[1] = v102;
                  v113[2] = v103;
                  v64 = 0;
                }
                else
                {
                  v64 = -1073741811;
                }
                if ( v64 >= 0 )
                {
                  DWORD2(v113[0]) = 4;
                  ExpSetKernelDataProtection(v113, 0xFFFFFFFFLL, 0LL);
                }
              }
              v39 = 4;
            }
            else
            {
              v39 = DWORD2(v113[0]);
            }
          }
          else
          {
            v39 = dword_1409AD0F8;
          }
          if ( v37 != v39 && (!v37 || !v39) )
            v36 = 1;
        }
        v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
        v124 = v40;
        if ( (v40 & 2) != 0 && (v40 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
        KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
        KeLeaveCriticalRegion();
        if ( (int)v83 >= 0 )
        {
          if ( v131 || (v73 = sub_1406AD4E0(), v41 = 0LL, v73 >= 0) )
          {
            if ( v36 || !v131 )
              sub_1406AD10C(v41);
            v73 = 0;
            v42 = -1073741811;
            v4 = *(void **)&NumOfElements[1];
            if ( v74 == 1 )
              v73 = 263;
            goto LABEL_100;
          }
        }
        goto LABEL_126;
      }
    }
    else
    {
      LODWORD(v31) = NumOfElements[0];
    }
    v34 = -1073741811;
    goto LABEL_79;
  }
  v42 = -1073741811;
  if ( v73 == -1073741762 )
    v73 = -1073741811;
  v4 = *(void **)&NumOfElements[1];
LABEL_100:
  if ( v132 && !byte_1409AE5C0 )
    sub_14090C6A4(&KernelLicensingCacheCorruptionFixed);
  if ( v76 )
  {
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    memset(v130, 0, 0x30uLL);
    ExpSetKernelDataProtection(v130, 32LL, 0LL);
    v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    v126 = v44;
    if ( (v44 & 2) != 0 && (v44 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
    KeLeaveCriticalRegion();
  }
  if ( v85 )
    ObfDereferenceObject(v85);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v88 )
    MmUnmapViewInSystemSpace(v88);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v73 == -1073741811 || (unsigned int)(v73 + 1073741761) <= 1 )
  {
    v65 = KeGetCurrentThread();
    --v65->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    memset(v116, 0, sizeof(v116));
    if ( Data )
    {
      v67 = ExpGetKernelDataProtection(v116);
      if ( v67 < 0 )
      {
        if ( v67 == -1073741275 )
        {
          HIDWORD(v104) = 0;
          *(_DWORD *)((char *)&v106 + 9) = 0;
          *(_WORD *)((char *)&v106 + 13) = 0;
          HIBYTE(v106) = 0;
          if ( Data )
          {
            *(_QWORD *)&v104 = 0LL;
            v105 = 0uLL;
            DWORD2(v104) = 4;
            *(_QWORD *)&v106 = 0LL;
            BYTE8(v106) = 1;
            v69 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v104);
            if ( !v69 )
            {
              if ( (_DWORD)v68 )
              {
                v70 = 16LL * (unsigned int)v68;
                v69 = v70 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v70 <= 0xFFFFFFFF )
                  v69 = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v68, &v104);
              }
            }
            if ( v69 )
            {
              *(_QWORD *)&v104 = 0LL;
              DWORD2(v104) = 4;
            }
            v116[0] = v104;
            v116[1] = v105;
            v116[2] = v106;
            v42 = 0;
          }
          if ( v42 >= 0 )
          {
            DWORD2(v116[0]) = 4;
            ExpSetKernelDataProtection(v116, 0xFFFFFFFFLL, 0LL);
          }
        }
        v66 = 4;
      }
      else
      {
        v66 = DWORD2(v116[0]);
      }
    }
    else
    {
      v66 = dword_1409AD0F8;
    }
    if ( v66 )
    {
      v9 = 0;
    }
    else
    {
      memset(v128, 0, sizeof(v128));
      dword_1409AD0F8 = 5;
      v128[2] = 5;
      ExpSetKernelDataProtection(v128, 2LL, 0LL);
    }
    v71 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v71 & 2) != 0 && (v71 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
    KeLeaveCriticalRegion();
    if ( v9 )
      sub_1406AD10C(v72);
  }
  return (unsigned int)v73;
}
