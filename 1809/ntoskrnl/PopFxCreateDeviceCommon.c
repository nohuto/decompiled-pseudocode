/*
 * XREFs of PopFxCreateDeviceCommon @ 0x140179A58
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x1402E88A8 (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x14016C870 (IoInitializeRemoveLockEx.c)
 *     PopFxDuplicateUniqueId @ 0x140179C0C (PopFxDuplicateUniqueId.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3E0uLL, 0x4D584650u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3E0uLL);
      *((_OWORD *)v8 + 13) = *(_OWORD *)P;
      *((_QWORD *)v8 + 1) = v8;
      *(_QWORD *)v8 = v8;
      *((_QWORD *)v8 + 25) = v8 + 192;
      *((_QWORD *)v8 + 24) = v8 + 192;
      *((_WORD *)v8 + 276) = 0;
      v8[554] = 6;
      *((_DWORD *)v8 + 139) = 1;
      *((_QWORD *)v8 + 71) = v8 + 560;
      *((_QWORD *)v8 + 70) = v8 + 560;
      *((_QWORD *)v8 + 43) = 0LL;
      *((_QWORD *)v8 + 44) = 0LL;
      v8[352] = 9;
      *((_QWORD *)v8 + 46) = v8 + 360;
      *((_QWORD *)v8 + 45) = v8 + 360;
      *((_QWORD *)v8 + 47) = 0LL;
      *((_QWORD *)v8 + 51) = 0LL;
      *((_QWORD *)v8 + 55) = PopFxIdleTimeoutDpcRoutine;
      *((_DWORD *)v8 + 104) = 275;
      *((_QWORD *)v8 + 56) = v8;
      *((_QWORD *)v8 + 59) = 0LL;
      *((_QWORD *)v8 + 54) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)v8 + 7, 0x4D584650u, 0, 0, 0x20u);
      *((_QWORD *)v8 + 39) = v8;
      *((_QWORD *)v8 + 38) = PopFxDeviceWork;
      *((_QWORD *)v8 + 36) = 0LL;
      *((_QWORD *)v8 + 115) = PopFxDirectedPowerTransitionWorker;
      *((_QWORD *)v8 + 116) = v8;
      *((_QWORD *)v8 + 113) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)v8 + 8, 0x4D584650u, 0, 0, 0x20u);
      *((_DWORD *)v8 + 202) = a4;
      *a5 = v8;
      return (unsigned int)v6;
    }
    v6 = -1073741670;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x4D584650u);
  return (unsigned int)v6;
}
