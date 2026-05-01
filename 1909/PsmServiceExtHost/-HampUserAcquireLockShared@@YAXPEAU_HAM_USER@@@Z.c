/*
 * XREFs of ?HampUserAcquireLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x18003A9D0
 * Callers:
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003A940 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampUserAcquireLockShared(struct _HAM_USER *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x80uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockShared((char *)a1 + 168);
}
