/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C004B5B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C0127A7C (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C00A2AA8 && !byte_1C00A2AA9 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C00A2AB8 + 3896), 2LL);
    if ( *(_BYTE *)(qword_1C00A2AB8 + 484) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C00A2AB8 + 24) + 64LL) + 4096LL));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C00A2AB8 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C00A2AB0 + 72), 0);
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
