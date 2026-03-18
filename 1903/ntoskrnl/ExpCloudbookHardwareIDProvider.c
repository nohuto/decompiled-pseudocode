/*
 * XREFs of ExpCloudbookHardwareIDProvider @ 0x14090C530
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406D2DD0 (ExpOsProductCacheProviderHelper.c)
 */

int __fastcall ExpCloudbookHardwareIDProvider(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int result; // eax
  _BYTE SystemInformation[40]; // [rsp+30h] [rbp-58h] BYREF

  memset(SystemInformation, 0, 0x24uLL);
  result = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_140947CD0, a1, a2, a3, a4, a5);
  if ( (int)(result + 0x80000000) >= 0 && result != -1073741789 )
  {
    *a4 = 32;
    result = ZwQuerySystemInformation(SystemCodeIntegrityUnlockInformation, SystemInformation, 0x24u, 0LL);
    if ( result >= 0 )
    {
      if ( (SystemInformation[0] & 4) != 0 )
      {
        if ( a3 < 0x20 )
        {
          result = -1073741789;
        }
        else
        {
          *a1 = 3;
          memmove(a2, &SystemInformation[4], (unsigned int)*a4);
          result = 0;
        }
      }
      else
      {
        result = -1073741772;
      }
    }
    *a5 = 1;
  }
  return result;
}
