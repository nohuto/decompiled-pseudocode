/*
 * XREFs of ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180038AE0
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180037E64 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180038C44 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  int v2; // edi
  int v4; // esi
  __int64 result; // rax
  unsigned __int8 v7; // al
  char v8; // cl
  DWORD v9; // ebp
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v12; // ecx
  _QWORD *v13; // rax

  v2 = *((_DWORD *)a2 + 6);
  v4 = *((_DWORD *)a1 + 298);
  if ( v4 < 1 == v2 < 1 || (result = RmpSystemApplyPsmPriorityToHost(), (int)result >= 0) )
  {
    v7 = v2 >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0;
    v8 = v4 >= 2 && (*((_BYTE *)a1 + 1196) & 2) != 0;
    if ( v7 != v8 )
      RmHamHostActOnProcesses(a1, 0x2000, 1, RmpEnforcementApplyForegroundBoost, (void *)v7);
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 64);
    CurrentThreadId = GetCurrentThreadId();
    v12 = HampLockTrackerId;
    *((_DWORD *)a1 + 18) = CurrentThreadId;
    *((_DWORD *)a1 + 298) = *((_DWORD *)a2 + 6);
    *((_BYTE *)a1 + 1196) ^= (*((_BYTE *)a1 + 1196) ^ *((_BYTE *)a2 + 28)) & 2;
    if ( v12 != -1 )
    {
      v13 = TlsGetValue(v12);
      if ( (*(_BYTE *)v13 & 2) == 0 )
        __int2c();
      if ( v13[2]-- == 1LL )
        *v13 &= ~2uLL;
    }
    *((_DWORD *)a1 + 18) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 64);
    return 0LL;
  }
  return result;
}
