/*
 * XREFs of IovpLocalCompletionRoutine @ 0x1409256E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfIoCompletionCheckState @ 0x14092A09C (VfIoCompletionCheckState.c)
 *     ViIoCallbackSnapState @ 0x14092A144 (ViIoCallbackSnapState.c)
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x1409309A8 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140930A30 (IovpCompleteRequest4.c)
 *     VfPendingMoreProcessingRequired @ 0x140934880 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093F3A4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x140940370 (IovpSessionDataDereference.c)
 */

__int64 __fastcall IovpLocalCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  char v7; // r9
  char v8; // al
  __int64 v9; // rdx
  unsigned int v10; // r14d
  void *v11; // r15
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // rbx
  __int64 v13; // r14
  __int64 v14; // rbx
  void *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rdi
  char v18; // al
  char v20; // [rsp+68h] [rbp+10h]
  char v21; // [rsp+70h] [rbp+18h]

  v4 = *a3;
  v7 = *(_BYTE *)(*a3 + 3);
  *(_BYTE *)(v4 + 1) = *((_BYTE *)a3 + 33);
  *(_BYTE *)(v4 + 2) = *((_BYTE *)a3 + 34);
  *(_BYTE *)(v4 + 3) = v7 & 2 | *((_BYTE *)a3 + 35);
  *(_QWORD *)(v4 + 8) = a3[5];
  *(_QWORD *)(v4 + 16) = a3[6];
  *(_QWORD *)(v4 + 24) = a3[7];
  *(_QWORD *)(v4 + 32) = a3[8];
  *(_QWORD *)(v4 + 48) = a3[10];
  *(_QWORD *)(v4 + 56) = a3[3];
  *(_QWORD *)(v4 + 64) = a3[1];
  v21 = *(_BYTE *)(a2 + 66) + 1;
  v20 = *(_BYTE *)(a2 + 67);
  IovpCompleteRequest2(a2, a3[2]);
  if ( *(_BYTE *)v4 != 22 )
  {
    v8 = *(_BYTE *)(v4 + 3) & 2;
    *(_WORD *)(v4 + 1) = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)(v4 + 3) = v8 | 0x10;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  v9 = *(_QWORD *)(v4 + 56);
  if ( v9 )
  {
    IovpCompleteRequest3(a2, v9, a3[2]);
    if ( (MmVerifierData & 0x10) != 0 && ViIoCallbacksInitialized )
      v11 = (void *)ViIoCallbackSnapState();
    else
      v11 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v4 + 56);
    v13 = *(_QWORD *)(v4 + 64);
    if ( (unsigned int)VfPendingMoreProcessingRequired(a1, a2, v4, (_DWORD)v12, v13) )
    {
      v10 = -1073741802;
      v12 = (__int64 (__fastcall *)(__int64, __int64, __int64))VfPendingMoreProcessingRequired;
    }
    else
    {
      v10 = v12(a1, a2, v13);
    }
    if ( v11 )
      VfIoCompletionCheckState(v11);
    IovpCompleteRequest4(a2, v10, v12, a3[2]);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v10 = (unsigned int)VfPendingMoreProcessingRequired(a1, a2, v4, 0, *(_QWORD *)(v4 + 64)) != 0 ? 0xC0000016 : 0;
  }
  v14 = a3[2];
  v15 = *(void **)v14;
  if ( *(_QWORD *)v14 )
  {
    v16 = *(_QWORD *)(v14 + 8);
    *(_BYTE *)(v16 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 8));
    IovpSessionDataDereference(v15);
    _InterlockedDecrement((volatile signed __int32 *)(v16 + 20));
    VfIrpDatabaseEntryReleaseLock(v16);
  }
  if ( v10 != -1073741802 && v20 != v21 )
  {
    v17 = v4 + 72;
    *a3 = v17;
    a3[1] = *(_QWORD *)(v17 + 64);
    *((_OWORD *)a3 + 2) = *(_OWORD *)v17;
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v17 + 16);
    *((_OWORD *)a3 + 4) = *(_OWORD *)(v17 + 32);
    *((_OWORD *)a3 + 5) = *(_OWORD *)(v17 + 48);
    a3[12] = *(_QWORD *)(v17 + 64);
    v18 = *(_BYTE *)(v17 + 3);
    if ( *(int *)(a2 + 48) < 0 )
    {
      if ( v18 < 0 )
        goto LABEL_24;
    }
    else if ( (v18 & 0x40) != 0 )
    {
      goto LABEL_24;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v18 & 0x20) == 0 )
    {
      a3[3] = 0LL;
      *(_BYTE *)(v17 + 3) |= 0xE0u;
      goto LABEL_25;
    }
LABEL_24:
    a3[3] = *(_QWORD *)(v17 + 56);
LABEL_25:
    *(_QWORD *)(v17 + 64) = a3;
    *(_QWORD *)(v17 + 56) = IovpLocalCompletionRoutine;
  }
  return v10;
}
