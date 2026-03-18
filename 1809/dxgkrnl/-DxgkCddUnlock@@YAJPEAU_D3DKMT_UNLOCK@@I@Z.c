/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0124710
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, const GUID *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rsi
  __int64 v7; // rcx
  DXGDEVICE *v8; // rbx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // [rsp+30h] [rbp-49h] BYREF
  __int64 v20; // [rsp+38h] [rbp-41h]
  char v21; // [rsp+40h] [rbp-39h]
  _BYTE v22[24]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v24[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v25[56]; // [rsp+88h] [rbp+Fh] BYREF
  struct DXGDEVICE *v26; // [rsp+F0h] [rbp+77h] BYREF
  struct DXGDEVICE *v27; // [rsp+F8h] [rbp+7Fh] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v21 = 1;
    v19 = 3007;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3007);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, a1->hDevice, Current, &v27);
    v8 = v27;
    if ( v27 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22, v27);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v8, 2, v9, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23) < 0 )
      {
        LODWORD(v12) = 0;
      }
      else
      {
        v10 = DXGDEVICE::Unlock(v8, a1, 0);
        v12 = v10;
        if ( v10 < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v18[3] = v12;
          v18[4] = v8;
          v18[5] = v6;
          WdLogEvent5_WdError(v18);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      LODWORD(v12) = -1073741811;
      v17[3] = -1073741811LL;
      v17[4] = a1->hDevice;
      v17[5] = v6;
      WdLogEvent5_WdError(v17);
    }
    if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
  }
  else
  {
    LODWORD(v12) = -1073741811;
    v16 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    *(_QWORD *)(v16 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v16);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v19);
  return (unsigned int)v12;
}
