/*
 * XREFs of ExCreateCallback @ 0x1406CB620
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 *     KeRegisterProcessorChangeCallback @ 0x14075AEA0 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterBootDriverCallback @ 0x140764480 (IoRegisterBootDriverCallback.c)
 *     KiFilterFiberContext @ 0x14098FB60 (KiFilterFiberContext.c)
 *     PipCslCreateCallback @ 0x1409ABDB0 (PipCslCreateCallback.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     ExpInitializeCallbacks @ 0x1409DA2E4 (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x1409DCCC0 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1409DD8CC (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x1409DFC58 (IopInitializeSessionNotifications.c)
 *     ExInitLicenseCallback @ 0x1409E0480 (ExInitLicenseCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x140177718 (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rsi
  HANDLE v5; // rdi
  __m128i v6; // xmm1
  __int128 v8; // xmm0
  __int128 v11; // xmm0
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  char *v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  NTSTATUS inserted; // eax
  PVOID *Object; // [rsp+20h] [rbp-39h]
  PVOID v20; // [rsp+50h] [rbp-9h] BYREF
  PVOID v21; // [rsp+58h] [rbp-1h] BYREF
  __int128 v22; // [rsp+60h] [rbp+7h] BYREF
  __m128i v23; // [rsp+70h] [rbp+17h]
  __int128 v24; // [rsp+80h] [rbp+27h]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *(__m128i *)&ObjectAttributes->ObjectName;
  v20 = 0LL;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  v23 = v6;
  Handle = 0LL;
  v22 = v8;
  v11 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v23.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) | 0x200;
  v24 = v11;
  if ( v6.m128i_i64[0] )
  {
    v12 = ObOpenObjectByName((__int64)&v22, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, (__int64)&Handle);
    v5 = Handle;
    v13 = v12;
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v13 >= 0 )
    goto LABEL_6;
  if ( Create )
  {
    v13 = ObCreateObjectEx(0, ExCallbackObjectType, (int)&v22, 0, (__int64)Object, 56, 0, 0, &v20, 0LL);
    if ( v13 < 0 )
      return v13;
    v15 = (char *)v20;
    *(_DWORD *)v20 = 1819042115;
    v15[32] = AllowMultipleCallbacks;
    *((_QWORD *)v15 + 3) = v15 + 16;
    *((_QWORD *)v15 + 2) = v15 + 16;
    *((_QWORD *)v15 + 1) = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
    v16 = (_QWORD *)qword_14040AA28;
    v17 = v15 + 40;
    if ( *(__int64 **)qword_14040AA28 != &ExpCallbackListHead )
      __fastfail(3u);
    *((_QWORD *)v15 + 6) = qword_14040AA28;
    *v17 = &ExpCallbackListHead;
    *v16 = v17;
    qword_14040AA28 = (__int64)(v15 + 40);
    ExpUnlockCallbackListExclusive((__int64)CurrentThread);
    inserted = ObInsertObjectEx(v15, 0LL, 1LL, 0, 0, 0LL, (unsigned __int64 *)&Handle);
    v5 = Handle;
    v13 = inserted;
  }
  if ( v13 >= 0 )
  {
LABEL_6:
    v13 = ObReferenceObjectByHandle(v5, 0, ExCallbackObjectType, 0, &v21, 0LL);
    ZwClose(v5);
    if ( v13 >= 0 )
      *CallbackObject = (PCALLBACK_OBJECT)v21;
  }
  return v13;
}
