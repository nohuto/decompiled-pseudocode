/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x140304D7C
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140304838 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400B0BA0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401776A0 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x14019C8EC (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x1402F4BA4 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x1403068DC (PopPluginAcpiNotificationStrict.c)
 *     PoFxAbandonDevice @ 0x140730AC4 (PoFxAbandonDevice.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(char *P, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(P + 264);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(P + 264), (PVOID)0x72466F50, &Src, 1u, 0x20u);
  v6 = *((_QWORD *)P + 6);
  v7 = v5;
  if ( v6 )
    PoFxAbandonDevice();
  if ( *((char **)P + 25) != P + 200 )
    PopFxRemoveAcpiDevice(v6, (__int64)P);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*((_QWORD *)P + 10), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)P + 204, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)P);
  return v7;
}
