/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C021D838
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C0214394 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(__int64 *a1)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  int v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+44h] [rbp-34h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+64h] [rbp-14h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  char v17; // [rsp+88h] [rbp+10h] BYREF
  int v18; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v10 = 0;
  v15 = 0;
  InputTraceLogging::Delivery::CallDefaultInputHandler((const struct tagMSG *)a1);
  v8 = *a1;
  v9 = *((_DWORD *)a1 + 2);
  v11 = a1[2];
  v12 = a1[3];
  v13 = *((_DWORD *)a1 + 8);
  v14 = *(__int64 *)((char *)a1 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v17,
    gdwInAtomicOperation,
    v2);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(116LL);
  v3 = KeUserModeCallback(116LL, &v8, 48LL, &v19, &v18);
  EtwTraceEndCallback(116LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v17,
    v4,
    v5);
  if ( v3 < 0 || v18 != 24 )
    return 0LL;
  v6 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v16 = *v6;
  return result;
}
