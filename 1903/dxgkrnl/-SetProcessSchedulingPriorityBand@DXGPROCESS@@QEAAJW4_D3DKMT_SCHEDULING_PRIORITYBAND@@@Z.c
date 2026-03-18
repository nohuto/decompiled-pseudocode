/*
 * XREFs of ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C025EEA0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0260140 (DxgkSetProcessSchedulingPriorityBand.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C634 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C011F198 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityBand(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  DXGDEVICE *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGDEVICE *v15; // r15
  struct DXGADAPTER *v16; // r12
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rax
  _QWORD v29[2]; // [rsp+28h] [rbp-89h] BYREF
  _QWORD v30[2]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v31[8]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v32[64]; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v33[72]; // [rsp+90h] [rbp-21h] BYREF

  v3 = (int)a2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 104) + 16LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 3982LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = a1 + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  *(_QWORD *)(a1 + 168) = KeGetCurrentThread();
  if ( (_DWORD)v3 == 1 )
  {
    *((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 163) = a1;
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v10, v9) + 323, 1, 0);
    *(_DWORD *)(a1 + 304) = 1;
  }
  else
  {
    if ( (_DWORD)v3 )
    {
      v27 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      v26 = -1073741811;
      *(_QWORD *)(v27 + 24) = v3;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 304) = 2;
  }
  v11 = *(_QWORD **)(a1 + 248);
  v30[0] = a1 + 248;
  while ( 1 )
  {
    v30[1] = v11;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v30);
    v15 = Current;
    if ( !Current )
      break;
    v16 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v16, 0LL);
    v18 = COREADAPTERACCESS::AcquireShared((__int64)v31, 0xFFFFFFFFLL, v17);
    v22 = v18;
    if ( v18 >= 0 )
    {
      DXGDEVICE::NotifyProcessStatusChange(v15);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = v16;
      *(_QWORD *)(v23 + 32) = v22;
      WdLogEvent5_WdWarning(v23);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v33);
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    v11 = (_QWORD *)*v11;
  }
  if ( !(_DWORD)v3 && a1 == *((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 163) )
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v25, v24) + 323, 0, 1);
  v26 = 0;
LABEL_20:
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v26;
}
