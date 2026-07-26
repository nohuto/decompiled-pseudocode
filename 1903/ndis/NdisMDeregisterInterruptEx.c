/*
 * XREFs of NdisMDeregisterInterruptEx @ 0x1C013B000
 * Callers:
 *     NdisMRegisterInterruptEx @ 0x1C012F4F0 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C00A0B8C (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 */

void __stdcall NdisMDeregisterInterruptEx(NDIS_HANDLE NdisInterruptHandle)
{
  __int64 v1; // rdi
  char v3; // al
  void *v4; // rcx
  KIRQL v5; // al
  void **v6; // rdx
  char *v7; // rcx
  int v8; // edx
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+40h] [rbp-18h] BYREF

  v1 = *((_QWORD *)NdisInterruptHandle + 12);
  *(&Parameters.Version + 1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      21,
      (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
      v1,
      (char)NdisInterruptHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 1904), 0xFFFFFFFF) == 1 )
    *(_DWORD *)(*((_QWORD *)NdisInterruptHandle + 12) + 120LL) |= 0x20u;
  v3 = *((_BYTE *)NdisInterruptHandle + 193);
  *(&Parameters.Version + 1) = 0;
  Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)NdisInterruptHandle + 15);
  Parameters.Version = (v3 != 0) + 2;
  IoDisconnectInterruptEx(&Parameters);
  v4 = (void *)*((_QWORD *)NdisInterruptHandle + 26);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)NdisInterruptHandle + 26) = 0LL;
  }
  ndisWaitForDpcCompletion(
    (volatile int *)NdisInterruptHandle + 26,
    (volatile unsigned __int8 *)NdisInterruptHandle + 4,
    (struct _KEVENT *)((char *)NdisInterruptHandle + 128));
  ndisReferencePackage((__int64)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  v6 = (void **)(v1 + 784);
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  while ( 1 )
  {
    v7 = (char *)*v6;
    if ( !*v6 )
      break;
    if ( v7 == NdisInterruptHandle )
    {
      *v6 = (void *)*((_QWORD *)NdisInterruptHandle + 20);
      break;
    }
    v6 = (void **)(v7 + 160);
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
  ndisDereferencePackage((__int64)&ndisPkgs);
  ExFreePoolWithTag(NdisInterruptHandle, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      22,
      (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
      v1);
  }
}
