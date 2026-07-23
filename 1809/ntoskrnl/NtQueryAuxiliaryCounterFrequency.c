/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1408DB630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  NTSTATUS result; // eax
  LONGLONG v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return off_1403FF670[0]();
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = ((__int64 (__fastcall *)(LONGLONG *))off_1403FF670[0])(&v3);
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v3;
  return result;
}
