/*
 * XREFs of ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000DAFC
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180021B80 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000DC68 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180012790 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  int v2; // edi
  int v4; // esi
  unsigned __int8 v6; // al
  char v7; // cl
  DWORD v8; // ebp
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v11; // ecx
  _QWORD *v12; // rax
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 6);
  v4 = *((_DWORD *)a1 + 284);
  if ( v4 < 1 == v2 < 1 || (result = RmpSystemApplyPsmPriorityToHost(), (int)result >= 0) )
  {
    v6 = v2 >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0;
    v7 = v4 >= 2 && (*((_BYTE *)a1 + 1140) & 2) != 0;
    if ( v6 != v7 )
      RmHamHostActOnProcesses(a1, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)v6);
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 64);
    CurrentThreadId = GetCurrentThreadId();
    v11 = HampLockTrackerId;
    *((_DWORD *)a1 + 18) = CurrentThreadId;
    *((_DWORD *)a1 + 284) = *((_DWORD *)a2 + 6);
    *((_BYTE *)a1 + 1140) ^= (*((_BYTE *)a1 + 1140) ^ *((_BYTE *)a2 + 28)) & 2;
    if ( v11 != -1 )
    {
      v12 = TlsGetValue(v11);
      if ( (*(_BYTE *)v12 & 2) == 0 )
        __int2c();
      if ( v12[2]-- == 1LL )
        *v12 &= ~2uLL;
    }
    *((_DWORD *)a1 + 18) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 64);
    return 0LL;
  }
  return result;
}
