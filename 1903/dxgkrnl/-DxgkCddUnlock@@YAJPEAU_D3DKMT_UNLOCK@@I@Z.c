/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0130D60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGDEVICE *v14; // rdi
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  struct DXGDEVICE *v31; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v32; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v34; // [rsp+58h] [rbp-B0h]
  _BYTE v35[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v36[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v37[64]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v38[88]; // [rsp+C0h] [rbp-48h] BYREF

  LODWORD(v33[0]) = -1;
  v33[1] = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    LODWORD(v33[0]) = 3007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3007);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v33, 3007LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v10 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, a1->hDevice, Current, &v32);
    v14 = v32;
    if ( v32 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v35, v32);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v14, 2, v15, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((__int64)v36, 0xFFFFFFFF, 0LL) < 0 )
      {
        v21 = 0;
      }
      else
      {
        v16 = DXGDEVICE::Unlock(v14, a1, 0);
        v20 = v16;
        if ( v16 < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
          v30[3] = v20;
          v30[4] = v14;
          v30[5] = v10;
          WdLogEvent5_WdError(v30);
        }
        v21 = v20;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v35);
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v21 = -1073741811;
      v29[3] = -1073741811LL;
      v29[4] = a1->hDevice;
      v29[5] = v10;
      WdLogEvent5_WdError(v29);
    }
    if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  }
  else
  {
    v21 = -1073741811;
    v26 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    *(_QWORD *)(v26 + 32) = PsGetCurrentProcess(v28, v27);
    WdLogEvent5_WdError(v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v33, v22);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v33[0]);
  return v21;
}
