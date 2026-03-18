/*
 * XREFs of MiQueryProcessActivePatches @ 0x140890DDC
 * Callers:
 *     NtManageHotPatch @ 0x1408918F0 (NtManageHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1405B0CCC (MiFillActivePatchesQueryBuffer.c)
 *     MiIsActiveSystemHotPatch @ 0x1405B0E10 (MiIsActiveSystemHotPatch.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiGetProcessHotPatchContext @ 0x14088DE88 (MiGetProcessHotPatchContext.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        HANDLE Handle,
        __int64 *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        KPROCESSOR_MODE AccessMode)
{
  __int64 *v6; // r13
  unsigned int v8; // ebx
  unsigned __int64 j; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  unsigned int v12; // r12d
  struct _KTHREAD *Lock; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v17; // rdx
  _QWORD **v18; // rax
  _QWORD *v19; // rdx
  PVOID *v20; // rcx
  PVOID *v21; // rdx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  PVOID v24; // r13
  signed __int64 v25; // r10
  unsigned int v26; // esi
  BOOLEAN v27; // al
  _QWORD *ProcessHotPatchContext; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // rcx
  unsigned __int64 n; // rcx
  _QWORD **v32; // rax
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rdx
  unsigned __int64 v35; // r15
  _DWORD *v36; // rax
  int v37; // r13d
  _QWORD *PoolWithTag; // rax
  __int64 v39; // rsi
  HANDLE v40; // r9
  __int64 v41; // r8
  __int64 v42; // r15
  __int64 v43; // rdx
  _QWORD **v44; // rcx
  unsigned __int64 v45; // rax
  _QWORD *k; // rcx
  PVOID *m; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  _DWORD *v50; // rcx
  _QWORD **v51; // rax
  unsigned __int64 v52; // rcx
  _QWORD *v53; // rcx
  struct _KTHREAD *v54; // r14
  _QWORD *v55; // rdi
  __int64 v57; // [rsp+50h] [rbp-89h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-81h]
  __int64 *v59; // [rsp+60h] [rbp-79h]
  __int64 v60; // [rsp+68h] [rbp-71h] BYREF
  __int64 v61; // [rsp+70h] [rbp-69h] BYREF
  __int64 v62; // [rsp+78h] [rbp-61h] BYREF
  PVOID v63; // [rsp+80h] [rbp-59h]
  _DWORD *v64; // [rsp+88h] [rbp-51h]
  _QWORD *v65; // [rsp+90h] [rbp-49h]
  __int64 v66; // [rsp+98h] [rbp-41h]
  PVOID Object; // [rsp+A0h] [rbp-39h] BYREF
  HANDLE v68; // [rsp+A8h] [rbp-31h]
  _BYTE v69[48]; // [rsp+B0h] [rbp-29h] BYREF

  v6 = a2;
  v59 = a2;
  v64 = a3;
  v68 = Handle;
  v66 = a4;
  memset(v69, 0, sizeof(v69));
  v57 = 0LL;
  LOBYTE(v8) = 0;
  v63 = 0LL;
  j = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v65 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !Handle )
  {
    v8 = 8;
    Lock = MmAcquireLoadLock();
    v14 = (_QWORD *)MiSecureImageActivePatches;
    v15 = 0LL;
    CurrentThread = Lock;
    while ( v14 )
    {
      v10 = (unsigned __int64)v14;
      v14 = (_QWORD *)*v14;
    }
    i = v10;
    while ( i )
    {
      ++v12;
      v17 = i;
      v11 += *(unsigned __int16 *)(i + 48) + 24LL;
      v18 = *(_QWORD ***)(i + 8);
      if ( v18 )
      {
        v19 = *v18;
        for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
          i = (unsigned __int64)v19;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v17 )
            break;
          v17 = i;
        }
      }
    }
    v20 = (PVOID *)PsLoadedModuleList;
    v21 = &PsLoadedModuleList;
    while ( v20 != v21 )
    {
      if ( MiIsActiveSystemHotPatch((__int64)v20) )
      {
        ++v12;
        v11 += *(unsigned __int16 *)(v22 + 72) + 24LL;
      }
      v20 = *(PVOID **)v22;
    }
LABEL_40:
    v35 = v11 + 40;
    if ( a5 >= v35 )
    {
      v37 = v35;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v35, 0x71486D4Du);
      v25 = 0LL;
      v39 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        v40 = v68;
        *PoolWithTag = 2LL;
        PoolWithTag[2] = 0LL;
        PoolWithTag[3] = 0LL;
        PoolWithTag[4] = 0LL;
        PoolWithTag[1] = v40;
        if ( v12 )
        {
          v41 = (__int64)(PoolWithTag + 5);
          v42 = (__int64)PoolWithTag - v66;
          v43 = (__int64)&PoolWithTag[2 * v12 + 5];
          v61 = (__int64)(PoolWithTag + 5);
          v62 = v43;
          PoolWithTag[3] = PoolWithTag + 5;
          PoolWithTag[4] = v43;
          v60 = v43 + 8LL * v12;
          if ( v40 )
          {
            while ( j )
            {
              if ( *(_DWORD *)(j + 88) )
              {
                MiFillActivePatchesQueryBuffer(
                  v39,
                  v43,
                  v41,
                  v42,
                  (_QWORD **)&v62,
                  (UNICODE_STRING **)&v61,
                  (wchar_t **)&v60,
                  (_QWORD *)(j + 48),
                  (PCUNICODE_STRING)(j + 64));
                v25 = 0LL;
              }
              v51 = *(_QWORD ***)(j + 8);
              v52 = j;
              if ( v51 )
              {
                v53 = *v51;
                for ( j = *(_QWORD *)(j + 8); v53; v53 = (_QWORD *)*v53 )
                  j = (unsigned __int64)v53;
              }
              else
              {
                while ( 1 )
                {
                  j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !j || *(_QWORD *)j == v52 )
                    break;
                  v52 = j;
                }
              }
            }
          }
          else
          {
            while ( v10 )
            {
              v57 = *(_QWORD *)(v10 + 24);
              MiFillActivePatchesQueryBuffer(
                v39,
                v43,
                v41,
                v42,
                (_QWORD **)&v62,
                (UNICODE_STRING **)&v61,
                (wchar_t **)&v60,
                &v57,
                (PCUNICODE_STRING)(v10 + 48));
              v44 = *(_QWORD ***)(v10 + 8);
              v25 = 0LL;
              v45 = v10;
              if ( v44 )
              {
                v10 = *(_QWORD *)(v10 + 8);
                for ( k = *v44; k; k = (_QWORD *)*k )
                  v10 = (unsigned __int64)k;
              }
              else
              {
                while ( 1 )
                {
                  v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !v10 || *(_QWORD *)v10 == v45 )
                    break;
                  v45 = v10;
                }
              }
            }
            for ( m = (PVOID *)PsLoadedModuleList; m != &PsLoadedModuleList; m = (PVOID *)*m )
            {
              if ( MiIsActiveSystemHotPatch((__int64)m) )
              {
                v50 = m[35];
                LODWORD(v57) = v50[30];
                HIDWORD(v57) = v50[39];
                MiFillActivePatchesQueryBuffer(
                  v39,
                  v48,
                  v49,
                  v42,
                  (_QWORD **)&v62,
                  (UNICODE_STRING **)&v61,
                  (wchar_t **)&v60,
                  &v57,
                  (PCUNICODE_STRING)(m + 9));
                v25 = 0LL;
              }
            }
          }
          *(_QWORD *)(v39 + 32) -= v42;
          *(_QWORD *)(v39 + 24) -= v42;
        }
        *v59 = v39;
        v26 = v25;
        *v64 = v37;
      }
      else
      {
        v26 = -1073741670;
      }
    }
    else
    {
      v25 = 0LL;
      if ( v35 <= 0xFFFFFFFF )
      {
        v36 = v64;
        v26 = v15;
        *v6 = v15;
        *v36 = v35;
      }
      else
      {
        v26 = -1073741675;
      }
    }
    goto LABEL_75;
  }
  v23 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
  v24 = Object;
  v25 = 0LL;
  v63 = Object;
  v26 = v23;
  if ( v23 < 0 )
  {
    v54 = CurrentThread;
    goto LABEL_79;
  }
  v27 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 96);
  v8 = 2 * (v27 & 1);
  if ( (v27 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)v69);
    v8 |= 4u;
    ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v24, 0);
    v15 = 0LL;
    v65 = ProcessHotPatchContext;
    v29 = (unsigned __int64)ProcessHotPatchContext;
    if ( ProcessHotPatchContext )
    {
      v8 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      v30 = *(_QWORD *)(v29 + 8);
      if ( (v30 & 1) != 0 )
      {
        if ( v30 != 1 )
          j = v30 ^ (v29 | 1);
      }
      else
      {
        j = *(_QWORD *)(v29 + 8);
      }
      v15 = 0LL;
      n = j;
      while ( n )
      {
        if ( *(_DWORD *)(n + 88) )
        {
          ++v12;
          v11 += *(unsigned __int16 *)(n + 64) + 24LL;
        }
        v32 = *(_QWORD ***)(n + 8);
        v33 = n;
        if ( v32 )
        {
          v34 = *v32;
          for ( n = *(_QWORD *)(n + 8); v34; v34 = (_QWORD *)*v34 )
            n = (unsigned __int64)v34;
        }
        else
        {
          while ( 1 )
          {
            n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !n || *(_QWORD *)n == v33 )
              break;
            v33 = n;
          }
        }
      }
    }
    v6 = v59;
    goto LABEL_40;
  }
  v26 = -1073741558;
  v25 = 0LL;
LABEL_75:
  v54 = CurrentThread;
  if ( v8 < 8 )
  {
    v24 = v63;
  }
  else
  {
    MmReleaseLoadLock((__int64)CurrentThread);
    v24 = v63;
    v25 = 0LL;
  }
LABEL_79:
  if ( (v8 & 1) != 0 )
  {
    v55 = v65;
    if ( _InterlockedCompareExchange64(v65 + 2, v25, 17LL) != 17 )
      ExfReleasePushLockShared(v55 + 2);
    KeAbPostRelease((ULONG_PTR)(v55 + 2));
    KiLeaveGuardedRegionUnsafe((__int64)v54);
  }
  if ( (v8 & 4) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v69, 0);
  if ( (v8 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v24 + 96);
  if ( v24 )
    ObfDereferenceObject(v24);
  return v26;
}
