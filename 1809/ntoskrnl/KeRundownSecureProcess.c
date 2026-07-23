/*
 * XREFs of KeRundownSecureProcess @ 0x14028E948
 * Callers:
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140819FC0 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 720) )
    return VslRundownSecureProcess();
  return result;
}
