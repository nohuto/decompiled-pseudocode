/*
 * XREFs of ExpCloudbookHardwareLockedProvider @ 0x1406A8930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A8C60 (ExpOsProductCacheProviderHelper.c)
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
  v9 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14090A8A0, (__int64)a4, (ULONG)a5);
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
