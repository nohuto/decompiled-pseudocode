/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x140729F9C
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140729E90 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x14072AD50 (SepRmDeleteLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1408D9F44 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408E115C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012CCF8 (SepDeleteSessionLowboxEntries.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x1405D11F0 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D7858 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1406D78C0 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObRevokeHandles @ 0x14072937C (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x1408E0938 (SepDeleteLogonSessionSidValues.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rbp
  __int64 v5; // r8
  _DWORD **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  _DWORD *i; // rbx
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  unsigned int v15; // ebx

  v2 = 0LL;
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (_DWORD **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_DWORD **)i )
  {
    if ( !i )
    {
      v15 = -1073741729;
      goto LABEL_26;
    }
    if ( *((_QWORD *)i + 20) == PsGetCurrentServerSilo() && *a1 == i[2] && a1[1] == i[3] )
      break;
    v6 = (_DWORD **)i;
  }
  if ( a2 )
  {
    i[8] |= 0x10u;
    ObRevokeHandles((_QWORD **)i + 16);
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v10 = *((_QWORD *)i + 3);
  if ( !v10 || (i[8] & 8) == 0 && v10 == 1 )
  {
    *v6 = *(_DWORD **)i;
    v11 = (void *)*((_QWORD *)i + 5);
    if ( v11 )
    {
      *((_QWORD *)i + 5) = 0LL;
      v2 = v11;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, *((struct _LIST_ENTRY **)i + 20));
      ObfDereferenceDeviceMap(v2);
    }
    v12 = (void *)*((_QWORD *)i + 20);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x734C6553u);
    v13 = (void *)*((_QWORD *)i + 8);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    SepDeleteLogonSessionClaims((__int64)i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock((struct _EX_RUNDOWN_REF *)i + 16);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v15 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v15;
}
