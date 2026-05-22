/*
 * XREFs of ?CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z @ 0x18007324C
 * Callers:
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800732C4 (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpDevice::CancelAsyncIo(HANDLE *this, struct _OVERLAPPED *a2)
{
  DWORD LastError; // eax
  int v3; // ecx
  __int64 result; // rax

  if ( CancelIoEx(this[5], a2) )
    return 0LL;
  LastError = GetLastError();
  v3 = LastError;
  if ( LastError == 1168 || !LastError )
    return 0LL;
  result = (unsigned __int16)LastError | 0x80070000;
  if ( v3 <= 0 )
    return (unsigned int)v3;
  return result;
}
