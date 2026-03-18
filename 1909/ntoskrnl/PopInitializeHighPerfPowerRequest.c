/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x140A201F4
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14010535C (PoCaptureReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x14073BEE4 (PopCreateKernelPowerRequest.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int KernelPowerRequest; // ebx
  _DWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  PpmHighPerfEndDpc = 275;
  *(_QWORD *)&PpmHighPerfEndTimer.Header.Lock = 8LL;
  qword_140443C38 = (__int64)PpmHighPerfRequestExpiration;
  v0 = PpmHighPerfDuration;
  PpmHighPerfRequestLock = 0LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Blink = &PpmHighPerfEndTimer.Header.WaitListHead;
  v1 = 4LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Flink = &PpmHighPerfEndTimer.Header.WaitListHead;
  qword_140443C40 = 0LL;
  qword_140443C58 = 0LL;
  qword_140443C30 = 0LL;
  PpmHighPerfEndTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PpmHighPerfEndTimer.Processor = 0LL;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  v5[0] = 0;
  v5[1] = 1;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Power Manager");
  KernelPowerRequest = PoCaptureReasonContext((unsigned __int64)v5, 0, 0LL, 1, 0LL, &P);
  if ( KernelPowerRequest >= 0 )
  {
    KernelPowerRequest = PopCreateKernelPowerRequest(&PpmHighPerfPowerRequest, P);
    if ( KernelPowerRequest < 0 )
      PoDestroyReasonContext(P);
  }
  return (unsigned int)KernelPowerRequest;
}
