/*
 * XREFs of ExpCloudbookHardwareLockedProvider @ 0x1406D1E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406D2130 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpCloudbookHardwareLockedProvider(
        _DWORD *a1,
        void *a2,
        unsigned int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  unsigned int v9; // ebx
  char v10; // dl
  size_t v11; // r8
  BOOL Src; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+38h] [rbp-60h] BYREF

  memset(SystemInformation, 0, 0x24uLL);
  v9 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_140947740, (__int64)a4, (ULONG)a5);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
  {
    *a4 = 4;
    v9 = 0;
    if ( ZwQuerySystemInformation(SystemCodeIntegrityUnlockInformation, SystemInformation, 0x24u, 0LL) < 0 )
    {
      v9 = -1073741772;
    }
    else if ( a3 < *a4 )
    {
      v9 = -1073741789;
    }
    else
    {
      v10 = SystemInformation[0] & 5;
      *a1 = 4;
      v11 = *a4;
      Src = v10 == 5;
      memmove(a2, &Src, v11);
    }
    *a5 = 1;
  }
  return v9;
}
