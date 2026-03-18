/*
 * XREFs of MiMapViewOfSection @ 0x14060A890
 * Callers:
 *     NtMapViewOfSection @ 0x140609CA0 (NtMapViewOfSection.c)
 *     MmMapSecureViewOfSection @ 0x14065F708 (MmMapSecureViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x14067E25C (MiMapViewOfSectionExCommon.c)
 *     MmMapViewOfSection @ 0x140680790 (MmMapViewOfSection.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     MiArbitraryCodeBlocked @ 0x14067DCBC (MiArbitraryCodeBlocked.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(__int64 a1, __int64 a2, void **a3, void *a4, _WORD *a5, int a6, int a7)
{
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r12
  __int64 v13; // rsi
  void *v14; // r11
  int v15; // r8d
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  int v28; // r9d
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  void *v32; // rdi
  int v33; // r8d
  __int16 v34; // ax
  unsigned int v35; // ecx
  int ProtectionMask; // esi
  int v37; // r8d
  _KPROCESS *v38; // r10
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // edi
  int v45; // eax
  size_t v46; // r15
  _QWORD *v47; // r13
  int v48; // eax
  void *v49; // r14
  unsigned __int64 v50; // rax
  BOOLEAN v51; // al
  int v52; // eax
  char v53[8]; // [rsp+50h] [rbp-F8h] BYREF
  void *v54; // [rsp+58h] [rbp-F0h] BYREF
  void *Src; // [rsp+60h] [rbp-E8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-E0h]
  int v57; // [rsp+70h] [rbp-D8h]
  int v58; // [rsp+74h] [rbp-D4h]
  int v59; // [rsp+78h] [rbp-D0h]
  _WORD *v60; // [rsp+80h] [rbp-C8h]
  __int64 v61; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+90h] [rbp-B8h]
  void **v63; // [rsp+98h] [rbp-B0h]
  ULONG_PTR v64; // [rsp+A0h] [rbp-A8h]
  __int64 v65; // [rsp+A8h] [rbp-A0h]
  size_t v66; // [rsp+B0h] [rbp-98h]
  __int64 v67; // [rsp+C0h] [rbp-88h]
  void **v68; // [rsp+D0h] [rbp-78h]
  _BYTE v69[48]; // [rsp+D8h] [rbp-70h] BYREF

  v54 = a4;
  v63 = a3;
  v61 = a1;
  v67 = a2;
  v68 = a3;
  v60 = a5;
  memset(v69, 0, sizeof(v69));
  BugCheckParameter1 = *(_QWORD *)(a2 + 88);
  v64 = BugCheckParameter1;
  v57 = 0;
  v65 = a1;
  v10 = MiSectionControlArea(a1);
  v12 = v10;
  v62 = v10;
  v13 = *(_QWORD *)v10;
  v14 = *(void **)(a2 + 24);
  Src = v14;
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v10 + 56) & 0x400) == 0 && *(_QWORD *)(a2 + 16) >= 0x10000uLL && (*(_WORD *)a3 || *a5) )
      return 3221226016LL;
  }
  if ( !a7
    && ((*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0 || (*(_DWORD *)(a2 + 40) & 0x40000000) != 0 && !*(_QWORD *)(v11 + 1856)) )
  {
    return 3221225485LL;
  }
  v53[0] = 1;
  v15 = *(_DWORD *)(a2 + 44);
  if ( (v15 & 0x40000000) != 0 )
  {
    if ( (v15 & 0xF0) == 0 )
      return 3221225485LL;
    v53[0] = 0;
    *(_DWORD *)(a2 + 44) = v15 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 80) && (*(_DWORD *)(a2 + 60) & 0x2000000) == 0 )
      return 3221225485LL;
    v45 = *(_DWORD *)(a2 + 40);
    if ( (v45 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v45 & 0x20000000) != 0 )
    {
      if ( *(_QWORD *)a5
        || (MiFlags & 0x40000) != 0
        || (*(_DWORD *)(v12 + 56) & 0x20000) != 0
        || (v51 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 104)), v14 = Src, !v51) )
      {
        *(_DWORD *)(a2 + 40) &= ~0x20000000u;
      }
    }
  }
  else
  {
    v16 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(a1 + 60) & 0xFFF) & 7] | 0x700;
    if ( (v16 | v17) != v16 )
      return 3221225550LL;
    v18 = *(_DWORD *)(a2 + 40);
    if ( (v18 & 0x840000) != 0 || (v18 & 0x20002000) != 0 && (*(_DWORD *)(v12 + 56) & 0x400) != 0 )
      return 3221225485LL;
  }
  v19 = *(_QWORD *)(a2 + 24);
  v20 = *(_QWORD *)a5 + v19;
  if ( v20 < *(_QWORD *)a5 )
    return 3221225503LL;
  v21 = *(_QWORD *)(a1 + 48);
  if ( v20 > v21 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v19 )
    *(_QWORD *)(a2 + 24) = v21 - *(_QWORD *)a5;
  if ( (*(_DWORD *)(v12 + 56) & 0x400) != 0 )
  {
    if ( (*(_DWORD *)a5 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 &= 0xFFFFF000;
    }
  }
  else
  {
    v22 = *(_QWORD *)(a2 + 16);
    if ( v22 > 0x10000 && *(_QWORD *)(v12 + 64) )
      v22 = 0x10000LL;
    v23 = *(unsigned int *)a5;
    v24 = v23 & (v22 - 1);
    if ( v24 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 = v23 & -(int)v22;
      if ( (*(_DWORD *)(v12 + 56) & 0x20) == 0 )
      {
        v50 = *(_QWORD *)(a2 + 24);
        if ( v50 + v24 < v50 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v50 + v24;
      }
    }
  }
  v25 = *(_QWORD *)(a2 + 24);
  if ( (__int64)v25 <= 0 )
    return 3221225503LL;
  v26 = *(_QWORD *)(a2 + 16);
  if ( ((v26 - 1) & (unsigned __int64)*a3) == 0 )
    goto LABEL_24;
  if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
    return 3221226016LL;
  *a3 = (void *)((unsigned __int64)*a3 & -v26);
  v25 = *(_QWORD *)(a2 + 24);
LABEL_24:
  *(_QWORD *)(a2 + 32) = v25;
  v27 = v25;
  if ( (v25 & 0xFFF) != 0 )
  {
    v27 = v25 + 4096 - (unsigned int)(v25 & 0xFFF);
    if ( v27 >= v25 )
    {
      *(_QWORD *)(a2 + 24) = v27;
      goto LABEL_25;
    }
    return 3221225503LL;
  }
LABEL_25:
  v28 = *(_DWORD *)(a2 + 72) & 1;
  v29 = (unsigned __int64 *)a3;
  if ( !v28 )
    v29 = (unsigned __int64 *)a2;
  v30 = *v29;
  v31 = *(_QWORD *)(a2 + 8);
  if ( v30 > v31 )
    return 3221225485LL;
  if ( v31 - v30 + 1 < v27 )
    return (unsigned int)(v28 != 0) - 1073741801;
  v32 = v54;
  if ( (unsigned __int64)v54 > v25 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v25 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v33 = *(_DWORD *)(a2 + 40);
  if ( (v33 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v33 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v33 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 60) & 0x4000000) != 0
    && ((*(_DWORD *)(v12 + 56) & 0x420) != 0
     || (v33 & 0xFFFFDFFF) != 0
     || !v28
     || *a3 != (void *)((unsigned __int64)*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v14) )
  {
    return 3221225485LL;
  }
  v34 = *(_WORD *)(v13 + 12);
  v35 = *(_DWORD *)(a2 + 44);
  if ( v34 < 0 )
  {
    v35 = v35 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v35;
    v34 = *(_WORD *)(v13 + 12);
  }
  if ( (v34 & 0x4000) != 0 )
  {
    v35 = v35 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v35;
  }
  ProtectionMask = MiMakeProtectionMask(v35);
  v58 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v40 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(v40 + 2128) & 0x100) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) = v37 & 0xDFFFFFFF;
    }
    else if ( (ProtectionMask & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(v40);
    }
  }
  if ( (_KPROCESS *)v40 != v38 )
  {
    KiStackAttachProcess(v38, 0, (__int64)v69);
    v57 = 1;
  }
  v41 = *(_DWORD *)(v12 + 56);
  if ( (v41 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 80) )
    {
      v43 = -1073741811;
      goto LABEL_46;
    }
    v42 = MiMapViewOfPhysicalSection(a2, (_DWORD)a3, (_DWORD)a5, ProtectionMask, (__int64)v53);
  }
  else
  {
    if ( (v41 & 0x20) != 0 )
    {
      v54 = *a3;
      Src = v54;
      v46 = *(_QWORD *)(a2 + 24);
      v66 = v46;
      v47 = v60;
      while ( 1 )
      {
        v43 = MiMapViewOfImageSection(v12, a2, (unsigned __int64 *)&v54, v47, a1, a6, ProtectionMask, 0);
        v59 = v43;
        v48 = *(_DWORD *)(a2 + 40);
        if ( (v48 & 0x20000000) == 0 )
        {
          v49 = v54;
          goto LABEL_57;
        }
        *(_DWORD *)(a2 + 40) = v48 & 0xDFFFFFFF;
        v52 = MiMapViewOfImageSection(v12, a2, (unsigned __int64 *)&Src, v47, a1, a6, ProtectionMask, 0);
        if ( v43 < 0 )
        {
          v49 = Src;
          v43 = v52;
          goto LABEL_57;
        }
        if ( v52 >= 0 )
          break;
        MiUnmapViewOfSection(BugCheckParameter1);
        v12 = v62;
      }
      v49 = v54;
      memmove(v54, Src, v46);
      MiUnmapViewOfSection(BugCheckParameter1);
LABEL_57:
      if ( v43 >= 0 )
        *v63 = v49;
      goto LABEL_46;
    }
    v42 = MiMapViewOfDataSection(v12, a2, (_DWORD)a3, (_DWORD)a5, a1, a6, ProtectionMask, (__int64)v32, (__int64)v53);
  }
  v43 = v42;
LABEL_46:
  if ( v57 )
    KiUnstackDetachProcess((struct _KTHREAD *)v69, 0);
  return (unsigned int)v43;
}
