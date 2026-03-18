/*
 * XREFs of VfSetVerifierInformationEx @ 0x14098A510
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409642D8 (VfProbeAndCaptureUnicodeString.c)
 *     VfSetVerifierRunningMode @ 0x140976D44 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x14097DFDC (VfWdSetCancelTimeout.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  unsigned int v5; // ecx
  __int16 v6; // xmm6_2
  __int128 v8; // [rsp+28h] [rbp-40h] BYREF
  PVOID P[3]; // [rsp+38h] [rbp-30h]

  v8 = 0uLL;
  P[0] = 0LL;
  P[1] = 0LL;
  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = VfSetVerifierRunningMode(v3), v4 >= 0) )
  {
    if ( !v2 || (v2 != -1 ? (v5 = v2) : (v5 = 0), v4 = VfWdSetCancelTimeout(v5), v4 >= 0) )
    {
      ++dword_140446398;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v8, (unsigned __int64)(a1 + 2), 512LL);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v6 = xmmword_1404463A0;
        *(_OWORD *)P = xmmword_1404463A0;
        xmmword_1404463A0 = v8;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        if ( v6 )
          ExFreePoolWithTag(P[1], 0);
      }
    }
  }
  return (unsigned int)v4;
}
