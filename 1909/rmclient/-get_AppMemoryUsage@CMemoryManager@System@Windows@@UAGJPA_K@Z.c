/*
 * XREFs of ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UAGJPA_K@Z @ 0x10007360
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

int __stdcall Windows::System::CMemoryManager::get_AppMemoryUsage(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  HANDLE CurrentProcess; // eax
  int result; // eax
  _BYTE v4[24]; // [esp+4h] [ebp-24h] BYREF
  unsigned __int64 v5; // [esp+1Ch] [ebp-Ch]

  if ( !a2 )
    return -2147024809;
  *a2 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( GetProcessInformation(CurrentProcess, 2, v4, 32) )
  {
    *a2 = v5;
    return 0;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
