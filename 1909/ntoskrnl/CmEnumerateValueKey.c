/*
 * XREFs of CmEnumerateValueKey @ 0x140660F30
 * Callers:
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     PsBoostThreadIo @ 0x14003DCF0 (PsBoostThreadIo.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpQueryKeyValueData @ 0x140661170 (CmpQueryKeyValueData.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14082750C (CmEnumerateValueFromLayeredKey.c)
 */

__int64 __fastcall CmEnumerateValueKey(__int64 a1, unsigned int a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v8; // rsi
  _KPROCESS *Process; // rcx
  ULONG_PTR v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // esi
  __int64 v15; // rdi
  int KeyValueData; // ebp
  __int64 v17; // rdx
  __int64 v19; // r13
  __int64 v20; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  __int64 v22; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v23[48]; // [rsp+58h] [rbp-70h] BYREF

  v8 = a2;
  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  Process = (_KPROCESS *)qword_140463548;
  v21 = 0xFFFFFFFFLL;
  v20 = 0xFFFFFFFFLL;
  if ( !qword_140463548 )
    Process = KeGetCurrentThread()->ApcState.Process;
  KiStackAttachProcess(Process, 0, (__int64)v23);
  CmpLockRegistry();
  v11 = *(_QWORD *)(a1 + 8);
  if ( !*(_WORD *)(v11 + 66) )
  {
    ExAcquirePushLockSharedEx(v11 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 56));
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
        KeyValueData = -1073740763;
      else
        KeyValueData = -1073741444;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
        goto LABEL_7;
      KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v22);
      if ( KeyValueData >= 0 )
      {
        v19 = v22;
        KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, v22);
        if ( KeyValueData >= 0 )
        {
          if ( v19 )
          {
            v12 = 280LL;
            if ( v19 == *(_QWORD *)(v11 + 288) )
            {
LABEL_8:
              if ( (unsigned int)v8 >= *(_DWORD *)(v12 + v11) )
              {
                KeyValueData = -2147483622;
              }
              else
              {
                v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v11 + 32) + 8LL))(
                        *(_QWORD *)(v11 + 32),
                        *(unsigned int *)(v12 + v11 + 4),
                        &v21);
                v14 = *(_DWORD *)(v13 + 4 * v8);
                v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v11 + 32) + 8LL))(
                        *(_QWORD *)(v11 + 32),
                        v14,
                        &v20);
                KeyValueData = CmpQueryKeyValueData(v11, v14, v15, a3, a4, a5, a6);
                if ( v15 )
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v11 + 32) + 16LL))(
                    *(_QWORD *)(v11 + 32),
                    &v20);
                if ( v13 )
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v11 + 32) + 16LL))(
                    *(_QWORD *)(v11 + 32),
                    &v21);
              }
              goto LABEL_13;
            }
          }
LABEL_7:
          v12 = 96LL;
          goto LABEL_8;
        }
      }
    }
LABEL_13:
    CmpUnlockKcb(v11);
    goto LABEL_14;
  }
  KeyValueData = CmEnumerateValueFromLayeredKey(a1, v8, a3, a4, a5, a6);
LABEL_14:
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v17) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v17);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
  return (unsigned int)KeyValueData;
}
