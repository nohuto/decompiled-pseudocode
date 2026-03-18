/*
 * XREFs of GetLunExtension @ 0x1C00138E8
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C00150A0 (NVMeGetLogPageCompletion.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0015C10 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     NVMeMapError @ 0x1C0015DDC (NVMeMapError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLunExtension(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  __int64 *i; // rcx
  __int64 result; // rax

  if ( a2 == -1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 192);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  for ( i = (__int64 *)(a1 + 1648); ; ++i )
  {
    result = *i;
    if ( *i )
    {
      if ( *(_DWORD *)(result + 16) == a2 )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return result;
}
