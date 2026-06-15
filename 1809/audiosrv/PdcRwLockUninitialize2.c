/*
 * XREFs of PdcRwLockUninitialize2 @ 0x1801341E0
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180051304 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientUnregister @ 0x18013396C (Pdcv2ActivationClientUnregister.c)
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
