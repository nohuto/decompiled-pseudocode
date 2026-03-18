/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C021DD78
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C02148D4 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(__int64 *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+44h] [rbp-34h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+5Ch] [rbp-1Ch]
  int v17; // [rsp+64h] [rbp-14h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  char v19; // [rsp+88h] [rbp+10h] BYREF
  int v20; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0;
  v17 = 0;
  InputTraceLogging::Delivery::CallDefaultInputHandler((const struct tagMSG *)a1);
  v10 = *a1;
  v11 = *((_DWORD *)a1 + 2);
  v13 = a1[2];
  v14 = a1[3];
  v15 = *((_DWORD *)a1 + 8);
  v16 = *(__int64 *)((char *)a1 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v19,
    gdwInAtomicOperation,
    v2,
    v3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(116LL);
  v4 = KeUserModeCallback(116LL, &v10, 48LL, &v21, &v20);
  EtwTraceEndCallback(116LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v19,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v20 != 24 )
    return 0LL;
  v8 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v18 = *v8;
  return result;
}
