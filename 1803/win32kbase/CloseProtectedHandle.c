/*
 * XREFs of CloseProtectedHandle @ 0x1C003C094
 * Callers:
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C003C0D0 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
