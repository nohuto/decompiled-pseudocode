/*
 * XREFs of ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C028D13C
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C028DBC0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6A88 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C028CC58 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4)
{
  DWORD LowPart; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  unsigned int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct _LUID v19; // [rsp+20h] [rbp-89h] BYREF
  struct DXGADAPTER *v20[3]; // [rsp+28h] [rbp-81h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v22[64]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v23[72]; // [rsp+88h] [rbp-21h] BYREF

  v19 = a2;
  LowPart = a2.LowPart;
  if ( !DXGDISPLAYMANAGEROBJECT::ContainsTarget(this, a2, a3) )
    return 3221226021LL;
  v20[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v20, &v19);
  v11 = v20[0];
  if ( v20[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v20[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v21, 0xFFFFFFFFLL, v14) >= 0 && *((_QWORD *)v11 + 319) )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v11, a3, a4);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = v19.HighPart;
      *(_QWORD *)(v18 + 32) = LowPart;
      WdLogEvent5_WdWarning(v18);
      SourceConnectedToTargetInClientVidPn = -1073741275;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    COREACCESS::~COREACCESS((COREACCESS *)v22);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v19.HighPart;
    *(_QWORD *)(v12 + 32) = LowPart;
    WdLogEvent5_WdWarning(v12);
    SourceConnectedToTargetInClientVidPn = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v20, 0LL);
  return SourceConnectedToTargetInClientVidPn;
}
