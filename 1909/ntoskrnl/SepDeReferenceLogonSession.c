/*
 * XREFs of SepDeReferenceLogonSession @ 0x1406D73DC
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x140079A94 (SepDeReferenceLogonSessionDirect.c)
 *     SepDeReferenceLogonSession @ 0x1406D73DC (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012D7C8 (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1405B5764 (SepInformFileSystemsOfDeletedLogon.c)
 *     ObfDereferenceDeviceMap @ 0x1405D16F0 (ObfDereferenceDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1406D73DC (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406D75B0 (SepInformLsaOfDeletedLogon.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D7638 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1406D76A0 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepDeleteLogonSessionSidValues @ 0x1408E0238 (SepDeleteLogonSessionSidValues.c)
 */

void __fastcall SepDeReferenceLogonSession(__int64 a1, struct _LIST_ENTRY *a2)
{
  __int64 v4; // r8
  __int64 **v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rsi
  __int64 *i; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rsi
  void *v12; // rcx

  v4 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (__int64 **)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (struct _LIST_ENTRY *)i[20] == a2
      && *(_DWORD *)a1 == *((_DWORD *)i + 2)
      && *(_DWORD *)(a1 + 4) == *((_DWORD *)i + 3) )
    {
      break;
    }
    v5 = (__int64 **)i;
  }
  v9 = _InterlockedDecrement64(i + 3);
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = (__int64 *)*i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (i[4] & 4) != 0 && (*((_DWORD *)i + 4) || *((_DWORD *)i + 5)) )
      SepDeReferenceLogonSession(i + 2, i[20]);
    v10 = (void *)i[6];
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      i[6] = 0LL;
    }
    v11 = (void *)i[5];
    if ( v11 )
    {
      i[5] = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObfDereferenceDeviceMap(v11);
    }
    if ( (i[4] & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon((struct _LIST_ENTRY **)a1, a2);
    v12 = (void *)i[8];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    SepInformLsaOfDeletedLogon(a1, i[20], i);
    SepDeleteSessionLowboxEntries();
  }
}
