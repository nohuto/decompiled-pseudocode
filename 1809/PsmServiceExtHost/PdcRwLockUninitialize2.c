/*
 * XREFs of PdcRwLockUninitialize2 @ 0x1800722B0
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180042270 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientUnregister @ 0x18007173C (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall PdcRwLockUninitialize2(HANDLE *a1)
{
  DWORD result; // eax

  result = CloseHandle(*a1);
  if ( !result )
    return GetLastError();
  *a1 = 0LL;
  return result;
}
