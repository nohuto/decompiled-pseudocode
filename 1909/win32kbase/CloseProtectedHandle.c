/*
 * XREFs of CloseProtectedHandle @ 0x1C0037438
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0037480 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
