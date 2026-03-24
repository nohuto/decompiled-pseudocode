/*
 * XREFs of PopFxUnregisterDevice @ 0x14086A7AC
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x1406EF00C (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x1408695B0 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PoFxActivateComponent @ 0x1400FE090 (PoFxActivateComponent.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14016D040 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxAssignDeviceToDevNode @ 0x140179CFC (PopFxAssignDeviceToDevNode.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7D34 (PopFxDestroyDeviceDpm.c)
 *     PopFxRemoveDevice @ 0x1402D93D4 (PopFxRemoveDevice.c)
 *     PopPluginUnregisterDevice @ 0x1402DAC0C (PopPluginUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x14086DF1C (PopPepUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140872AD8 (PopDiagTraceFxDeviceUnregistration.c)
 */

void __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  unsigned int i; // edi
  __int64 v4; // rdi
  struct _KEVENT *v5; // rdi
  __int64 j; // r8
  ULONG_PTR v7; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 808) & 1) == 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 812);
    for ( i = 0; i < v2; ++i )
    {
      PoFxActivateComponent(BugCheckParameter2, i, 2LL);
      v2 = *(_DWORD *)(BugCheckParameter2 + 812);
    }
    v4 = 0LL;
    if ( v2 )
    {
      do
      {
        KeWaitForSingleObject(
          (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 816) + 8 * v4) + 104LL),
          Executive,
          0,
          0,
          0LL);
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(BugCheckParameter2 + 812) );
    }
  }
  v5 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v5 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2);
    PopDiagTraceFxDeviceUnregistration(v5);
    PopFxAssignDeviceToDevNode((__int64)v5, 0LL);
  }
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(BugCheckParameter2 + 812); j = (unsigned int)(j + 1) )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 816) + 8 * j) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 224), 0LL, 0x20u);
  PopPepUnregisterDevice(*(PVOID *)(BugCheckParameter2 + 56));
  v7 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v7 )
    PopPluginUnregisterDevice(v7, *(_QWORD *)(BugCheckParameter2 + 72));
  if ( v5 )
    KeSetEvent(v5 + 4, 0, 0);
  if ( (*(_DWORD *)(BugCheckParameter2 + 808) & 1) != 0 )
    PopFxDestroyDeviceDpm((__int64)v5, BugCheckParameter2);
}
