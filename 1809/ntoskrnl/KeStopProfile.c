/*
 * XREFs of KeStopProfile @ 0x140295C40
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1406C5A4C (EtwpDisableKernelTrace.c)
 *     EtwpCoverageSamplerStop @ 0x1408C8E50 (EtwpCoverageSamplerStop.c)
 *     ExpProfileDelete @ 0x1408DA0C0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1408DA660 (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140175910 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     KiStopProfileTarget @ 0x140296220 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context[26]; // [rsp+20h] [rbp-E8h] BYREF

  memset(Context, 0, 0xC8uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  Context[0] = a1;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[2]) = 1310721;
  memset((char *)&Context[2] + 4, 0, 0xA4uLL);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget((ULONG_PTR)Context);
  else
    KeIpiGenericCall(KiStopProfileTarget, (ULONG_PTR)Context);
  if ( Context[23] )
    ExFreePoolWithTag((PVOID)Context[23], 0);
  return Context[24];
}
