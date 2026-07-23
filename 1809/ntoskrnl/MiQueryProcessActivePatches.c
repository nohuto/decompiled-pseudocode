/*
 * XREFs of MiQueryProcessActivePatches @ 0x140858DF0
 * Callers:
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     MiGetProcessHotPatchContext @ 0x140856450 (MiGetProcessHotPatchContext.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        void *a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        KPROCESSOR_MODE AccessMode)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v7; // ebx
  unsigned __int64 v8; // r14
  NTSTATUS v10; // eax
  PVOID v11; // rbp
  unsigned int v12; // edi
  BOOLEAN v13; // al
  __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int64 j; // rdi
  _QWORD *ProcessHotPatchContext; // rax
  __int64 v18; // rcx
  unsigned __int64 i; // rcx
  _QWORD **v20; // rax
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rsi
  int v24; // r13d
  char *PoolWithTag; // rax
  char *v26; // rsi
  __int64 v27; // rax
  UNICODE_STRING *v28; // r14
  char *v29; // r12
  char *v30; // r15
  wchar_t *v31; // rbp
  unsigned __int16 v32; // ax
  __int64 Length; // rax
  _QWORD **v34; // rax
  unsigned __int64 v35; // rcx
  _QWORD *v36; // rcx
  PVOID Object; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v39; // [rsp+38h] [rbp-A0h]
  _DWORD *v40; // [rsp+40h] [rbp-98h]
  struct _KTHREAD *v41; // [rsp+48h] [rbp-90h]
  _QWORD *v42; // [rsp+50h] [rbp-88h]
  __int64 v43; // [rsp+58h] [rbp-80h]
  _BYTE v44[48]; // [rsp+68h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0LL;
  v43 = a4;
  v40 = a3;
  v39 = a2;
  v41 = CurrentThread;
  v10 = ObReferenceObjectByHandle(a1, 0x1000u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
  v11 = Object;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
    v7 = 2 * (v13 & 1);
    if ( (v13 & 1) == 0 )
    {
      v12 = -1073741558;
      goto LABEL_43;
    }
    KiStackAttachProcess((_KPROCESS *)v11, 0LL, (__int64)v44);
    v14 = 0LL;
    v15 = 0LL;
    j = 0LL;
    v7 |= 4u;
    ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v11, 0);
    v42 = ProcessHotPatchContext;
    v8 = (unsigned __int64)ProcessHotPatchContext;
    if ( ProcessHotPatchContext )
    {
      v7 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      v18 = *(_QWORD *)(v8 + 8);
      if ( (v18 & 1) != 0 )
      {
        if ( v18 != 1 )
          j = v18 ^ (v8 | 1);
      }
      else
      {
        j = *(_QWORD *)(v8 + 8);
      }
      i = j;
      while ( i )
      {
        if ( *(_DWORD *)(i + 88) )
        {
          v14 = (unsigned int)(v14 + 1);
          v15 += *(unsigned __int16 *)(i + 64) + 24LL;
        }
        v20 = *(_QWORD ***)(i + 8);
        v21 = i;
        if ( v20 )
        {
          v22 = *v20;
          for ( i = *(_QWORD *)(i + 8); v22; v22 = (_QWORD *)*v22 )
            i = (unsigned __int64)v22;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v21 )
              break;
            v21 = i;
          }
        }
      }
    }
    v23 = v15 + 40;
    if ( a5 >= v23 )
    {
      v24 = v23;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v23, 0x71486D4Du);
      v26 = PoolWithTag;
      if ( !PoolWithTag )
      {
        CurrentThread = v41;
        v12 = -1073741670;
        goto LABEL_43;
      }
      memset(PoolWithTag, 0, 0x28uLL);
      *(_DWORD *)v26 = 2;
      *((_QWORD *)v26 + 1) = a1;
      if ( (_DWORD)v14 )
      {
        v27 = (unsigned int)v14;
        v28 = (UNICODE_STRING *)(v26 + 40);
        v29 = &v26[-v43];
        v30 = &v26[16 * v14 + 40];
        *((_QWORD *)v26 + 3) = v26 + 40;
        *((_QWORD *)v26 + 4) = v30;
        if ( j )
        {
          v31 = (wchar_t *)&v30[8 * v27];
          do
          {
            if ( *(_DWORD *)(j + 88) )
            {
              *(_QWORD *)v30 = *(_QWORD *)(j + 48);
              v32 = *(_WORD *)(j + 64);
              v28->Length = v32;
              v28->MaximumLength = v32;
              v28->Buffer = v31;
              RtlCopyUnicodeString(v28, (PCUNICODE_STRING)(j + 64));
              v28->Buffer = (wchar_t *)((char *)v28->Buffer - v29);
              v30 += 8;
              ++*((_DWORD *)v26 + 4);
              Length = v28->Length;
              ++v28;
              v31 = (wchar_t *)((char *)v31 + Length);
            }
            v34 = *(_QWORD ***)(j + 8);
            v35 = j;
            if ( v34 )
            {
              v36 = *v34;
              for ( j = *(_QWORD *)(j + 8); v36; v36 = (_QWORD *)*v36 )
                j = (unsigned __int64)v36;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v35 )
                  break;
                v35 = j;
              }
            }
          }
          while ( j );
          v30 = (char *)*((_QWORD *)v26 + 4);
          v28 = (UNICODE_STRING *)*((_QWORD *)v26 + 3);
          v11 = Object;
        }
        *((_QWORD *)v26 + 4) = v30 - v29;
        *((_QWORD *)v26 + 3) = (char *)v28 - v29;
        v8 = (unsigned __int64)v42;
      }
      *v39 = v26;
      *v40 = v24;
      CurrentThread = v41;
    }
    else
    {
      if ( v23 > 0xFFFFFFFF )
      {
        v12 = -1073741675;
        goto LABEL_43;
      }
      *v39 = 0LL;
      *v40 = v23;
    }
    v12 = 0;
  }
LABEL_43:
  if ( (v7 & 1) != 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 16));
    KeAbPostRelease(v8 + 16);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v11 = Object;
  }
  if ( v7 >= 4 )
    KiUnstackDetachProcess((__int64)v44, 0LL);
  if ( (v7 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v11 + 95);
  if ( v11 )
    ObfDereferenceObject(v11);
  return v12;
}
