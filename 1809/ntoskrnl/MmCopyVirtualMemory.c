/*
 * XREFs of MmCopyVirtualMemory @ 0x1406457B0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x14012A330 (PsQueryProcessCommandLine.c)
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     MiReadWriteVirtualMemory @ 0x140677BD0 (MiReadWriteVirtualMemory.c)
 *     AlpcpCopyRequestData @ 0x14084BB10 (AlpcpCopyRequestData.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiGetExceptionInfo @ 0x1402AA944 (MiGetExceptionInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VslDebugReadWriteSecureProcess @ 0x140819564 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x14085B11C (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        _KPROCESS *BugCheckParameter1,
        char *a2,
        _KPROCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        KPROCESSOR_MODE a6,
        unsigned __int64 *a7)
{
  char *v7; // r11
  __int64 v8; // r10
  char *v9; // r12
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned __int64 v13; // r8
  int v14; // ebx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r13
  struct _KTHREAD *v17; // r14
  _KPROCESS *Process; // rdi
  unsigned __int64 v19; // r15
  int v20; // r12d
  unsigned int v21; // edi
  unsigned __int64 v22; // r13
  struct _KTHREAD *v23; // r14
  _KPROCESS *v24; // rsi
  unsigned __int64 v25; // r15
  int v26; // ebx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r14
  int v29; // r13d
  SIZE_T v30; // rsi
  char v31; // di
  size_t v32; // rax
  size_t v33; // rsi
  void *v34; // r10
  int v35; // r12d
  $75AA083C4A1F5100F19ADCB182604D40 *v36; // rdi
  unsigned __int8 v37; // si
  int v38; // eax
  PVOID v39; // rdi
  const void *v40; // rdx
  char *v41; // rdi
  int v42; // eax
  bool v44; // cc
  unsigned __int64 j; // rdx
  char v46; // r8
  char v47; // r10
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  _QWORD **v51; // rax
  _QWORD *i; // rcx
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rcx
  _QWORD **v55; // rax
  _QWORD *k; // rcx
  __int64 v57; // rcx
  unsigned __int64 n; // rdx
  char v59; // r8
  char v60; // r10
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  _QWORD **v64; // rax
  _QWORD *m; // rcx
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rcx
  _QWORD **v68; // rax
  _QWORD *ii; // rcx
  int v70; // [rsp+34h] [rbp-484h]
  unsigned __int64 v72; // [rsp+50h] [rbp-468h]
  _BYTE *P; // [rsp+58h] [rbp-460h]
  size_t Size; // [rsp+88h] [rbp-430h]
  size_t v78; // [rsp+A8h] [rbp-410h] BYREF
  unsigned __int64 v79; // [rsp+B0h] [rbp-408h]
  void *Src; // [rsp+B8h] [rbp-400h]
  void *v81; // [rsp+C0h] [rbp-3F8h]
  unsigned __int64 v82; // [rsp+C8h] [rbp-3F0h]
  int v83; // [rsp+D0h] [rbp-3E8h]
  unsigned __int64 v84; // [rsp+D8h] [rbp-3E0h]
  char *v85; // [rsp+E0h] [rbp-3D8h]
  char *v86; // [rsp+E8h] [rbp-3D0h]
  _KPROCESS *v87; // [rsp+F0h] [rbp-3C8h]
  _KPROCESS *v88; // [rsp+F8h] [rbp-3C0h]
  __int64 v89; // [rsp+100h] [rbp-3B8h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-3B0h]
  size_t v91; // [rsp+110h] [rbp-3A8h]
  $75AA083C4A1F5100F19ADCB182604D40 *v92; // [rsp+118h] [rbp-3A0h]
  PMDL p_MemoryDescriptorList; // [rsp+120h] [rbp-398h]
  _BYTE v94[32]; // [rsp+130h] [rbp-388h] BYREF
  __int64 v95; // [rsp+150h] [rbp-368h]
  _BYTE v96[32]; // [rsp+160h] [rbp-358h] BYREF
  __int64 v97; // [rsp+180h] [rbp-338h]
  _BYTE v98[48]; // [rsp+190h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+1C0h] [rbp-2F8h] BYREF
  _BYTE v100[512]; // [rsp+270h] [rbp-248h] BYREF

  v7 = (char *)a4;
  v8 = (__int64)a3;
  v9 = a2;
  v10 = (__int64)BugCheckParameter1;
  v88 = BugCheckParameter1;
  v86 = a2;
  v87 = a3;
  v85 = v7;
  v11 = a5;
  if ( !a5 )
    return 0LL;
  *a7 = 0LL;
  v82 = 0LL;
  v12 = BugCheckParameter1[1].Affinity.Bitmap[12] == 0;
  Src = v9;
  v81 = v7;
  v13 = a5;
  v72 = a5;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v70 = 0;
  P = 0LL;
  v89 = 0LL;
  while ( 2 )
  {
    v14 = ((unsigned __int8)v12 ^ (unsigned __int8)(2 * v12)) & 2 ^ v12;
    if ( (*(_BYTE *)(v10 + 720) & 1) != 0 )
      v14 |= 0x40u;
    if ( (*(_BYTE *)(v8 + 720) & 1) != 0 )
      v14 |= 0x80u;
    v15 = v11 - v13;
    v16 = (unsigned __int64)&v9[v11 - v13];
    v17 = KeGetCurrentThread();
    Process = v17->ApcState.Process;
    if ( Process == (_KPROCESS *)v10 )
    {
      v95 = 0LL;
    }
    else
    {
      KiStackAttachProcess((_KPROCESS *)v10, 0LL, (__int64)v94);
      v10 = (__int64)BugCheckParameter1;
      v13 = v72;
      v8 = (__int64)a3;
      v7 = (char *)a4;
    }
    v19 = 0LL;
    v20 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(v10 + 1296) + 232LL) )
    {
      v79 = v13;
      goto LABEL_11;
    }
    LOCK_ADDRESS_SPACE((__int64)v17, v10);
    j = BugCheckParameter1[2].Affinity.Bitmap[4];
    v46 = 0;
    v47 = 0;
    if ( !j )
      goto LABEL_107;
    v48 = v16 >> 12;
    while ( v48 > (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) )
    {
      v49 = *(_QWORD *)(j + 8);
      if ( !v49 )
      {
        v46 = 1;
        goto LABEL_107;
      }
LABEL_115:
      j = v49;
    }
    if ( v48 < (*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) )
    {
      v49 = *(_QWORD *)j;
      if ( !*(_QWORD *)j )
      {
        v46 = 0;
        goto LABEL_107;
      }
      goto LABEL_115;
    }
    v47 = 1;
LABEL_107:
    if ( v47 )
    {
      if ( (*(_DWORD *)(j + 48) & 0x20000) == 0 )
        goto LABEL_123;
      v19 = j;
      if ( (*(_DWORD *)(j + 64) & 4) != 0 )
        goto LABEL_123;
    }
    else
    {
      if ( v46 )
      {
        v50 = j;
        v51 = *(_QWORD ***)(j + 8);
        if ( v51 )
        {
          j = *(_QWORD *)(j + 8);
          for ( i = *v51; i; i = (_QWORD *)*i )
            j = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v50 )
              break;
            v50 = j;
          }
        }
      }
LABEL_123:
      if ( v19 )
      {
        v79 = (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF)
            - v16
            + 1;
        v20 = 2 - ((*(_BYTE *)(v19 + 64) & 1) != 0);
        goto LABEL_140;
      }
    }
    if ( !j )
      goto LABEL_139;
    do
    {
      v53 = j;
      if ( (*(_DWORD *)(j + 48) & 0x20000) != 0 && (*(_DWORD *)(j + 64) & 4) != 0 )
        break;
      if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) >= (v16 + v72 - 1) >> 12 )
        goto LABEL_139;
      v54 = j;
      v55 = *(_QWORD ***)(j + 8);
      if ( v55 )
      {
        j = *(_QWORD *)(j + 8);
        for ( k = *v55; k; k = (_QWORD *)*k )
          j = (unsigned __int64)k;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v54 )
            break;
          v54 = j;
        }
      }
    }
    while ( j );
    if ( j )
      v79 = ((*(unsigned int *)(v53 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v53 + 32) << 32)) << 12) - v16;
    else
LABEL_139:
      v79 = v72;
LABEL_140:
    UNLOCK_ADDRESS_SPACE((__int64)v17, (__int64)BugCheckParameter1);
    v10 = (__int64)BugCheckParameter1;
    v8 = (__int64)a3;
    v7 = (char *)a4;
LABEL_11:
    if ( Process != (_KPROCESS *)v10 )
    {
      KiUnstackDetachProcess((__int64)v94, 0LL);
      v8 = (__int64)a3;
      v7 = (char *)a4;
    }
    v21 = v14 & 0xFFFFFFF3 | (4 * v20);
    v22 = (unsigned __int64)&v7[v15];
    v23 = KeGetCurrentThread();
    v24 = v23->ApcState.Process;
    if ( v24 == (_KPROCESS *)v8 )
    {
      v97 = 0LL;
    }
    else
    {
      KiStackAttachProcess((_KPROCESS *)v8, 0LL, (__int64)v96);
      v8 = (__int64)a3;
    }
    v25 = 0LL;
    v26 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(v8 + 1296) + 232LL) )
    {
      v27 = v72;
      v84 = v72;
      goto LABEL_17;
    }
    LOCK_ADDRESS_SPACE((__int64)v23, v8);
    v57 = (__int64)a3;
    n = a3[2].Affinity.Bitmap[4];
    v59 = 0;
    v60 = 0;
    if ( !n )
      goto LABEL_148;
    v61 = v22 >> 12;
    while ( 2 )
    {
      if ( v61 > (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) )
      {
        v62 = *(_QWORD *)(n + 8);
        if ( !v62 )
        {
          v59 = 1;
          goto LABEL_147;
        }
        goto LABEL_156;
      }
      if ( v61 < (*(unsigned int *)(n + 24) | ((unsigned __int64)*(unsigned __int8 *)(n + 32) << 32)) )
      {
        v62 = *(_QWORD *)n;
        if ( !*(_QWORD *)n )
        {
          v59 = 0;
          goto LABEL_147;
        }
LABEL_156:
        n = v62;
        continue;
      }
      break;
    }
    v60 = 1;
LABEL_147:
    v57 = (__int64)a3;
LABEL_148:
    if ( v60 )
    {
      if ( (*(_DWORD *)(n + 48) & 0x20000) == 0 )
        goto LABEL_164;
      v25 = n;
      if ( (*(_DWORD *)(n + 64) & 4) != 0 )
        goto LABEL_164;
    }
    else
    {
      if ( v59 )
      {
        v63 = n;
        v64 = *(_QWORD ***)(n + 8);
        if ( v64 )
        {
          n = *(_QWORD *)(n + 8);
          for ( m = *v64; m; m = (_QWORD *)*m )
            n = (unsigned __int64)m;
        }
        else
        {
          for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)n == v63 )
              break;
            v63 = n;
          }
        }
        v57 = (__int64)a3;
      }
LABEL_164:
      if ( v25 )
      {
        v27 = (((*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12) | 0xFFF)
            - v22
            + 1;
        v26 = 2 - ((*(_BYTE *)(v25 + 64) & 1) != 0);
        goto LABEL_166;
      }
    }
    if ( n )
    {
      do
      {
        v66 = n;
        if ( (*(_DWORD *)(n + 48) & 0x20000) != 0 && (*(_DWORD *)(n + 64) & 4) != 0 )
          break;
        if ( (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) >= (v22 + v72 - 1) >> 12 )
        {
          v57 = (__int64)a3;
          goto LABEL_183;
        }
        v67 = n;
        v68 = *(_QWORD ***)(n + 8);
        if ( v68 )
        {
          n = *(_QWORD *)(n + 8);
          for ( ii = *v68; ii; ii = (_QWORD *)*ii )
            n = (unsigned __int64)ii;
        }
        else
        {
          for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)n == v67 )
              break;
            v67 = n;
          }
        }
      }
      while ( n );
      v57 = (__int64)a3;
      if ( !n )
        goto LABEL_183;
      v27 = ((*(unsigned int *)(v66 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v66 + 32) << 32)) << 12) - v22;
LABEL_166:
      v84 = v27;
    }
    else
    {
LABEL_183:
      v27 = v72;
      v84 = v72;
    }
    UNLOCK_ADDRESS_SPACE((__int64)v23, v57);
    v8 = (__int64)a3;
LABEL_17:
    if ( v24 != (_KPROCESS *)v8 )
      KiUnstackDetachProcess((__int64)v96, 0LL);
    v12 = v21 & 0xFFFFFFCF | (16 * v26);
    if ( (v12 & 0xC0) != 0 || (v12 & 0xC) != 0 )
      v12 &= ~2u;
    v13 = v72;
    v28 = v72;
    if ( v79 < v72 )
      v28 = v79;
    if ( v27 < v28 )
      v28 = v27;
    v29 = v70;
LABEL_26:
    v9 = a2;
    if ( v28 >= 0x200 && (v12 & 2) != 0 )
    {
      v30 = 57344LL;
      v44 = a5 <= 0xE000;
      goto LABEL_85;
    }
    v12 &= ~2u;
    if ( v82 )
    {
      v30 = v28;
      if ( v28 > v82 )
        v30 = v82;
    }
    else
    {
      if ( v28 <= 0x200 )
      {
        P = v100;
        goto LABEL_30;
      }
      v30 = 0x10000LL;
      if ( v13 <= 0x10000 )
        v30 = v13;
      do
      {
        P = ExAllocatePoolWithTag(PagedPool, v30, 0x77526D4Du);
        if ( P )
        {
          v82 = v30;
          goto LABEL_98;
        }
        v30 >>= 1;
      }
      while ( v30 > 0x200 );
      P = v100;
      v30 = 512LL;
LABEL_98:
      v13 = v72;
      v44 = v28 <= v30;
LABEL_85:
      if ( v44 )
LABEL_30:
        v30 = v28;
    }
    v31 = v12;
LABEL_32:
    if ( !v28 )
    {
      v10 = (__int64)BugCheckParameter1;
      v8 = (__int64)a3;
      v7 = (char *)a4;
      if ( v13 )
      {
        v11 = a5;
        continue;
      }
      if ( v82 )
        ExFreePoolWithTag(P, 0);
      *a7 = a5;
      return 0LL;
    }
    break;
  }
  v32 = v28;
  if ( v28 >= v30 )
    v32 = v30;
  v33 = v32;
  Size = v32;
  v91 = v32;
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v98);
  v34 = Src;
  if ( a6 && Src == v9 && ((unsigned __int64)&v9[a5] > 0x7FFFFFFF0000LL || &v9[a5] < v9) )
    MEMORY[0x7FFFFFFF0000] = 0;
  v35 = v31 & 2;
  v83 = v35;
  if ( (v31 & 2) != 0 )
  {
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * (((v33 + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
    MemoryDescriptorList.MdlFlags = 0;
    MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
    MemoryDescriptorList.ByteCount = v33;
  }
  v36 = &CurrentThread->116;
  v92 = &CurrentThread->116;
  v37 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  if ( v35 )
  {
    MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
  }
  else
  {
    if ( (v12 & 0x40) != 0 || (v12 & 0xC) == 8 )
    {
      v38 = VslDebugReadWriteSecureProcess((_DWORD)BugCheckParameter1, (_DWORD)v34, (_DWORD)P, Size, 1, (__int64)&v78);
    }
    else
    {
      if ( (v12 & 0xC) != 4 )
      {
        memmove(P, v34, Size);
        goto LABEL_51;
      }
      v38 = MiDbgReadWriteEnclave((_DWORD)v34, (_DWORD)P, Size, 1, (__int64)&v78);
    }
    v70 = v38;
    v29 = v38;
  }
LABEL_51:
  if ( !v37 )
    v36->MiscFlags &= ~0x20u;
  if ( v29 >= 0 )
  {
    if ( !v35 )
    {
      v39 = P;
LABEL_56:
      KiUnstackDetachProcess((__int64)v98, 0LL);
      KiStackAttachProcess(a3, 0LL, (__int64)v98);
      if ( a6 && Src == a2 && (a4 + a5 > 0x7FFFFFFF0000LL || a4 + a5 < a4) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (v12 & 0x80u) != 0 || (v12 & 0x30) == 0x20 )
      {
        v30 = Size;
        v41 = (char *)v81;
        v42 = VslDebugReadWriteSecureProcess((_DWORD)a3, (_DWORD)v81, (_DWORD)P, Size, 0, (__int64)&v78);
      }
      else
      {
        v30 = Size;
        if ( (v12 & 0x30) != 0x10 )
        {
          v40 = v39;
          v41 = (char *)v81;
          memmove(v81, v40, Size);
          v29 = 0;
          v70 = 0;
          v78 = Size;
LABEL_65:
          if ( v29 == -1073741819 )
          {
            *a7 = (unsigned __int64)&v41[v78 - a4];
            v29 = -2147483635;
            goto LABEL_91;
          }
          if ( v29 < 0 )
            goto LABEL_91;
          KiUnstackDetachProcess((__int64)v98, 0LL);
          if ( v35 )
            MmUnlockPages(&MemoryDescriptorList);
          v28 -= v30;
          v13 = v72 - v30;
          v72 -= v30;
          Src = (char *)Src + v30;
          v81 = &v41[v30];
          v31 = v12;
          v9 = a2;
          goto LABEL_32;
        }
        v41 = (char *)v81;
        v42 = MiDbgReadWriteEnclave((_DWORD)v81, (_DWORD)P, Size, 0, (__int64)&v78);
      }
      v70 = v42;
      v29 = v42;
      goto LABEL_65;
    }
    v39 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
    if ( v39 )
      goto LABEL_56;
    MmUnlockPages(&MemoryDescriptorList);
LABEL_99:
    v12 &= ~2u;
    KiUnstackDetachProcess((__int64)v98, 0LL);
    v13 = v72;
    goto LABEL_26;
  }
  if ( v35 )
    goto LABEL_99;
  *a7 = a5 - v28;
  v29 = -2147483635;
LABEL_91:
  KiUnstackDetachProcess((__int64)v98, 0LL);
  if ( v82 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v29;
}
