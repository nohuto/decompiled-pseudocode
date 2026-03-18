/*
 * XREFs of KiMcheckAlternateReturn @ 0x1402B6550
 * Callers:
 *     KxMcheckAlternateReturn @ 0x1401D3780 (KxMcheckAlternateReturn.c)
 * Callees:
 *     WheaAttemptPhysicalPageOffline @ 0x140919600 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x1409197F4 (WheaTerminateProcess.c)
 */

__int64 __fastcall KiMcheckAlternateReturn(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( (result & 4) != 0 )
  {
    LOBYTE(a3) = 1;
    WheaAttemptPhysicalPageOffline(*((_QWORD *)a1 + 1) >> 12, 0LL, a3);
    result = *a1;
  }
  if ( (result & 8) != 0 )
    return WheaTerminateProcess();
  return result;
}
