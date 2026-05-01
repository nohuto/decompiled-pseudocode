/*
 * XREFs of ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18001D61C
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001096C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001CC90 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18001CF50 (-RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_Re.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmContextAcquireResourceSet(struct HAM_ACTIVITY_RM_CONTEXT *a1, __int64 a2)
{
  struct ExecutionModel::_ResourceSetInfo *v4; // r8
  void *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 result; // rax
  bool v9; // [rsp+60h] [rbp-1A8h] BYREF
  _BYTE v10[104]; // [rsp+70h] [rbp-198h] BYREF
  int v11; // [rsp+D8h] [rbp-130h]
  __int64 v12; // [rsp+E0h] [rbp-128h]
  int v13; // [rsp+1E4h] [rbp-24h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v10);
  ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
    (ExecutionModel *)(*((_QWORD *)a1 + 1) + 112LL),
    (struct _HAM_ACTIVITY_PROPERTIES *)v10,
    v4);
  v13 &= ~0x40000u;
  v11 = 1;
  v12 = a2;
  v5 = (void *)HamObjectIdGenerate(1);
  v6 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 2) = v5;
  v7 = RmSrvAcquireResourceSet(
         RmSvcGlobals,
         (struct ExecutionModel::_ResourceSetInfo *)v10,
         a1,
         v5,
         (const unsigned __int16 *)(*(_QWORD *)(v6 + 80) + 24LL),
         (void *)(*(_QWORD *)(v6 + 80) + 488LL),
         *(_DWORD *)(*(_QWORD *)(v6 + 80) + 556LL),
         *(_DWORD *)(*(_QWORD *)(v6 + 80) + 560LL),
         *(_QWORD *)(*(_QWORD *)(v6 + 80) + 568LL),
         (unsigned __int64)v5,
         0LL,
         &v9);
  if ( v7 < 0 )
    result = v7 | 0xC0000000;
  else
    result = 0LL;
  if ( (int)result < 0 )
    *((_QWORD *)a1 + 2) = -1LL;
  return result;
}
