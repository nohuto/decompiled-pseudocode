/*
 * XREFs of CmpSecurityMethod @ 0x140662420
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmPostCallbackNotification @ 0x14060072C (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1406007F8 (CmpCallCallBacks.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x140662610 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 */

__int64 __fastcall CmpSecurityMethod(_QWORD *a1, int a2, unsigned int *a3, __int64 a4, __int64 a5)
{
  ULONG_PTR BugCheckParameter4; // rdi
  char v9; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  int v14; // eax
  int KeySecurity; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v21; // [rsp+50h] [rbp-71h]
  _QWORD v22[7]; // [rsp+58h] [rbp-69h] BYREF
  LARGE_INTEGER v23[4]; // [rsp+90h] [rbp-31h] BYREF

  BugCheckParameter4 = a2;
  memset(v23, 0, sizeof(v23));
  v21 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v23, 0x20000u);
  v20[1] = v20;
  v9 = 0;
  v20[0] = v20;
  memset(v22, 0, sizeof(v22));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && a1 )
    v21 = a1[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      v22[3] = a5;
      v12 = 37;
      v13 = 36;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter4 )
        goto LABEL_10;
      v12 = 39;
      v13 = 38;
    }
    v22[0] = a1;
    v22[1] = a3;
    v22[2] = a4;
    v14 = CmpCallCallBacks(v13, (__int64)v22, v11, v12, (__int64)a1, (__int64)v20);
    if ( v14 < 0 )
    {
      v16 = 0;
      if ( v14 != -1073740541 )
        v16 = v14;
      goto LABEL_18;
    }
    v9 = 1;
  }
LABEL_10:
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5);
  }
  else if ( (_DWORD)BugCheckParameter4 )
  {
    if ( (_DWORD)BugCheckParameter4 == 2 )
      goto LABEL_13;
    if ( (_DWORD)BugCheckParameter4 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, a1[1], BugCheckParameter4);
    KeySecurity = CmpAssignKeySecurity(a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4);
  }
  v16 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_13:
    v16 = 0;
  if ( !v9 )
    goto LABEL_18;
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v17 = 37;
LABEL_17:
    v16 = CmPostCallbackNotification(v17, (__int64)a1, v16, (__int64)v22, v20);
    goto LABEL_18;
  }
  if ( !(_DWORD)BugCheckParameter4 )
  {
    v17 = 39;
    goto LABEL_17;
  }
LABEL_18:
  KeLeaveCriticalRegion();
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v18) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v18,
      v23,
      v16,
      0LL,
      v21,
      0LL);
  }
  return v16;
}
