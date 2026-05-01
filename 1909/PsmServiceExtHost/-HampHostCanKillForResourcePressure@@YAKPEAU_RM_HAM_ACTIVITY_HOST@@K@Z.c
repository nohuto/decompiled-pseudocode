/*
 * XREFs of ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001AED8
 * Callers:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001DD90 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180022DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18006E6E8 (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostCanKillForResourcePressure(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  unsigned int v6; // ebx
  struct _HAM_ACTIVITY *NextActivity; // rcx
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
  v6 = 0;
  if ( (*((_QWORD *)a1 + 81) & 0x2000000000000LL) != 0 )
  {
    NextActivity = (struct _HAM_ACTIVITY *)((*((_QWORD *)a1 + 75) - 96LL) & -(__int64)(*((_QWORD *)a1 + 75) != (_QWORD)a1 + 600));
    if ( NextActivity )
    {
      while ( (*((_DWORD *)NextActivity + 28) & 0x200) == 0 )
      {
        NextActivity = HampHostGetNextActivity(NextActivity);
        if ( !NextActivity )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( (a2 & 1) == 0
        || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v11, (union _RM_OPTIMIZATION_STATE *)&v12),
            v11 < 0)
        && v12 >= 0 )
      {
        v6 = 1;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v8 & 2) == 0 )
      __int2c();
    if ( v8[2]-- == 1LL )
      *v8 &= ~2uLL;
  }
  RtlReleaseSRWLockShared(a1);
  return v6;
}
