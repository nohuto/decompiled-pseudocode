/*
 * XREFs of ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002F678
 * Callers:
 *     RmCoreRpcSrvApplyResourceSet @ 0x18003DD80 (RmCoreRpcSrvApplyResourceSet.c)
 *     RmtSrv_RS_Apply @ 0x180061800 (RmtSrv_RS_Apply.c)
 * Callees:
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18000BD78 (-Apply@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800153DC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18003B95C (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetApply(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v4; // rbx
  DWORD v5; // ebx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-CCh] BYREF
  struct ExecutionModel::ResourceSet *v9; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int *v13; // [rsp+100h] [rbp+0h]
  int v14; // [rsp+108h] [rbp+8h]
  int v15; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v16; // [rsp+110h] [rbp+10h]
  int v17; // [rsp+118h] [rbp+18h]
  int v18; // [rsp+11Ch] [rbp+1Ch]

  v10 = a2;
  RmpUtilCheckStartLockTracking(&v8, (struct _CEM_LOCK_TRACKER *)v11);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180093594, 0LL, 0LL, 2u, &pData);
  v9 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v10, &v9);
  v4 = v9;
  if ( EmSetById < 0 )
  {
    v7 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    v7 = ExecutionModel::ResourceSet::Apply(v4);
    if ( v7 >= 0 )
      v7 = 0;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v7;
    v16 = &v10;
    v14 = 4;
    v17 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800932DD, 0LL, 0LL, 4u, &pData);
  }
  if ( v4 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v8 )
  {
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v5, 0LL);
    }
  }
  return (unsigned int)v7;
}
