/*
 * XREFs of MmCopyVirtualMemory @ 0x14064CFB0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x14012BF30 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x1402ADD54 (KiTpWriteUmMemory.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x14064CDB0 (MiReadWriteVirtualMemory.c)
 *     AlpcpCopyRequestData @ 0x140885DF0 (AlpcpCopyRequestData.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071808 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetExceptionInfo @ 0x1402C3364 (MiGetExceptionInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VslDebugReadWriteSecureProcess @ 0x140851FEC (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x140893E0C (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        __int64 BugCheckParameter1,
        char *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        KPROCESSOR_MODE a6,
        unsigned __int64 *a7)
{
  __int64 v8; // r15
  char *v9; // rsi
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned int v13; // ebx
  int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  struct _KTHREAD *v17; // rsi
  _KPROCESS *Process; // rdi
  unsigned __int64 v19; // r14
  int v20; // r15d
  __int64 v21; // rcx
  unsigned __int64 v22; // r12
  struct _KTHREAD *v23; // r15
  _KPROCESS *v24; // rsi
  unsigned __int64 v25; // r14
  int v26; // ebx
  unsigned __int64 v27; // rdi
  __int64 v28; // r14
  unsigned __int64 v29; // r14
  int v30; // r15d
  SIZE_T v31; // r12
  void *v32; // r10
  $3B2F3BCC17ED4CEE0C65CF31B442AA49 *v33; // rdi
  unsigned __int8 v34; // si
  int v35; // eax
  int v36; // eax
  PVOID v37; // rsi
  int v38; // eax
  const void *v39; // rdx
  char *v40; // rsi
  int v41; // eax
  bool v43; // cc
  unsigned __int64 j; // rdx
  char v45; // r8
  char v46; // r10
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  _QWORD **v50; // rax
  _QWORD *i; // rcx
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rcx
  _QWORD **v54; // rax
  _QWORD *k; // rcx
  unsigned __int64 n; // rdx
  char v57; // r8
  char v58; // r10
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  _QWORD **v62; // rax
  _QWORD *m; // rcx
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // rcx
  _QWORD **v66; // rax
  _QWORD *ii; // rcx
  BOOL v68; // [rsp+30h] [rbp-468h]
  int v69; // [rsp+30h] [rbp-468h]
  unsigned int v70; // [rsp+30h] [rbp-468h]
  int v71; // [rsp+38h] [rbp-460h]
  size_t Size; // [rsp+40h] [rbp-458h]
  _BYTE *P; // [rsp+48h] [rbp-450h]
  SIZE_T v77; // [rsp+80h] [rbp-418h] BYREF
  unsigned __int64 v78; // [rsp+88h] [rbp-410h]
  unsigned __int64 *v79; // [rsp+90h] [rbp-408h]
  unsigned __int64 v80; // [rsp+98h] [rbp-400h]
  void *Src; // [rsp+A0h] [rbp-3F8h]
  void *v82; // [rsp+A8h] [rbp-3F0h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-3E8h]
  size_t v84; // [rsp+B8h] [rbp-3E0h]
  void *v85; // [rsp+C0h] [rbp-3D8h]
  SIZE_T v86; // [rsp+C8h] [rbp-3D0h]
  char *v87; // [rsp+D0h] [rbp-3C8h]
  __int64 v88; // [rsp+D8h] [rbp-3C0h]
  __int64 v89; // [rsp+E0h] [rbp-3B8h]
  __int64 v90; // [rsp+E8h] [rbp-3B0h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-3A8h]
  $3B2F3BCC17ED4CEE0C65CF31B442AA49 *v92; // [rsp+F8h] [rbp-3A0h]
  PMDL p_MemoryDescriptorList; // [rsp+100h] [rbp-398h]
  _BYTE v94[48]; // [rsp+110h] [rbp-388h] BYREF
  _BYTE v95[48]; // [rsp+140h] [rbp-358h] BYREF
  _BYTE v96[48]; // [rsp+170h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+1A0h] [rbp-2F8h] BYREF
  _BYTE v98[512]; // [rsp+250h] [rbp-248h] BYREF

  v78 = (unsigned __int64)a4;
  v8 = a3;
  v9 = a2;
  v10 = BugCheckParameter1;
  v89 = BugCheckParameter1;
  v87 = a2;
  v88 = a3;
  v85 = a4;
  v11 = a5;
  v79 = a7;
  memset(v96, 0, sizeof(v96));
  memset(&MemoryDescriptorList, 0, 0xA8uLL);
  if ( !a5 )
    return 0LL;
  *v79 = 0LL;
  v83 = 0LL;
  v68 = *(_QWORD *)(v10 + 920) == 0LL;
  Src = v9;
  v82 = a4;
  v12 = a5;
  Size = a5;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v71 = 0;
  P = 0LL;
  v90 = 0LL;
  v13 = v68;
  while ( 2 )
  {
    v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(2 * v13)) & 2;
    v69 = v14;
    if ( (*(_BYTE *)(v10 + 728) & 1) != 0 )
    {
      v14 |= 0x40u;
      v69 = v14;
    }
    if ( (*(_BYTE *)(v8 + 728) & 1) != 0 )
      v69 = v14 | 0x80;
    v15 = v11 - v12;
    v16 = (unsigned __int64)&v9[v11 - v12];
    memset(v94, 0, sizeof(v94));
    v17 = KeGetCurrentThread();
    Process = v17->ApcState.Process;
    if ( Process != (_KPROCESS *)v10 )
      KiStackAttachProcess((_KPROCESS *)v10, 0, (__int64)v94);
    v19 = 0LL;
    v20 = 0;
    v21 = BugCheckParameter1;
    if ( !*(_DWORD *)(*(_QWORD *)(BugCheckParameter1 + 1296) + 296LL) )
    {
      v80 = Size;
      goto LABEL_11;
    }
    LOCK_ADDRESS_SPACE((__int64)v17, BugCheckParameter1);
    j = *(_QWORD *)(BugCheckParameter1 + 1624);
    v45 = 0;
    v46 = 0;
    if ( !j )
      goto LABEL_106;
    v47 = v16 >> 12;
    while ( v47 > (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) )
    {
      v48 = *(_QWORD *)(j + 8);
      if ( !v48 )
      {
        v45 = 1;
        goto LABEL_106;
      }
LABEL_114:
      j = v48;
    }
    if ( v47 < (*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) )
    {
      v48 = *(_QWORD *)j;
      if ( !*(_QWORD *)j )
      {
        v45 = 0;
        goto LABEL_106;
      }
      goto LABEL_114;
    }
    v46 = 1;
LABEL_106:
    if ( v46 )
    {
      if ( (*(_DWORD *)(j + 48) & 0x3100000) != 0x2100000 )
        goto LABEL_122;
      v19 = j;
      if ( (*(_DWORD *)(j + 64) & 4) != 0 )
        goto LABEL_122;
    }
    else
    {
      if ( v45 )
      {
        v49 = j;
        v50 = *(_QWORD ***)(j + 8);
        if ( v50 )
        {
          j = *(_QWORD *)(j + 8);
          for ( i = *v50; i; i = (_QWORD *)*i )
            j = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v49 )
              break;
            v49 = j;
          }
        }
      }
LABEL_122:
      if ( v19 )
      {
        v80 = (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF)
            - v16
            + 1;
        v20 = 2 - ((*(_BYTE *)(v19 + 64) & 1) != 0);
        goto LABEL_139;
      }
    }
    if ( !j )
      goto LABEL_138;
    do
    {
      v52 = j;
      if ( (*(_DWORD *)(j + 48) & 0x3100000) == 0x2100000 && (*(_DWORD *)(j + 64) & 4) != 0 )
        break;
      if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) >= (v16 + Size - 1) >> 12 )
        goto LABEL_138;
      v53 = j;
      v54 = *(_QWORD ***)(j + 8);
      if ( v54 )
      {
        j = *(_QWORD *)(j + 8);
        for ( k = *v54; k; k = (_QWORD *)*k )
          j = (unsigned __int64)k;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v53 )
            break;
          v53 = j;
        }
      }
    }
    while ( j );
    if ( j )
      v80 = ((*(unsigned int *)(v52 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v52 + 32) << 32)) << 12) - v16;
    else
LABEL_138:
      v80 = Size;
LABEL_139:
    UNLOCK_ADDRESS_SPACE((__int64)v17, BugCheckParameter1);
    v21 = BugCheckParameter1;
LABEL_11:
    if ( Process != (_KPROCESS *)v21 )
      KiUnstackDetachProcess((struct _KTHREAD *)v94, 0);
    v70 = v69 & 0xFFFFFFF3 | (4 * v20);
    v22 = v15 + v78;
    memset(v95, 0, sizeof(v95));
    v23 = KeGetCurrentThread();
    v24 = v23->ApcState.Process;
    if ( v24 != (_KPROCESS *)a3 )
      KiStackAttachProcess((_KPROCESS *)a3, 0, (__int64)v95);
    v25 = 0LL;
    v26 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(a3 + 1296) + 296LL) )
    {
      v12 = Size;
      v27 = Size;
      v84 = Size;
      v28 = a3;
      goto LABEL_17;
    }
    LOCK_ADDRESS_SPACE((__int64)v23, a3);
    n = *(_QWORD *)(a3 + 1624);
    v57 = 0;
    v58 = 0;
    if ( !n )
      goto LABEL_146;
    v59 = v22 >> 12;
    while ( 2 )
    {
      if ( v59 > (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) )
      {
        v60 = *(_QWORD *)(n + 8);
        if ( !v60 )
        {
          v57 = 1;
          goto LABEL_146;
        }
        goto LABEL_154;
      }
      if ( v59 < (*(unsigned int *)(n + 24) | ((unsigned __int64)*(unsigned __int8 *)(n + 32) << 32)) )
      {
        v60 = *(_QWORD *)n;
        if ( !*(_QWORD *)n )
        {
          v57 = 0;
          goto LABEL_146;
        }
LABEL_154:
        n = v60;
        continue;
      }
      break;
    }
    v58 = 1;
LABEL_146:
    if ( v58 )
    {
      if ( (*(_DWORD *)(n + 48) & 0x3100000) != 0x2100000 )
        goto LABEL_162;
      v25 = n;
      if ( (*(_DWORD *)(n + 64) & 4) != 0 )
        goto LABEL_162;
    }
    else
    {
      if ( v57 )
      {
        v61 = n;
        v62 = *(_QWORD ***)(n + 8);
        if ( v62 )
        {
          n = *(_QWORD *)(n + 8);
          for ( m = *v62; m; m = (_QWORD *)*m )
            n = (unsigned __int64)m;
        }
        else
        {
          for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)n == v61 )
              break;
            v61 = n;
          }
        }
      }
LABEL_162:
      if ( v25 )
      {
        v27 = (((*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12) | 0xFFF)
            - v22
            + 1;
        v26 = 2 - ((*(_BYTE *)(v25 + 64) & 1) != 0);
        goto LABEL_164;
      }
    }
    if ( !n )
      goto LABEL_180;
    do
    {
      v64 = n;
      if ( (*(_DWORD *)(n + 48) & 0x3100000) == 0x2100000 && (*(_DWORD *)(n + 64) & 4) != 0 )
        break;
      if ( (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) >= (v22 + Size - 1) >> 12 )
        goto LABEL_180;
      v65 = n;
      v66 = *(_QWORD ***)(n + 8);
      if ( v66 )
      {
        n = *(_QWORD *)(n + 8);
        for ( ii = *v66; ii; ii = (_QWORD *)*ii )
          n = (unsigned __int64)ii;
      }
      else
      {
        for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)n == v65 )
            break;
          v65 = n;
        }
      }
    }
    while ( n );
    if ( n )
    {
      v27 = ((*(unsigned int *)(v64 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v64 + 32) << 32)) << 12) - v22;
LABEL_164:
      v84 = v27;
    }
    else
    {
LABEL_180:
      v27 = Size;
      v84 = Size;
    }
    v28 = a3;
    UNLOCK_ADDRESS_SPACE((__int64)v23, a3);
    v12 = Size;
LABEL_17:
    if ( v24 != (_KPROCESS *)v28 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v95, 0);
      v12 = Size;
    }
    v13 = v70 & 0xFFFFFFCF | (16 * v26);
    if ( (v13 & 0xC) != 0 || (v13 & 0x40) != 0 || (v13 & 0x80u) != 0 )
      v13 &= ~2u;
    v29 = v12;
    if ( v80 < v12 )
      v29 = v80;
    if ( v27 < v29 )
      v29 = v27;
    v30 = v71;
LABEL_27:
    v9 = a2;
    if ( v29 >= 0x200 && (v13 & 2) != 0 )
    {
      v31 = 57344LL;
      v43 = a5 <= 0xE000;
      goto LABEL_84;
    }
    v13 &= ~2u;
    if ( v83 )
    {
      v31 = v29;
      if ( v29 > v83 )
        v31 = v83;
    }
    else
    {
      if ( v29 <= 0x200 )
      {
        P = v98;
        goto LABEL_31;
      }
      v31 = 0x10000LL;
      if ( v12 <= 0x10000 )
        v31 = v12;
      do
      {
        P = ExAllocatePoolWithTag(PagedPool, v31, 0x77526D4Du);
        if ( P )
        {
          v83 = v31;
          goto LABEL_97;
        }
        v31 >>= 1;
      }
      while ( v31 > 0x200 );
      P = v98;
      v31 = 512LL;
LABEL_97:
      v12 = Size;
      v43 = v29 <= v31;
LABEL_84:
      if ( v43 )
LABEL_31:
        v31 = v29;
    }
    v86 = v31;
LABEL_33:
    if ( !v29 )
    {
      v10 = BugCheckParameter1;
      v8 = a3;
      if ( v12 )
      {
        v11 = a5;
        continue;
      }
      if ( v83 )
        ExFreePoolWithTag(P, 0);
      *v79 = a5;
      return 0LL;
    }
    break;
  }
  if ( v29 < v31 )
  {
    v31 = v29;
    v86 = v29;
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v96);
  v32 = Src;
  if ( Src == v9 && a6 && ((unsigned __int64)&v9[a5] > 0x7FFFFFFF0000LL || &v9[a5] < v9) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((v13 >> 1) & 1) != 0 )
  {
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * (((v31 + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
    MemoryDescriptorList.MdlFlags = 0;
    MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
    MemoryDescriptorList.ByteCount = v31;
  }
  v33 = &CurrentThread->116;
  v92 = &CurrentThread->116;
  v34 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  if ( ((v13 >> 1) & 1) != 0 )
  {
    MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
  }
  else
  {
    if ( (v13 & 0x40) != 0 || (v35 = (v13 >> 2) & 3, v35 == 2) )
    {
      v36 = VslDebugReadWriteSecureProcess(BugCheckParameter1, (_DWORD)v32, (_DWORD)P, v31, 1, (__int64)&v77);
    }
    else
    {
      if ( v35 != 1 )
      {
        memmove(P, v32, v31);
        goto LABEL_52;
      }
      v36 = MiDbgReadWriteEnclave((_DWORD)v32, (_DWORD)P, v31, 1, (__int64)&v77);
    }
    v71 = v36;
    v30 = v36;
  }
LABEL_52:
  if ( !v34 )
    v33->MiscFlags &= ~0x20u;
  if ( v30 >= 0 )
  {
    if ( ((v13 >> 1) & 1) == 0 )
    {
      v37 = P;
LABEL_57:
      KiUnstackDetachProcess((struct _KTHREAD *)v96, 0);
      KiStackAttachProcess((_KPROCESS *)a3, 0, (__int64)v96);
      if ( a6 && Src == a2 && (v78 + a5 > 0x7FFFFFFF0000LL || v78 + a5 < v78) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (v13 & 0x80u) != 0 || (v38 = (v13 >> 4) & 3, v38 == 2) )
      {
        v40 = (char *)v82;
        v41 = VslDebugReadWriteSecureProcess(a3, (_DWORD)v82, (_DWORD)P, v31, 0, (__int64)&v77);
      }
      else
      {
        if ( v38 != 1 )
        {
          v39 = v37;
          v40 = (char *)v82;
          memmove(v82, v39, v31);
          v30 = 0;
          v71 = 0;
          v77 = v31;
LABEL_66:
          if ( v30 == -1073741819 )
          {
            *v79 = (unsigned __int64)&v40[v77 - v78];
            v30 = -2147483635;
            goto LABEL_90;
          }
          if ( v30 < 0 )
            goto LABEL_90;
          KiUnstackDetachProcess((struct _KTHREAD *)v96, 0);
          if ( ((v13 >> 1) & 1) != 0 )
            MmUnlockPages(&MemoryDescriptorList);
          v29 -= v31;
          v12 = Size - v31;
          Size -= v31;
          Src = (char *)Src + v31;
          v82 = &v40[v31];
          v9 = a2;
          goto LABEL_33;
        }
        v40 = (char *)v82;
        v41 = MiDbgReadWriteEnclave((_DWORD)v82, (_DWORD)P, v31, 0, (__int64)&v77);
      }
      v71 = v41;
      v30 = v41;
      goto LABEL_66;
    }
    v37 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
    if ( v37 )
      goto LABEL_57;
    MmUnlockPages(&MemoryDescriptorList);
LABEL_98:
    v13 &= ~2u;
    KiUnstackDetachProcess((struct _KTHREAD *)v96, 0);
    v12 = Size;
    goto LABEL_27;
  }
  if ( (v13 & 2) != 0 )
    goto LABEL_98;
  *v79 = a5 - v29;
  v30 = -2147483635;
LABEL_90:
  KiUnstackDetachProcess((struct _KTHREAD *)v96, 0);
  if ( v83 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v30;
}
