/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C664
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180019680 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempListEntryIsNull @ 0x18000C754 (CempListEntryIsNull.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000C770 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003D798 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800689D0 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18006FFF4 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(_QWORD *P)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  ExecutionModel::ExternalResourceSet *v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v2 = (_QWORD *)(*(_QWORD *)(P[6] + 2624LL) + 88LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v5 = (ExecutionModel::ExternalResourceSet *)v3[4];
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (_QWORD *)*((_QWORD *)v5 + 167);
    v3 = (_QWORD *)*v3;
    if ( P == v6 )
    {
      if ( v6 )
      {
        RmpObjectRelease(v6);
        *((_QWORD *)v5 + 167) = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v5 + 56LL))(v5) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v5);
      else
        ExecutionModel::ExternalResourceSet::Revoke(v5, 1);
    }
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  P[170] = 0LL;
  P[171] = 0LL;
  *((_DWORD *)P + 344) = 0;
  RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)P, 2u);
  if ( (*((_BYTE *)P + 836) & 1) == 0 )
    RmpActivityHostComputeAndApplyEnforcementSettings((char *)P);
  if ( !(unsigned int)CempListEntryIsNull(P + 159) )
  {
    v7 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v4 = 0LL;
    v4[1] = 0LL;
    RmpObjectRelease(P);
  }
  if ( P[178] )
    RmpActivityHostRemoveFromRemediationGroup(P, 1u);
  else
    SetEvent(*(HANDLE *)(P[7] + 80LL));
  RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)P);
}
