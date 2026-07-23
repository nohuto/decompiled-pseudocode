/*
 * XREFs of CmEnumerateValueKey @ 0x1405D5080
 * Callers:
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1405D040C (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpQueryKeyValueData @ 0x1405D2B30 (CmpQueryKeyValueData.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407EE550 (CmEnumerateValueFromLayeredKey.c)
 */

__int64 __fastcall CmEnumerateValueKey(_QWORD *a1, unsigned int a2, int a3, _DWORD *a4, unsigned int a5, __int64 a6)
{
  char v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  ULONG_PTR v12; // rbx
  __int64 v13; // rbp
  int KeyValueData; // esi
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned int v17; // esi
  __int64 v18; // rdi
  __int64 v19; // rcx
  ULONG_PTR v21; // rcx
  __int64 KeyNodeForKcb; // rdi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // [rsp+40h] [rbp-98h] BYREF
  __int64 v26; // [rsp+48h] [rbp-90h] BYREF
  __int64 v27; // [rsp+50h] [rbp-88h] BYREF
  __int64 v28; // [rsp+58h] [rbp-80h] BYREF
  __int64 v29; // [rsp+60h] [rbp-78h]
  _BYTE v30[48]; // [rsp+68h] [rbp-70h] BYREF

  v26 = 0xFFFFFFFFLL;
  v9 = 0;
  v25 = 0xFFFFFFFFLL;
  v27 = 0xFFFFFFFFLL;
  v10 = a2;
  v29 = a6;
  v28 = 0LL;
  CmpAttachToRegistryProcess((__int64)v30);
  CmpLockRegistry(v11);
  v12 = a1[1];
  if ( *(_WORD *)(v12 + 58) )
  {
    KeyValueData = CmEnumerateValueFromLayeredKey((_DWORD)a1, v10, a3, (_DWORD)a4, a5, a6);
  }
  else
  {
    ExAcquirePushLockSharedEx(v12 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    v13 = v28;
    while ( 1 )
    {
      KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( KeyValueData < 0 )
        break;
      if ( a1[7] || a1[8] )
      {
        KeyValueData = CmpTransSearchAddTransFromKeyBody(a1, &v28);
        if ( KeyValueData < 0 )
          break;
        v13 = v28;
        KeyValueData = CmpPerformKeyBodyDeletionCheck(a1, v28);
        if ( KeyValueData < 0 )
          break;
      }
      if ( v13 && v13 == *(_QWORD *)(v12 + 280) )
      {
        if ( (unsigned int)v10 >= *(_DWORD *)(v12 + 272) )
        {
LABEL_16:
          KeyValueData = -2147483622;
          break;
        }
        v15 = *(unsigned int *)(v12 + 276);
        goto LABEL_10;
      }
      if ( (unsigned int)v10 >= *(_DWORD *)(v12 + 88) )
        goto LABEL_16;
      if ( (*(_DWORD *)(v12 + 4) & 8) == 0 )
        goto LABEL_9;
      if ( v9 || CmpTryConvertKcbLockSharedToExclusive(v12) )
      {
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v12, (__int64)&v26, 0);
        CmpCleanUpKcbValueCache(v12);
        v23 = *(_DWORD *)(KeyNodeForKcb + 36);
        *(_QWORD *)(v12 + 96) = *(unsigned int *)(KeyNodeForKcb + 40);
        v24 = *(_QWORD *)(v12 + 24);
        *(_DWORD *)(v12 + 88) = v23;
        (*(void (__fastcall **)(__int64, __int64 *))(v24 + 16))(v24, &v26);
LABEL_9:
        v15 = *(unsigned int *)(v12 + 96);
LABEL_10:
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v12 + 24) + 8LL))(
                *(_QWORD *)(v12 + 24),
                v15,
                &v25);
        v17 = *(_DWORD *)(v16 + 4 * v10);
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v12 + 24) + 8LL))(
                *(_QWORD *)(v12 + 24),
                v17,
                &v27);
        KeyValueData = CmpQueryKeyValueData(v12, v17, v18, a3, a4, a5, (int *)v29);
        if ( v18 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v12 + 24) + 16LL))(*(_QWORD *)(v12 + 24), &v27);
        if ( v16 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v12 + 24) + 16LL))(*(_QWORD *)(v12 + 24), &v25);
        break;
      }
      CmpUnlockKcb(v21);
      CmpLockKcbExclusive(v12);
      v9 = 1;
    }
    CmpUnlockKcb(v12);
  }
  CmpUnlockRegistry(v19);
  KiUnstackDetachProcess((__int64)v30, 0LL);
  return (unsigned int)KeyValueData;
}
