/*
 * XREFs of MmFreeVirtualMemory @ 0x140606BC0
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x140606B00 (NtFreeVirtualMemory.c)
 *     PspDeleteUserStack @ 0x1406EA7A4 (PspDeleteUserStack.c)
 *     PspFreeUserFiberShadowStack @ 0x1408C8D64 (PspFreeUserFiberShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1408C8E8C (PspReserveAndCommitUserShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x1408C90D4 (PspSetupUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408C9A98 (PspFreeCurrentThreadUserShadowStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 *     MiLocateVadEvent @ 0x1400ACF04 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MiGetVadPageSize @ 0x1402E5620 (MiGetVadPageSize.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiDecommitRegion @ 0x140606890 (MiDecommitRegion.c)
 *     MiCheckSecuredVad @ 0x14064C0CC (MiCheckSecuredVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088B470 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x140893FA4 (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x140894120 (MiFreeEnclaveModules.c)
 *     PerfInfoLogVirtualFree @ 0x1408F5CE8 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v6; // edi
  ULONG_PTR v7; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  _QWORD *p_Lock; // rcx
  int v12; // r8d
  int v13; // ebx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rsi
  __int64 v17; // r10
  unsigned __int64 v18; // r11
  ULONG_PTR v19; // rcx
  unsigned __int64 v20; // r8
  int v21; // r9d
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rax
  PVOID v26; // rdi
  __int64 result; // rax
  int v28; // eax
  PVOID v29; // rbx
  int v30; // edx
  int v31; // r8d
  int v32; // eax
  unsigned int v33; // edi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  char v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh]
  unsigned int v42; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1a; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-98h]
  ULONG_PTR v45; // [rsp+70h] [rbp-90h]
  unsigned __int64 v46; // [rsp+78h] [rbp-88h]
  _QWORD *v47; // [rsp+80h] [rbp-80h]
  unsigned __int64 v48; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v49; // [rsp+90h] [rbp-70h]
  _QWORD v50[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  __int64 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]

  v6 = a4;
  v45 = BugCheckParameter1;
  v49 = a3;
  v52 = 0LL;
  v54 = 0LL;
  v7 = BugCheckParameter1;
  v56 = 0LL;
  v50[1] = 0LL;
  v50[0] = 0LL;
  v53 = 0LL;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 49152 )
    return 3221225714LL;
  v9 = *a2;
  v10 = *a3;
  CurrentThread = KeGetCurrentThread();
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  v47 = p_Lock;
  v48 = v9;
  if ( v9 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v9 < v10 )
    return 3221225713LL;
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return 3221225485LL;
    v12 = a6 | 0x4000000;
    v6 = a4 & 0xFFFFFFFD;
  }
  else
  {
    v12 = a6;
  }
  v41 = v12;
  if ( (v6 & 1) == 0 )
    goto LABEL_7;
  if ( (v6 & 2) != 0 )
    return 3221225485LL;
  v12 |= 0xC000000u;
  v41 = v12;
  v6 &= ~1u;
LABEL_7:
  v40 = v12 & 0x4000000;
  if ( (v12 & 0x4000000) != 0 )
  {
    if ( v6 == 0x8000 )
    {
      if ( v10 && v10 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
      {
        if ( v9 == (v9 & 0xFFFFFFFFFFFFF000uLL) )
          goto LABEL_8;
        return 3221225712LL;
      }
      return 3221225713LL;
    }
    return 3221225714LL;
  }
LABEL_8:
  v13 = 0;
  v14 = (v9 + v10 - 1) | 0xFFF;
  v55 = 0LL;
  v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v44 = (v9 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v46 = v14 >> 12;
  if ( v7 == -1LL )
  {
    Object = p_Lock;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               v7,
               8,
               (__int64)PsProcessType,
               a5,
               0x6D566D4Du,
               &BugCheckParameter1a,
               0LL,
               0LL);
    v38 = result;
    if ( (int)result < 0 )
      return result;
    p_Lock = (_QWORD *)BugCheckParameter1a;
    Object = (PVOID)BugCheckParameter1a;
    if ( v47 != (_QWORD *)BugCheckParameter1a )
    {
      v13 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v52);
      p_Lock = (_QWORD *)BugCheckParameter1a;
    }
    v12 = v41;
  }
  v37 = 0;
  if ( (v6 & 0xFFFF3FFF) != 0 && (!p_Lock[232] || (v6 & 0x10000) == 0 || (v6 & 0x4000) != 0) )
  {
    v33 = -1073741582;
    goto LABEL_121;
  }
  if ( (v12 & 0xC000000) == 0xC000000 )
  {
    result = MiCoalescePlaceholderAllocations(p_Lock, v15, v14, a5);
    v42 = result;
    if ( v13 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)&v52, 0);
      result = v42;
    }
    if ( v7 != -1LL )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return v42;
    }
    return result;
  }
  v42 = v6 & 0x8000;
  v16 = MiObtainReferencedVadEx(v15, v42 != 0, (int *)&v38);
  if ( !v16 )
  {
    v33 = v38;
    goto LABEL_120;
  }
  while ( 1 )
  {
    v17 = v44;
    v18 = *(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32);
    v19 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
    v47 = (_QWORD *)v18;
    BugCheckParameter1a = v19;
    if ( v10 )
    {
      v20 = v46;
    }
    else
    {
      v46 = v19;
      v20 = v19;
      v14 = (v19 << 12) | 0xFFF;
      if ( v42 )
      {
        if ( v44 != v18 )
          goto LABEL_117;
        v15 = v18 << 12;
      }
    }
    if ( v44 < v18 || v44 > v19 || v20 < v18 || v20 > v19 )
    {
      v33 = -1073741798;
      goto LABEL_111;
    }
    v21 = *(_DWORD *)(v16 + 48);
    v22 = v21 & 0x100000;
    if ( (v6 & 0x10000) != 0 )
    {
      if ( v22 || (v21 & 0x70) != 0 || v44 == v18 && v20 == v19 )
      {
LABEL_93:
        v33 = -1073741797;
        goto LABEL_111;
      }
    }
    else if ( !v22 || (v21 & 0x70) == 0x10 )
    {
      goto LABEL_93;
    }
    v23 = v40;
    if ( v40 )
      break;
LABEL_23:
    if ( (v41 & 0x40000000) != 0 && (v21 & 0x5100000) != 0x4100000 )
      goto LABEL_101;
    if ( (v21 & 8) != 0 && (v41 & 0x40000000) == 0 )
    {
      if ( !v42 )
      {
        v30 = v48;
        v31 = v20 - v17;
        goto LABEL_62;
      }
      if ( (*((_DWORD *)Object + 195) & 0x20) != 0 )
      {
        v32 = 0;
      }
      else
      {
        v31 = BugCheckParameter1a - v18;
        v30 = (_DWORD)v18 << 12;
LABEL_62:
        v32 = MiCheckSecuredVad(v16, v30, (v31 + 1) << 12, 85, a5);
        v18 = (unsigned __int64)v47;
        v20 = v46;
        v17 = v44;
        v23 = v40;
      }
      v38 = v32;
      if ( v32 < 0 )
        goto LABEL_110;
    }
    if ( !v42 )
    {
      if ( v10 )
        v10 = v14 - v15 + 1;
      if ( (*(_DWORD *)(v16 + 48) & 0x3100000) != 0x2100000
        || (v36 = MiDecommitEnclavePages((_DWORD)Object, v16, v15, v10, v41), v38 = v36, v36 == -1073741802) )
      {
        v24 = *(_DWORD *)(v16 + 48);
        if ( (*(_BYTE *)(v16 + 48) & 0x70) == 0x30
          || (v24 & 0x100000) != 0
          && ((v24 & 0x400000) != 0 || (v24 & 0xC0000u) >= 0x80000)
          && ((v24 & 0x500000) != 0x500000 || v10 && (((MiGetVadPageSize(v16) << 12) - 1) & (v15 | (v14 + 1))) != 0)
          || (v25 = *(unsigned int *)(v16 + 52),
              LODWORD(v25) = v25 & 0x7FFFFFFF,
              (v25 | ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) << 31)) == 0x7FFFFFFFDLL) )
        {
          v33 = -1073741664;
          goto LABEL_111;
        }
        if ( !v10 )
        {
          if ( v48 >> 12 != (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
          {
LABEL_117:
            v33 = -1073741665;
            goto LABEL_111;
          }
          v14 = ((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF;
        }
        MiDecommitRegion(v16, v15, v14);
      }
      else if ( v36 < 0 )
      {
LABEL_110:
        v33 = v38;
        goto LABEL_111;
      }
      MiUnlockAndDereferenceVad((char *)v16);
      v26 = Object;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
        PerfInfoLogVirtualFree(v15, v10, Object);
      if ( v13 )
        KiUnstackDetachProcess((struct _KTHREAD *)&v52, 0);
      if ( v45 != -1LL )
        ObfDereferenceObjectWithTag(v26, 0x6D566D4Du);
      *v49 = v10;
LABEL_43:
      *a2 = v15;
      return 0LL;
    }
    if ( (*((_DWORD *)Object + 447) & 0x100) != 0 && (v17 != v18 || v20 != BugCheckParameter1a) )
    {
      v33 = -1073741558;
      goto LABEL_111;
    }
    v28 = MiFreeVadRange(v16, (int)&v37, v17, v20, (__int64)Object, v23 != 0);
    v38 = v28;
    if ( v28 >= 0 )
    {
      if ( v13 )
        KiUnstackDetachProcess((struct _KTHREAD *)&v52, 0);
      v29 = Object;
      if ( v50[0] )
        MiFreeEnclaveModules(v50);
      if ( v45 != -1LL )
        ObfDereferenceObjectWithTag(v29, 0x6D566D4Du);
      *v49 = v14 - v15 + 1;
      goto LABEL_43;
    }
    if ( v28 != -1073741267 )
      goto LABEL_110;
  }
  if ( MiLocateVadEvent(v16, 128LL)
    || (v34 = *(unsigned int *)(v16 + 52),
        LODWORD(v34) = v34 & 0x7FFFFFFF,
        (v34 | ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) << 31)) == 0x7FFFFFFFDLL) )
  {
    v35 = *(unsigned int *)(v16 + 52);
    LODWORD(v35) = v35 & 0x7FFFFFFF;
    if ( (v35 | ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) << 31)) != 0x7FFFFFFFDLL
      || v17 != v18
      || v20 != BugCheckParameter1a )
    {
      v23 = v40;
      goto LABEL_23;
    }
  }
LABEL_101:
  v33 = -1073741800;
LABEL_111:
  MiUnlockAndDereferenceVad((char *)v16);
  if ( v37 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Object);
LABEL_120:
  v7 = v45;
  p_Lock = Object;
LABEL_121:
  if ( v13 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)&v52, 0);
    p_Lock = Object;
  }
  if ( v7 != -1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
  return v33;
}
