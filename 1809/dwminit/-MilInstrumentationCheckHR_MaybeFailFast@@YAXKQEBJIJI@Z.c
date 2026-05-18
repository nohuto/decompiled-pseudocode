/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800038A8
 * Callers:
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001988 (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001A78 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001D04 (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x1800033C0 (DwmpTerminateSessionProcess.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x1800041A8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042F4 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004490 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x180004980 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x180004A10 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004B70 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180004D50 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x180003698 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x180003770 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x180003884 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180003944 (-IsOOM@@YA_NJ@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        __int64 a3,
        DWORD a4,
        DWORD a5)
{
  bool v7; // al
  __int64 v8; // rcx
  const int *v9; // r10
  unsigned int v10; // r11d
  char v11; // r9

  v7 = IsOOM(a4);
  if ( (a1 & 0x10) != 0 && v7 )
  {
    if ( !v9 || !v10 )
      goto LABEL_10;
  }
  else if ( !v9 || !v10 )
  {
    v9 = (const int *)&unk_180008000;
    v10 = 9;
  }
  if ( !IsHRInList(v8, v9, v10) )
  {
LABEL_10:
    MilInstrumentationHandleFailure_MaybeFailFast(v8, a4, a1, a5);
    return;
  }
  if ( (a1 & 4) != 0 )
  {
    if ( v11 )
      DoStackCapture(1, a4, a5);
  }
}
