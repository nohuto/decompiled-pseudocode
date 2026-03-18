/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C023F9B8
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018978 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C013C27C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C025F3BC (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, __int64 a2, bool a3, bool a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  bool v6; // r15
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  struct DXGPROCESS *Process; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE v36[24]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v37[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v38; // [rsp+48h] [rbp-31h]
  __int64 v39; // [rsp+50h] [rbp-29h]
  int v40; // [rsp+58h] [rbp-21h]
  __int16 v41; // [rsp+5Ch] [rbp-1Dh]
  char v42; // [rsp+5Eh] [rbp-1Bh]

  v4 = a1;
  v5 = a2;
  v38 = a2;
  LOBYTE(a2) = 1;
  v39 = 0LL;
  v41 = 0;
  v42 = 0;
  v6 = a4;
  v40 = 2048;
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v37, a2);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v5;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    goto LABEL_28;
  }
  Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v37, v9);
  Current = DXGPROCESS::GetCurrent(v17, v16);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v36, (struct _KTHREAD **)Current);
  if ( !(_DWORD)v4 )
    goto LABEL_27;
  v22 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (*((_BYTE *)Current + 299) & 8) != 0 )
  {
    v23 = *((_QWORD *)Current + 54);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 184));
    if ( (unsigned int)v22 < *(_DWORD *)(v23 + 224) )
    {
      v24 = *(_QWORD *)(v23 + 208);
      v25 = *(_DWORD *)(v24 + 16LL * (unsigned int)v22 + 8);
      if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * (unsigned int)v22 + 8) & 0x60)
        && (v25 & 0x2000) == 0
        && (v25 & 0x1F) != 0 )
      {
        v26 = 2 * v22;
        v27 = v25 & 0x1F;
        if ( (_BYTE)v27 == 1 )
        {
          v29 = *(_QWORD *)(v24 + 8 * v26);
          goto LABEL_12;
        }
        v28 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60, v27, v24);
        *(_QWORD *)(v28 + 24) = 267LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
LABEL_12:
    ExReleasePushLockSharedEx(v23 + 184, 0LL);
    KeLeaveCriticalRegion();
    v6 = a4;
    goto LABEL_21;
  }
  if ( (unsigned int)v22 >= *((_DWORD *)Current + 56) )
    goto LABEL_20;
  v21 = *((_QWORD *)Current + 26);
  v20 = ((unsigned int)v4 >> 25) & 0x60;
  v19 = *(unsigned int *)(v21 + 16 * v22 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v22 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_20;
  }
  v30 = 2 * v22;
  v19 &= 0x1Fu;
  if ( (_BYTE)v19 != 1 )
  {
    v31 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v31 + 24) = 267LL;
    WdLogEvent5_WdError(v31);
LABEL_20:
    v29 = 0LL;
    goto LABEL_21;
  }
  v29 = *(_QWORD *)(v21 + 8 * v30);
LABEL_21:
  if ( !v29 )
  {
LABEL_27:
    v33 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v33 + 24) = v4;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
    goto LABEL_28;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v29 + 24));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  KeEnterCriticalRegion();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Process + 160, 0LL);
  *((_QWORD *)Process + 21) = KeGetCurrentThread();
  v32 = *(_QWORD *)(v29 + 2560);
  if ( v32 && *(_QWORD *)(v32 + 528) )
    DXGPROCESS::SuspendResumeEscapeAllDevices(Process, (const struct DXGADAPTER *)v29, a3, v6);
  KeLeaveCriticalRegion();
  *((_QWORD *)Process + 21) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Process + 160, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v29);
LABEL_28:
  if ( (_BYTE)v41 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v37, v14);
  return (unsigned int)v12;
}
