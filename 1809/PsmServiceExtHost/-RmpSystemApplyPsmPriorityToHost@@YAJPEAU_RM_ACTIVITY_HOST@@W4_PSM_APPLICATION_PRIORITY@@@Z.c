/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000DC68
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000DAFC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000F8F4 (-SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATIO.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-21h] BYREF
  __int64 v8; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  unsigned int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  __int64 *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]

  v2 = *(_QWORD *)(a1 + 48);
  v6 = a2;
  result = ModernResourceEnforcer::SetApplicationPriority(
             *(ModernResourceEnforcer **)(v2 + 40),
             (struct _RM_ACTIVITY_HOST *)a1,
             (enum _PSM_APPLICATION_PRIORITY *)&v6);
  v7 = result;
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    v11 = 4LL;
    v10 = &v7;
    v8 = *(_QWORD *)(a1 + 32);
    v12 = &v8;
    v14 = &v6;
    v13 = 8LL;
    v6 = a2;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180088F51, 0LL, 0LL, 5u, &pData);
    return v7;
  }
  return result;
}
