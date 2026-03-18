/*
 * XREFs of CloseProtectedHandle @ 0x1C00384A8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C00384F0 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
