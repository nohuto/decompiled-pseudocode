/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C020CD00
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002D4FC (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C002D580 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C012FD90 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C022AB38 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, void *a2, bool a3, bool a4)
{
  bool v5; // r15
  __int64 v6; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  struct DXGPROCESS *Process; // r12
  struct DXGPROCESS *Current; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE v32[8]; // [rsp+28h] [rbp-61h] BYREF
  _BYTE v33[32]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v34[8]; // [rsp+50h] [rbp-39h] BYREF
  void *v35; // [rsp+58h] [rbp-31h]
  __int64 v36; // [rsp+60h] [rbp-29h]
  int v37; // [rsp+68h] [rbp-21h]
  __int16 v38; // [rsp+6Ch] [rbp-1Dh]
  char v39; // [rsp+6Eh] [rbp-1Bh]

  v36 = 0LL;
  v38 = 0;
  v5 = a4;
  v6 = a1;
  v35 = a2;
  v37 = 2048;
  v39 = 0;
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v34, 1);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    goto LABEL_28;
  }
  Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v34);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, (struct _KTHREAD **)Current);
  if ( !(_DWORD)v6 )
    goto LABEL_27;
  v19 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (*((_BYTE *)Current + 323) & 8) != 0 )
  {
    v20 = *((_QWORD *)Current + 57);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 208));
    if ( (unsigned int)v19 < *(_DWORD *)(v20 + 248) )
    {
      v21 = *(_QWORD *)(v20 + 232);
      v22 = *(_DWORD *)(v21 + 16LL * (unsigned int)v19 + 8);
      if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * (unsigned int)v19 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v23 = 2 * v19;
        if ( (v22 & 0x1F) == 1 )
        {
          v25 = *(_QWORD *)(v21 + 8 * v23);
          goto LABEL_12;
        }
        v24 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60);
        *(_QWORD *)(v24 + 24) = 316LL;
        WdLogEvent5_WdError(v24);
      }
    }
    v25 = 0LL;
LABEL_12:
    ExReleasePushLockSharedEx(v20 + 208, 0LL);
    KeLeaveCriticalRegion();
    v5 = a4;
    goto LABEL_21;
  }
  if ( (unsigned int)v19 >= *((_DWORD *)Current + 62) )
    goto LABEL_20;
  v18 = *((_QWORD *)Current + 29);
  v17 = ((unsigned int)v6 >> 25) & 0x60;
  v16 = *(unsigned int *)(v18 + 16 * v19 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v19 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_20;
  }
  v26 = 2 * v19;
  v16 &= 0x1Fu;
  if ( (_BYTE)v16 != 1 )
  {
    v27 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v27 + 24) = 316LL;
    WdLogEvent5_WdError(v27);
LABEL_20:
    v25 = 0LL;
    goto LABEL_21;
  }
  v25 = *(_QWORD *)(v18 + 8 * v26);
LABEL_21:
  if ( !v25 )
  {
LABEL_27:
    v29 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v29 + 24) = v6;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    goto LABEL_28;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  KeEnterCriticalRegion();
  DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v32, Process);
  v28 = *(_QWORD *)(v25 + 2528);
  if ( v28 && *(_QWORD *)(v28 + 528) )
    DXGPROCESS::SuspendResumeEscapeAllDevices(Process, (const struct DXGADAPTER *)v25, a3, v5);
  KeLeaveCriticalRegion();
  DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v32);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v25);
LABEL_28:
  if ( (_BYTE)v38 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v34);
  return (unsigned int)v12;
}
