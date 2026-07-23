/*
 * XREFs of CmpSecurityMethod @ 0x1405CC2E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1405CC550 (CmpQueryKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmpAssignKeySecurity @ 0x14075CB4C (CmpAssignKeySecurity.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  ULONG_PTR BugCheckParameter4; // rsi
  char v12; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r9d
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int KeySecurity; // eax
  int v20; // ecx
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+40h] [rbp-91h] BYREF
  __int64 v24; // [rsp+50h] [rbp-81h]
  __int64 v25; // [rsp+58h] [rbp-79h]
  _QWORD v26[7]; // [rsp+60h] [rbp-71h] BYREF
  PVOID v27[2]; // [rsp+98h] [rbp-39h] BYREF
  LARGE_INTEGER v28[4]; // [rsp+A8h] [rbp-29h] BYREF

  BugCheckParameter4 = a2;
  v25 = a8;
  memset(v28, 0, sizeof(v28));
  v24 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v28, 0x20000u);
  CmpInitializeThreadInfo(v27);
  v23[1] = v23;
  v12 = 0;
  v23[0] = v23;
  memset(v26, 0, sizeof(v26));
  if ( CmpTraceRoutine && a1 )
    v24 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      v15 = 36;
      v26[3] = a5;
      v16 = 37;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter4 )
        goto LABEL_16;
      v15 = 38;
      v16 = 39;
    }
    v26[2] = a4;
    LOBYTE(v14) = 1;
    v26[1] = a3;
    v26[0] = a1;
    v17 = CmpCallCallBacksEx(v15, (unsigned int)v26, 0, v14, v16, a1, (__int64)v23);
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073740541 )
        v18 = 0;
      goto LABEL_31;
    }
    v12 = 1;
  }
LABEL_16:
  if ( (_DWORD)BugCheckParameter4 )
  {
    switch ( (_DWORD)BugCheckParameter4 )
    {
      case 1:
        KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5);
        break;
      case 2:
LABEL_24:
        v18 = 0;
        goto LABEL_25;
      case 3:
        KeySecurity = CmpAssignKeySecurity(a1, a4);
        break;
      default:
        KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), BugCheckParameter4);
    }
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4);
  }
  v18 = KeySecurity;
  if ( KeySecurity >= 0 )
    goto LABEL_24;
LABEL_25:
  if ( !v12 )
    goto LABEL_31;
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v20 = 37;
  }
  else
  {
    if ( (_DWORD)BugCheckParameter4 )
      goto LABEL_31;
    v20 = 39;
  }
  v18 = CmPostCallbackNotificationEx(v20, a1, v18, (unsigned int)v26, 0LL, (__int64)v23);
LABEL_31:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  CmCleanupThreadInfo(v27);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v21) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    CmpTraceRoutine(v21, v28, v18, 0LL, v24, 0LL);
  }
  return v18;
}
