/*
 * XREFs of ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800018AC
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180021B80 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x180001A00 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001AB0 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180001C3C (-RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmpQoSEnableDisableForHost(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  struct _RM_QOS_CONTEXT *v3; // rsi
  int v5; // eax
  unsigned int v6; // ebp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RM_QOS_CONTEXT *)(*((_QWORD *)a1 + 6) + 176LL);
  RtlQueryUnbiasedInterruptTime(&v11);
  v5 = RmpQoSSetForHost(v3, a1, a2);
  v6 = v5;
  if ( !a2 )
  {
    v8 = (_QWORD *)((char *)a1 + 1200);
    v9 = *((_QWORD *)a1 + 150);
    if ( v9 )
    {
      if ( *(_QWORD **)(v9 + 8) != v8 || (v10 = (_QWORD *)*((_QWORD *)a1 + 151), (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = 0LL;
      *((_QWORD *)a1 + 151) = 0LL;
      RmpObjectRelease(a1);
    }
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    RmpQoSEnableWatchdogForHost(v3, a1, v11);
LABEL_4:
    RmpQoSCheckHostsSetTimer(v3, v11);
  }
  return v6;
}
