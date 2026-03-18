/*
 * XREFs of PopFxCreateDeviceCommon @ 0x140191E40
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140304C6C (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14076F460 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x140176DA0 (IoInitializeRemoveLockEx.c)
 *     PopFxDuplicateUniqueId @ 0x140192064 (PopFxDuplicateUniqueId.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxCreateDeviceCommon(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  int v6; // edi
  char *PoolWithTag; // rax
  char *v8; // rbx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  P[1] = 0LL;
  v6 = PopFxDuplicateUniqueId(a1, P);
  if ( v6 >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4B0uLL, 0x4D584650u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x4B0uLL);
      *(_OWORD *)(v8 + 216) = *(_OWORD *)P;
      *((_QWORD *)v8 + 1) = v8;
      *(_QWORD *)v8 = v8;
      *((_QWORD *)v8 + 26) = v8 + 200;
      *((_QWORD *)v8 + 25) = v8 + 200;
      *((_WORD *)v8 + 280) = 0;
      v8[562] = 6;
      *((_DWORD *)v8 + 141) = 1;
      *((_QWORD *)v8 + 72) = v8 + 568;
      *((_QWORD *)v8 + 71) = v8 + 568;
      *((_QWORD *)v8 + 44) = 0LL;
      *((_QWORD *)v8 + 45) = 0LL;
      v8[360] = 9;
      *((_QWORD *)v8 + 47) = v8 + 368;
      *((_QWORD *)v8 + 46) = v8 + 368;
      *((_QWORD *)v8 + 48) = 0LL;
      *((_QWORD *)v8 + 52) = 0LL;
      *((_QWORD *)v8 + 56) = PopFxIdleTimeoutDpcRoutine;
      *((_DWORD *)v8 + 106) = 275;
      *((_QWORD *)v8 + 57) = v8;
      *((_QWORD *)v8 + 60) = 0LL;
      *((_QWORD *)v8 + 55) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 232), 0x4D584650u, 0, 0, 0x20u);
      *((_QWORD *)v8 + 40) = v8;
      *((_QWORD *)v8 + 37) = 0LL;
      *((_QWORD *)v8 + 39) = PopFxDeviceWork;
      *((_QWORD *)v8 + 143) = 0LL;
      *((_QWORD *)v8 + 116) = PopFxDirectedPowerTransitionWorker;
      *((_QWORD *)v8 + 117) = v8;
      *((_QWORD *)v8 + 114) = 0LL;
      *((_QWORD *)v8 + 123) = 0LL;
      v8[984] = 8;
      *((_QWORD *)v8 + 125) = v8 + 992;
      *((_QWORD *)v8 + 124) = v8 + 992;
      *((_QWORD *)v8 + 126) = 0LL;
      *((_QWORD *)v8 + 130) = 0LL;
      *((_QWORD *)v8 + 134) = PopFxDirectedWorkOrderWatchdog;
      *((_QWORD *)v8 + 135) = v8 + 968;
      *((_DWORD *)v8 + 262) = 275;
      *((_QWORD *)v8 + 138) = 0LL;
      *((_QWORD *)v8 + 133) = 0LL;
      *((_QWORD *)v8 + 139) = v8 + 912;
      *((_QWORD *)v8 + 120) = v8 + 968;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 264), 0x4D584650u, 0, 0, 0x20u);
      *((_DWORD *)v8 + 204) = a4;
      *a5 = v8;
      return (unsigned int)v6;
    }
    v6 = -1073741670;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x4D584650u);
  return (unsigned int)v6;
}
