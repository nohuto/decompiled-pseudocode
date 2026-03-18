/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x1402E86B0
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1402E8130 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400FE2F0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14016D020 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x1402D7C00 (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x1402D9234 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x1402E9214 (PopPluginAcpiNotificationStrict.c)
 *     PoFxAbandonDevice @ 0x1406ED028 (PoFxAbandonDevice.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(char *P, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(P + 256);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)P + 8, (PVOID)0x72466F50, &File, 1u, 0x20u);
  v6 = *((_QWORD *)P + 6);
  v7 = v5;
  if ( v6 )
    PoFxAbandonDevice();
  if ( *((char **)P + 24) != P + 192 )
    PopFxRemoveAcpiDevice(v6, (__int64)P);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*((_QWORD *)P + 10), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)P + 202, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)P);
  return v7;
}
