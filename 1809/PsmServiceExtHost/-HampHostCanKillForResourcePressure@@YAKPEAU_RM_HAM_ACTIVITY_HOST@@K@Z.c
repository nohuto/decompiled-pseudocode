/*
 * XREFs of ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180017FFC
 * Callers:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B450 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180020A10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18006177C (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostCanKillForResourcePressure(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  if ( (*((_QWORD *)a1 + 79) & 0x2000000000000LL) != 0 )
  {
    FirstActivity = HampHostGetFirstActivity(a1);
    v7 = 0;
    while ( FirstActivity )
    {
      if ( (*((_DWORD *)FirstActivity + 28) & 0x200) != 0 )
        goto LABEL_12;
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    if ( (a2 & 1) == 0
      || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v11, (union _RM_OPTIMIZATION_STATE *)&v12),
          v11 < 0)
      && v12 >= 0 )
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
LABEL_12:
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v8 & 2) == 0 )
      __int2c();
    if ( v8[2]-- == 1LL )
      *v8 &= ~2uLL;
  }
  RtlReleaseSRWLockShared(a1);
  return v7;
}
