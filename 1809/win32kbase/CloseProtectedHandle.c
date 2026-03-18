/*
 * XREFs of CloseProtectedHandle @ 0x1C0033A08
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0033A50 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
