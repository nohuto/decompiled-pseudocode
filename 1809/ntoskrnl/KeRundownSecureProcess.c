/*
 * XREFs of KeRundownSecureProcess @ 0x14028E658
 * Callers:
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140818DE0 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 720) )
    return VslRundownSecureProcess();
  return result;
}
