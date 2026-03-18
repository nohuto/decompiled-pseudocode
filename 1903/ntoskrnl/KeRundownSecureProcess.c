/*
 * XREFs of KeRundownSecureProcess @ 0x1402A521C
 * Callers:
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140852E10 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 728) )
    return VslRundownSecureProcess();
  return result;
}
