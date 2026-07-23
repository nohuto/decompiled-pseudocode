/*
 * XREFs of MiMapViewOfSection @ 0x1405F0B10
 * Callers:
 *     MmMapSecureViewOfSection @ 0x140619574 (MmMapSecureViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x140677DD0 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x140678170 (NtMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     MiArbitraryCodeBlocked @ 0x140677900 (MiArbitraryCodeBlocked.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(__int64 a1, __int64 a2, void **a3, void *a4, _WORD *a5, int a6, int a7)
{
  _WORD *v10; // r8
  __int64 v11; // r11
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  int v27; // r10d
  void **v28; // rax
  unsigned __int64 v29; // rdx
  void *v30; // rdi
  int v31; // r8d
  __int16 v32; // ax
  unsigned int v33; // ecx
  int ProtectionMask; // esi
  int v35; // r8d
  _KPROCESS *v36; // r11
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // edi
  int v43; // eax
  size_t v44; // r15
  int v45; // r13d
  int v46; // eax
  void *v47; // r14
  unsigned __int64 v48; // rax
  int v49; // eax
  char v50[8]; // [rsp+50h] [rbp-F8h] BYREF
  void *v51; // [rsp+58h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-E8h]
  void *Src; // [rsp+68h] [rbp-E0h] BYREF
  int v54; // [rsp+70h] [rbp-D8h]
  int v55; // [rsp+74h] [rbp-D4h]
  int v56; // [rsp+78h] [rbp-D0h]
  _WORD *v57; // [rsp+80h] [rbp-C8h]
  __int64 v58; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v59; // [rsp+90h] [rbp-B8h]
  void **v60; // [rsp+98h] [rbp-B0h]
  ULONG_PTR v61; // [rsp+A0h] [rbp-A8h]
  __int64 v62; // [rsp+A8h] [rbp-A0h]
  size_t v63; // [rsp+B0h] [rbp-98h]
  __int64 v64; // [rsp+C0h] [rbp-88h]
  void **v65; // [rsp+D0h] [rbp-78h]
  _BYTE v66[48]; // [rsp+D8h] [rbp-70h] BYREF

  Src = a4;
  v60 = a3;
  v58 = a1;
  v64 = a2;
  v65 = a3;
  v57 = a5;
  BugCheckParameter1 = *(_QWORD *)(a2 + 80);
  v61 = BugCheckParameter1;
  v54 = 0;
  v62 = a1;
  v12 = MiSectionControlArea(a1);
  v59 = v12;
  v13 = *(_QWORD *)v12;
  v51 = *(void **)(a2 + 24);
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v12 + 56) & 0x400) == 0 && *(_QWORD *)(a2 + 16) >= 0x10000uLL && (*v10 || *a5) )
      return 3221226016LL;
  }
  if ( !a7
    && ((*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0 || (*(_DWORD *)(a2 + 40) & 0x40000000) != 0 && !*(_QWORD *)(v11 + 1808)) )
  {
    return 3221225485LL;
  }
  v50[0] = 1;
  v14 = *(_DWORD *)(a2 + 44);
  if ( (v14 & 0x40000000) != 0 )
  {
    if ( (v14 & 0xF0) == 0 )
      return 3221225485LL;
    v50[0] = 0;
    *(_DWORD *)(a2 + 44) = v14 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 72) && (*(_DWORD *)(a2 + 52) & 0x2000000) == 0 )
      return 3221225485LL;
    v43 = *(_DWORD *)(a2 + 40);
    if ( (v43 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v43 & 0x20000000) != 0
      && (*(_QWORD *)a5
       || (MiFlags & 0x40000) != 0
       || (*(_DWORD *)(v12 + 56) & 0x20000) != 0
       || !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 96))) )
    {
      *(_DWORD *)(a2 + 40) &= ~0x20000000u;
    }
  }
  else
  {
    v15 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(a1 + 60) & 0xFFF) & 7] | 0x700;
    if ( (v15 | v16) != v15 )
      return 3221225550LL;
    v17 = *(_DWORD *)(a2 + 40);
    if ( (v17 & 0x840000) != 0 || (v17 & 0x20002000) != 0 && (*(_DWORD *)(v12 + 56) & 0x400) != 0 )
      return 3221225485LL;
  }
  v18 = *(_QWORD *)(a2 + 24);
  v19 = *(_QWORD *)a5 + v18;
  if ( v19 < *(_QWORD *)a5 )
    return 3221225503LL;
  v20 = *(_QWORD *)(a1 + 48);
  if ( v19 > v20 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v18 )
    *(_QWORD *)(a2 + 24) = v20 - *(_QWORD *)a5;
  if ( (*(_DWORD *)(v12 + 56) & 0x400) != 0 )
  {
    if ( (*(_DWORD *)a5 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 &= 0xFFFFF000;
    }
  }
  else
  {
    v21 = *(_QWORD *)(a2 + 16);
    if ( v21 > 0x10000 && *(_QWORD *)(v12 + 64) )
      v21 = 0x10000LL;
    v22 = *(unsigned int *)a5;
    v23 = v22 & (v21 - 1);
    if ( v23 )
    {
      if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 = v22 & -(int)v21;
      if ( (*(_DWORD *)(v12 + 56) & 0x20) == 0 )
      {
        v48 = *(_QWORD *)(a2 + 24);
        if ( v48 + v23 < v48 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v48 + v23;
      }
    }
  }
  v24 = *(_QWORD *)(a2 + 24);
  if ( (__int64)v24 <= 0 )
    return 3221225503LL;
  v25 = *(_QWORD *)(a2 + 16);
  if ( ((v25 - 1) & (unsigned __int64)*a3) == 0 )
    goto LABEL_24;
  if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
    return 3221226016LL;
  *a3 = (void *)((unsigned __int64)*a3 & -v25);
  v24 = *(_QWORD *)(a2 + 24);
LABEL_24:
  *(_QWORD *)(a2 + 32) = v24;
  v26 = v24;
  if ( (v24 & 0xFFF) == 0 )
    goto LABEL_25;
  v26 = v24 + 4096 - (unsigned int)(v24 & 0xFFF);
  if ( v26 < v24 )
    return 3221225503LL;
  *(_QWORD *)(a2 + 24) = v26;
LABEL_25:
  v27 = *(_DWORD *)(a2 + 64) & 1;
  v28 = a3;
  if ( !v27 )
    v28 = (void **)a2;
  v29 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int64)*v28 > v29 )
    return 3221225485LL;
  if ( v29 - (unsigned __int64)*v28 + 1 < v26 )
    return (unsigned int)(v27 != 0) - 1073741801;
  v30 = Src;
  if ( (unsigned __int64)Src > v24 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v24 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v31 = *(_DWORD *)(a2 + 40);
  if ( (v31 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v31 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v31 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 52) & 0x4000000) != 0
    && ((*(_DWORD *)(v12 + 56) & 0x420) != 0
     || (v31 & 0xFFFFDFFF) != 0
     || !v27
     || *a3 != (void *)((unsigned __int64)*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v51) )
  {
    return 3221225485LL;
  }
  v32 = *(_WORD *)(v13 + 12);
  v33 = *(_DWORD *)(a2 + 44);
  if ( v32 < 0 )
  {
    v33 = v33 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v33;
    v32 = *(_WORD *)(v13 + 12);
  }
  if ( (v32 & 0x4000) != 0 )
  {
    v33 = v33 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v33;
  }
  ProtectionMask = MiMakeProtectionMask(v33);
  v55 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v38 = *(_KPROCESS **)(a2 + 88);
  if ( (v38[2].UserTime & 0x100) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) = v35 & 0xDFFFFFFF;
    }
    else if ( (ProtectionMask & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(v38);
    }
  }
  if ( v38 != v36 )
  {
    KiStackAttachProcess(v36, 0LL, (__int64)v66);
    v54 = 1;
  }
  v39 = *(_DWORD *)(v12 + 56);
  if ( (v39 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 72) )
    {
      v41 = -1073741811;
      goto LABEL_46;
    }
    v40 = MiMapViewOfPhysicalSection(a2, (_DWORD)a3, (_DWORD)a5, ProtectionMask, (__int64)v50);
  }
  else
  {
    if ( (v39 & 0x20) != 0 )
    {
      v51 = *a3;
      Src = v51;
      v44 = *(_QWORD *)(a2 + 24);
      v63 = v44;
      v45 = (int)v57;
      while ( 1 )
      {
        v41 = MiMapViewOfImageSection(v12, a2, (unsigned int)&v51, v45, a1, a6, ProtectionMask, 0);
        v56 = v41;
        v46 = *(_DWORD *)(a2 + 40);
        if ( (v46 & 0x20000000) == 0 )
        {
          v47 = v51;
          goto LABEL_56;
        }
        *(_DWORD *)(a2 + 40) = v46 & 0xDFFFFFFF;
        v49 = MiMapViewOfImageSection(v12, a2, (unsigned int)&Src, v45, a1, a6, ProtectionMask, 0);
        if ( v41 < 0 )
        {
          v47 = Src;
          v41 = v49;
          goto LABEL_56;
        }
        if ( v49 >= 0 )
          break;
        MiUnmapViewOfSection(BugCheckParameter1);
        LODWORD(v12) = v59;
      }
      v47 = v51;
      memmove(v51, Src, v44);
      MiUnmapViewOfSection(BugCheckParameter1);
LABEL_56:
      if ( v41 >= 0 )
        *v60 = v47;
      goto LABEL_46;
    }
    v40 = MiMapViewOfDataSection(v12, a2, (_DWORD)a3, (_DWORD)a5, a1, a6, ProtectionMask, (__int64)v30, (__int64)v50);
  }
  v41 = v40;
LABEL_46:
  if ( v54 )
    KiUnstackDetachProcess((__int64)v66, 0LL);
  return (unsigned int)v41;
}
