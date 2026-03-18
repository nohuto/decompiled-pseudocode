/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C01070F0
 * Callers:
 *     CleanupPowerRequestList @ 0x1C00B7660 (CleanupPowerRequestList.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     EtwTraceCompletePowerRequest @ 0x1C005A110 (EtwTraceCompletePowerRequest.c)
 *     McTemplateK0xq @ 0x1C0110830 (McTemplateK0xq.c)
 */

void __fastcall CancelPowerRequest(struct tagPOWERREQUEST *a1, __int64 a2, __int64 a3)
{
  *((_DWORD *)a1 + 14) = -1073741823;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0xq(a1, &CanceledPowerRequest, a3, a1, -1073741536);
  if ( *((_QWORD *)a1 + 8) )
  {
    EtwTraceCompletePowerRequest((__int64)a1, *((_DWORD *)a1 + 14), a3);
    Win32FreePool((__int64)a1);
  }
  else
  {
    KeSetEvent((PRKEVENT)((char *)a1 + 16), 1, 0);
  }
}
