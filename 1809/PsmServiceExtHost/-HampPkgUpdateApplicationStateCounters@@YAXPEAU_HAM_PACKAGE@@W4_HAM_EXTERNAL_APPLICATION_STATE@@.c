/*
 * XREFs of ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180013FEC
 * Callers:
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180008814 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013EEC (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     ?HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013C48 (-HampPkgIssueStateChangeNotification@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampPkgUpdateApplicationStateCounters(__int64 a1, int a2, int a3)
{
  DWORD v3; // esi
  __int64 v5; // r14
  __int64 v6; // rbp
  _QWORD *Value; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _DWORD *v11; // rax

  v3 = HampLockTrackerId;
  v5 = a3;
  v6 = a2;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockExclusive(a1 + 304);
  *(_DWORD *)(a1 + 312) = GetCurrentThreadId();
  if ( (_DWORD)v5 != 4 )
    --*(_DWORD *)(a1 + 4 * v5 + 344);
  if ( (_DWORD)v6 != 4 )
    ++*(_DWORD *)(a1 + 4 * v6 + 344);
  v10 = 0;
  v11 = (_DWORD *)(a1 + 344);
  do
  {
    if ( *v11 )
      break;
    ++v10;
    ++v11;
  }
  while ( v10 < 4 );
  if ( v10 == 4 )
    v10 = 3;
  if ( ((*(_DWORD *)(a1 + 340) >> 4) & 7) != v10 )
  {
    HampPkgIssueStateChangeNotification(a1, v10);
    *(_DWORD *)(a1 + 340) ^= (*(_DWORD *)(a1 + 340) ^ (16 * v10)) & 0x70;
  }
  CempLockTrackerMarkReleased(v9, v8, 6LL);
  *(_DWORD *)(a1 + 312) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 304);
}
