/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C020BA80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C000CE38 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C022F5CC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rdi
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  DXGDEVICE *v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  struct DXGDEVICE *v33; // [rsp+30h] [rbp-A9h] BYREF
  struct DXGDEVICE *v34; // [rsp+38h] [rbp-A1h] BYREF
  struct DXGDEVICE *v35; // [rsp+40h] [rbp-99h] BYREF
  int v36; // [rsp+48h] [rbp-91h]
  _BYTE v37[8]; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v38[64]; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v39[88]; // [rsp+98h] [rbp-41h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v12 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    v33 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v5, Current, &v33);
    v20 = v33;
    if ( v33 )
    {
      v36 = 0;
      v35 = v33;
      if ( (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v35) )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v20, 0, v26, 0);
        v28 = COREDEVICEACCESS::AcquireShared((__int64)v37, 0xFFFFFFFF, 0LL);
        v30 = v28;
        if ( v28 >= 0 )
        {
          v13 = DXGDEVICE::IssueSyncObjectOpForAllContexts(v20, v12, v7, a3, a4);
        }
        else
        {
          v31 = WdLogNewEntry5_WdEvent(v29);
          *(_QWORD *)(v31 + 24) = v30;
          *(_QWORD *)(v31 + 32) = v12;
          WdLogEvent5_WdEvent(v31);
          v13 = v30;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v39);
        COREACCESS::~COREACCESS((COREACCESS *)v38);
      }
      else
      {
        v27 = WdLogNewEntry5_WdEvent(v25);
        *(_QWORD *)(v27 + 24) = v20;
        WdLogEvent5_WdEvent(v27);
        v13 = -2147483631;
      }
      if ( v35 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v35);
    }
    else
    {
      v13 = -1073741811;
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
      v21[3] = -1073741811LL;
      CurrentProcess = PsGetCurrentProcess(v23, v22);
      v21[5] = v5;
      v21[4] = CurrentProcess;
      WdLogEvent5_WdError(v21);
    }
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  }
  else
  {
    v13 = -1073741811;
    v14 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    *(_QWORD *)(v14 + 32) = PsGetCurrentProcess(v16, v15);
    WdLogEvent5_WdError(v14);
  }
  return v13;
}
