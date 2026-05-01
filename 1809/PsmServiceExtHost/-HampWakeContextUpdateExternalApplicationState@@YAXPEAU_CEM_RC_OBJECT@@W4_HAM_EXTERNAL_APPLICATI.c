/*
 * XREFs of ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013DE8
 * Callers:
 *     ?HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013DA4 (-HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATI.c)
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013EA4 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampWakeContextUpdateExternalApplicationState(__int64 a1, char a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive(a1 + 40);
  *(_DWORD *)(a1 + 48) = GetCurrentThreadId();
  *(_BYTE *)(a1 + 184) &= 0xC7u;
  *(_BYTE *)(a1 + 185) |= 0x10u;
  *(_BYTE *)(a1 + 184) |= 8 * (a2 & 7);
  HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)a1);
  CempLockTrackerMarkReleased(v7, v6, 11LL);
  *(_DWORD *)(a1 + 48) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 40);
}
