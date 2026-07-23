/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x140918AB0
 * Callers:
 *     ExpWnfGenerateStateName @ 0x140658450 (ExpWnfGenerateStateName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008D060 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063F8A0 (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(struct _LIST_ENTRY *a1, unsigned __int64 *a2)
{
  int v3; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  struct _LIST_ENTRY *v5; // r12
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v7; // rbx
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rsi
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rsi
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // r14
  unsigned __int64 v14; // r8
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  __int64 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h]

  KeyHandle = 0LL;
  v3 = 0;
  KeyValueInformation = 0LL;
  NameStoreRegistryRoot = 0;
  v20 = 0uLL;
  v5 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (char *)(CurrentServerSiloGlobals + 113);
  Data = CurrentServerSiloGlobals[118];
  if ( Data )
    goto LABEL_13;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_33;
  v8 = KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, v8, (ULONG_PTR)(v7 + 32));
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v3 = 1;
  if ( *((_QWORD *)v7 + 5) )
    goto LABEL_13;
  v10 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741772 )
      goto LABEL_30;
    do
LABEL_13:
      v11 = _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    while ( !v11 );
    Data = *((_QWORD *)v7 + 5);
    if ( v11 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_29;
      }
      if ( !v3 )
      {
        v12 = KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
        v13 = v12;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, v12, (ULONG_PTR)(v7 + 32));
        if ( v13 )
          BYTE2(v13[1].Left) |= 1u;
        v3 = 1;
      }
      if ( v11 <= *((_QWORD *)v7 + 5) )
        goto LABEL_28;
      v14 = *((_QWORD *)v7 + 5) + 100LL;
      Data = v14;
      if ( v14 < v11 )
        Data = v14 + 100 * ((v11 - v14 - 1) / 0x64 + 1);
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_29:
        if ( !v3 )
          goto LABEL_33;
        goto LABEL_30;
      }
      _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    }
LABEL_28:
    *a2 = v11;
    goto LABEL_29;
  }
  if ( (_DWORD)v20 == 8 )
  {
    Data = *(_QWORD *)((char *)&v20 + 4);
    _InterlockedExchange64((volatile __int64 *)v7 + 3, *(__int64 *)((char *)&v20 + 4));
    _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    goto LABEL_13;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7 + 4);
  KeAbPostRelease((ULONG_PTR)(v7 + 32));
LABEL_33:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
