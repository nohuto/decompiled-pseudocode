/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C0044EA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C008EAA8 && !byte_1C008EAA9 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C008EAB8 + 3792), 2LL);
    if ( *(_BYTE *)(qword_1C008EAB8 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(qword_1C008EAB8 + 3816), 4023LL);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C008EAB8 + 24) + 64LL) + 3992LL));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C008EAB8 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C008EAB0 + 72), 0);
    _InterlockedExchange64(&qword_1C008E788, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
