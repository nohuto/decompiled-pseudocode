/*
 * XREFs of NtAlpcSetInformation @ 0x1406B1070
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406B146C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4C00 (AlpcpInitializeCompletionList.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1406D6050 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpFreeCompletionList @ 0x1406D69E0 (AlpcpFreeCompletionList.c)
 */

__int64 __fastcall NtAlpcSetInformation(HANDLE a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  NTSTATUS v8; // edi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // r13
  unsigned int *v11; // r12
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  _DWORD *v19; // rdi
  volatile signed __int64 *v20; // rsi
  ULONG_PTR v21; // rcx
  _QWORD *v22; // rdi
  volatile signed __int64 *v23; // rsi
  ULONG_PTR v24; // rcx
  _QWORD *v25; // rdi
  signed __int64 *v26; // rbx
  _QWORD *v27; // rsi
  volatile signed __int64 *v28; // rdi
  __int64 v29; // rdx
  __m128i v30; // xmm0
  NTSTATUS v31; // eax
  KPROCESSOR_MODE v33; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  __int64 *v37; // [rsp+50h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-98h] BYREF
  __int32 v39; // [rsp+68h] [rbp-90h]
  unsigned __int64 v40; // [rsp+6Ch] [rbp-8Ch]

  Handle = a1;
  v35 = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  if ( a1 && (v35 || a2 == 7 || a2 == 10) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v33 = PreviousMode;
    v10 = v35;
    v11 = (unsigned int *)v35;
    v37 = (__int64 *)v35;
    if ( a4 && PreviousMode )
    {
      if ( a4 > 0x48 )
      {
        v8 = -1073741820;
        goto LABEL_65;
      }
      if ( v35 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v35 = v10;
      memmove(&v38, (const void *)v10, a4);
      v11 = (unsigned int *)&v38;
      v37 = &v38;
      a1 = Handle;
    }
    v8 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v8 < 0 )
      goto LABEL_65;
    v12 = a2 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( !v14 )
        {
          v8 = a4 != 16 ? 0xC000000D : 0;
          goto LABEL_64;
        }
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
            {
              if ( a4 == 4 && *v11 )
              {
                v25 = Object;
                v26 = (signed __int64 *)((char *)Object + 352);
                ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
                if ( v25[45] )
                {
                  AlpcpAdjustCompletionListConcurrencyCount(v25, *v11);
                  v8 = 0;
                }
                else
                {
                  v8 = -1073741811;
                }
                if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v26);
                v21 = (ULONG_PTR)v26;
                goto LABEL_29;
              }
LABEL_52:
              v8 = -1073741811;
              goto LABEL_64;
            }
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 == 1 && !a4 )
              {
                v19 = Object;
                v20 = (volatile signed __int64 *)((char *)Object + 352);
                ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
                if ( *((_QWORD *)v19 + 45) )
                {
                  v19[104] &= ~0x10000u;
                  v8 = 0;
                }
                else
                {
                  v8 = -1073741811;
                }
                if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v20);
                v21 = (ULONG_PTR)v20;
LABEL_29:
                KeAbPostRelease(v21);
LABEL_64:
                ObfDereferenceObject(Object);
                goto LABEL_65;
              }
              goto LABEL_52;
            }
            if ( v33 )
              goto LABEL_52;
            ObfReferenceObject(*(PVOID *)v10);
            v22 = Object;
            v23 = (volatile signed __int64 *)((char *)Object + 352);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
            v22[46] = *(_QWORD *)v10;
            v22[47] = *(_QWORD *)(v10 + 8);
            if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v23);
            v24 = (ULONG_PTR)v23;
          }
          else
          {
            if ( a4 )
              goto LABEL_52;
            v27 = Object;
            v28 = (volatile signed __int64 *)((char *)Object + 352);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
            if ( v27[45] )
              AlpcpFreeCompletionList(v27);
            if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v28);
            v24 = (ULONG_PTR)v28;
          }
          KeAbPostRelease(v24);
          v8 = 0;
          goto LABEL_64;
        }
        if ( (*((_DWORD *)Object + 104) & 6) != 2 )
          goto LABEL_52;
        if ( a4 == 16 )
        {
          v30 = *(__m128i *)v11;
          v11 = (unsigned int *)&v38;
          v29 = v30.m128i_u32[0];
          v38 = v30.m128i_u32[0];
          v39 = v30.m128i_i32[1];
          v40 = _mm_srli_si128(v30, 8).m128i_u64[0];
          v7 = 1;
        }
        else
        {
          if ( a4 != 24 )
            goto LABEL_52;
          v29 = *(_QWORD *)v11;
        }
        v31 = AlpcpInitializeCompletionList(Object, v29, v11[2], v11[3], v11[4], v7);
LABEL_59:
        v8 = v31;
        goto LABEL_64;
      }
      if ( a4 == 16 )
      {
        v31 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v11 + 1), *(_QWORD *)v11);
        goto LABEL_59;
      }
    }
    else if ( a4 == 72 )
    {
      if ( (*v11 & 0xFC00FFFF) == 0 )
      {
        *((_DWORD *)Object + 64) ^= (*v11 ^ *((_DWORD *)Object + 64)) & 0x20000;
        goto LABEL_64;
      }
      goto LABEL_52;
    }
    v8 = -1073741820;
    goto LABEL_64;
  }
  v8 = -1073741811;
LABEL_65:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
