/*
 * XREFs of ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x1800D2D8C
 * Callers:
 *     ?IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x1800C7868 (-IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800D3EF7 (memcpy_0.c)
 */

__int64 __fastcall SHRegAllocData(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        void **a5)
{
  HKEY v5; // rcx
  int v7; // esi
  LSTATUS v8; // eax
  int v9; // ebx
  LSTATUS ValueW; // eax
  void *pvData; // rax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Src[256]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = HKEY_LOCAL_MACHINE;
  hkey = HKEY_LOCAL_MACHINE;
  if ( a2 && *a2 )
  {
    v7 = 1;
    v8 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a2, 0, 1u, &hkey);
    v5 = hkey;
    v9 = v8;
  }
  else
  {
    v9 = 0;
    v7 = 0;
  }
  if ( v9 )
    goto LABEL_18;
  pcbData = 256;
  ValueW = RegGetValueW(v5, 0LL, a3, 2u, 0LL, Src, &pcbData);
  v9 = ValueW;
  if ( !ValueW || ValueW == 234 )
  {
    pvData = CoTaskMemAlloc(pcbData);
    *a5 = pvData;
    if ( pvData )
    {
      if ( v9 )
      {
        if ( RegGetValueW(hkey, 0LL, a3, 2u, 0LL, pvData, &pcbData) )
        {
          v9 = 1003;
          CoTaskMemFree(*a5);
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        memcpy_0(pvData, Src, pcbData);
      }
    }
    else
    {
      v9 = 14;
    }
  }
  if ( v7 )
    RegCloseKey(hkey);
  if ( v9 )
  {
LABEL_18:
    *a5 = 0LL;
    if ( v9 > 0 )
      return (unsigned __int16)v9 | 0x80070000;
  }
  return (unsigned int)v9;
}
