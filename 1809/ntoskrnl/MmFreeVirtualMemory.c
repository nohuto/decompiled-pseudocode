/*
 * XREFs of MmFreeVirtualMemory @ 0x1405F04F0
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x1405F0A50 (NtFreeVirtualMemory.c)
 *     PspDeleteUserStack @ 0x1406CC310 (PspDeleteUserStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14088C820 (PspFreeCurrentThreadUserShadowStack.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     MiDecommitRegion @ 0x1405ED220 (MiDecommitRegion.c)
 *     MiCheckSecuredVad @ 0x140619974 (MiCheckSecuredVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x14085B2B4 (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x14085B430 (MiFreeEnclaveModules.c)
 *     PerfInfoLogVirtualFree @ 0x1408BA450 (PerfInfoLogVirtualFree.c)
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
  ULONG_PTR v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  _KPROCESS *Process; // rdx
  int v13; // r8d
  int v14; // ebx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  _QWORD *p_Lock; // rcx
  __int64 v18; // rbp
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  ULONG_PTR v21; // rcx
  unsigned __int64 v22; // r8
  int v23; // r9d
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rax
  PVOID v27; // rdi
  __int64 result; // rax
  int v29; // eax
  PVOID v30; // rbx
  int v31; // edx
  int v32; // r8d
  int v33; // eax
  unsigned int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  char v38; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-E4h] BYREF
  int v40; // [rsp+48h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-D8h]
  int v42; // [rsp+58h] [rbp-D0h]
  unsigned int v43; // [rsp+5Ch] [rbp-CCh]
  ULONG_PTR BugCheckParameter1a; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-C0h]
  ULONG_PTR v46; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v47; // [rsp+78h] [rbp-B0h]
  void *v48; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v49; // [rsp+88h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-98h]
  __int64 v51; // [rsp+98h] [rbp-90h] BYREF
  _BYTE v52[32]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-60h]

  v6 = a4;
  v46 = BugCheckParameter1;
  v51 = 0LL;
  v9 = BugCheckParameter1;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 49152 )
    return 3221225714LL;
  v10 = *a2;
  v11 = *a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v48 = Process;
  v49 = v10;
  if ( v10 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v10 < v11 )
    return 3221225713LL;
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return 3221225485LL;
    v13 = a6 | 0x4000000;
    v6 = a4 & 0xFFFFFFFD;
  }
  else
  {
    v13 = a6;
  }
  v40 = v13;
  if ( (v6 & 1) == 0 )
    goto LABEL_7;
  if ( (v6 & 2) != 0 )
    return 3221225485LL;
  v13 |= 0xC000000u;
  v40 = v13;
  v6 &= ~1u;
LABEL_7:
  v42 = v13 & 0x4000000;
  if ( (v13 & 0x4000000) != 0 )
  {
    if ( v6 == 0x8000 )
    {
      if ( v11 && v11 == (v11 & 0xFFFFFFFFFFFFF000uLL) )
      {
        if ( v10 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
          goto LABEL_8;
        return 3221225712LL;
      }
      return 3221225713LL;
    }
    return 3221225714LL;
  }
LABEL_8:
  v14 = 0;
  v15 = v10 & 0xFFFFFFFFFFFFF000uLL;
  v53 = 0LL;
  v16 = (v10 + v11 - 1) | 0xFFF;
  v45 = (v10 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v47 = v16 >> 12;
  if ( v9 == -1LL )
  {
    p_Lock = &Process->Header.Lock;
    Object = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               v9,
               8,
               (__int64)PsProcessType,
               a5,
               0x6D566D4Du,
               &BugCheckParameter1a,
               0LL,
               0LL);
    v39 = result;
    if ( (int)result < 0 )
      return result;
    p_Lock = (_QWORD *)BugCheckParameter1a;
    Object = (PVOID)BugCheckParameter1a;
    if ( v48 != (void *)BugCheckParameter1a )
    {
      v14 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)v52);
      p_Lock = (_QWORD *)BugCheckParameter1a;
    }
    v13 = v40;
  }
  v38 = 0;
  if ( (v6 & 0xFFFF3FFF) != 0 && (!p_Lock[226] || (v6 & 0x10000) == 0 || (v6 & 0x4000) != 0) )
  {
    v34 = -1073741582;
    goto LABEL_115;
  }
  if ( (v13 & 0xC000000) == 0xC000000 )
  {
    result = MiCoalescePlaceholderAllocations(p_Lock, v15, v16, a5);
    v43 = result;
    if ( v14 )
    {
      KiUnstackDetachProcess((__int64)v52, 0LL);
      result = v43;
    }
    if ( v9 != -1LL )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return v43;
    }
    return result;
  }
  v43 = v6 & 0x8000;
  v18 = MiObtainReferencedVadEx(v15, v43 != 0, (int *)&v39);
  if ( !v18 )
  {
    v34 = v39;
    goto LABEL_114;
  }
  while ( 1 )
  {
    v19 = v45;
    v20 = *(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32);
    v21 = *(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32);
    v48 = (void *)v20;
    BugCheckParameter1a = v21;
    if ( v11 )
    {
      v22 = v47;
    }
    else
    {
      v47 = v21;
      v22 = v21;
      v16 = (v21 << 12) | 0xFFF;
      if ( v43 )
      {
        if ( v45 != v20 )
          goto LABEL_110;
        v15 = v20 << 12;
      }
    }
    if ( v45 < v20 || v45 > v21 || v22 < v20 || v22 > v21 )
    {
      v34 = -1073741798;
      goto LABEL_108;
    }
    v23 = *(_DWORD *)(v18 + 48);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( (v23 & 0x4000) != 0 || (v23 & 7) != 0 || v45 == v20 && v22 == v21 )
      {
LABEL_90:
        v34 = -1073741797;
        goto LABEL_108;
      }
    }
    else if ( (v23 & 0x4000) == 0 || (v23 & 7) == 1 )
    {
      goto LABEL_90;
    }
    v24 = v42;
    if ( v42 )
      break;
LABEL_23:
    v25 = v40;
    if ( (v40 & 0x40000000) != 0 && (v23 & 0x80000) == 0 )
      goto LABEL_98;
    if ( (v23 & 0x8000000) != 0 && (v40 & 0x40000000) == 0 )
    {
      if ( !v43 )
      {
        v31 = v49;
        v32 = v22 - v19;
        goto LABEL_59;
      }
      if ( (*((_DWORD *)Object + 193) & 0x20) != 0 )
      {
        v33 = 0;
      }
      else
      {
        v32 = BugCheckParameter1a - v20;
        v31 = (_DWORD)v20 << 12;
LABEL_59:
        v33 = MiCheckSecuredVad(v18, v31, (v32 + 1) << 12, 85, a5);
        v25 = v40;
        v20 = (unsigned __int64)v48;
        v22 = v47;
        v19 = v45;
        v24 = v42;
      }
      v39 = v33;
      if ( v33 < 0 )
        goto LABEL_107;
    }
    if ( !v43 )
    {
      if ( v11 )
        v11 = v16 - v15 + 1;
      if ( (*(_DWORD *)(v18 + 48) & 0x20000) == 0
        || (v37 = MiDecommitEnclavePages((_DWORD)Object, v18, v15, v11, v25), v39 = v37, v37 == -1073741802) )
      {
        if ( (((*(_DWORD *)(v18 + 48) & 7) - 3) & 0xFFFFFFFD) == 0
          || (v26 = *(unsigned int *)(v18 + 52),
              LODWORD(v26) = v26 & 0x7FFFFFFF,
              (v26 | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 31)) == 0x7FFFFFFFDLL) )
        {
          v34 = -1073741664;
          goto LABEL_108;
        }
        if ( !v11 )
        {
          if ( v49 >> 12 != (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) )
          {
LABEL_110:
            v34 = -1073741665;
            goto LABEL_108;
          }
          v16 = ((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF;
        }
        MiDecommitRegion(v18, v15, v16);
      }
      else if ( v37 < 0 )
      {
LABEL_107:
        v34 = v39;
        goto LABEL_108;
      }
      MiUnlockAndDereferenceVad((char *)v18);
      v27 = Object;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
        PerfInfoLogVirtualFree(v15, v11, Object);
      if ( v14 )
        KiUnstackDetachProcess((__int64)v52, 0LL);
      if ( v46 != -1LL )
        ObfDereferenceObjectWithTag(v27, 0x6D566D4Du);
      *a3 = v11;
LABEL_40:
      *a2 = v15;
      return 0LL;
    }
    if ( (*((_DWORD *)Object + 435) & 0x100) != 0 && (v19 != v20 || v22 != BugCheckParameter1a) )
    {
      v34 = -1073741558;
      goto LABEL_108;
    }
    v29 = MiFreeVadRange(v18, (int)&v38, v19, v22, (__int64)Object, v24 != 0);
    v39 = v29;
    if ( v29 >= 0 )
    {
      if ( v14 )
        KiUnstackDetachProcess((__int64)v52, 0LL);
      v30 = Object;
      if ( v51 )
        MiFreeEnclaveModules(&v51);
      if ( v46 != -1LL )
        ObfDereferenceObjectWithTag(v30, 0x6D566D4Du);
      *a3 = v16 - v15 + 1;
      goto LABEL_40;
    }
    if ( v29 != -1073741267 )
      goto LABEL_107;
  }
  if ( MiLocateVadEvent(v18, 128)
    || (v35 = *(unsigned int *)(v18 + 52),
        LODWORD(v35) = v35 & 0x7FFFFFFF,
        (v35 | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 31)) == 0x7FFFFFFFDLL) )
  {
    v36 = *(unsigned int *)(v18 + 52);
    LODWORD(v36) = v36 & 0x7FFFFFFF;
    if ( (v36 | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 31)) != 0x7FFFFFFFDLL
      || v19 != v20
      || v22 != BugCheckParameter1a )
    {
      v24 = v42;
      goto LABEL_23;
    }
  }
LABEL_98:
  v34 = -1073741800;
LABEL_108:
  MiUnlockAndDereferenceVad((char *)v18);
  if ( v38 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Object);
LABEL_114:
  v9 = v46;
  p_Lock = Object;
LABEL_115:
  if ( v14 )
  {
    KiUnstackDetachProcess((__int64)v52, 0LL);
    p_Lock = Object;
  }
  if ( v9 != -1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
  return v34;
}
