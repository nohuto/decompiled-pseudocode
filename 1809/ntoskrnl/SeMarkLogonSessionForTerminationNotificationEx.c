/*
 * XREFs of SeMarkLogonSessionForTerminationNotificationEx @ 0x1406D13B0
 * Callers:
 *     SeMarkLogonSessionForTerminationNotification @ 0x1406D1390 (SeMarkLogonSessionForTerminationNotification.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall SeMarkLogonSessionForTerminationNotificationEx(_DWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp

  v3 = *a1 & 0xF;
  v5 = SepLogonSessions + 8 * v3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( !v5 )
      break;
    if ( (*(_QWORD *)(v5 + 160) == a2 || !a2) && *a1 == *(_DWORD *)(v5 + 8) && a1[1] == *(_DWORD *)(v5 + 12) )
    {
      *(_DWORD *)(v5 + 32) |= 1u;
      break;
    }
  }
  ExReleaseResourceLite(v7);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5 == 0 ? 0xC0000225 : 0;
}
