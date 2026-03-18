/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00E9CD0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01D71DC (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall PerformLegacyDpiUpgrade(struct _UNICODE_STRING *a1)
{
  unsigned int v1; // ebx
  int v4; // eax
  unsigned int v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v7; // [rsp+38h] [rbp-18h] BYREF
  int v8; // [rsp+3Ch] [rbp-14h]
  int v9; // [rsp+40h] [rbp-10h]

  v1 = 0;
  v6 = 0;
  v8 = 0;
  v9 = 0;
  FastGetProfileDword(a1, 4LL, L"Win8DpiScaling");
  FastGetProfileDword(a1, 4LL, L"DpiScalingVer");
  v7 = v5;
  if ( v5 == 4096 )
  {
    *(_DWORD *)(gpsi + 2236LL) &= ~0x20u;
    return 0LL;
  }
  else
  {
    FastGetProfileIntW(a1, 4LL, L"DesktopDPIOverride");
    v4 = v8;
    if ( (int)v7 < 4096 )
    {
      DrvDxgkUpgradeLegacyDpiSettings(&v7, &v6);
      v4 = v8;
    }
    if ( v4 )
      *(_DWORD *)(gpsi + 2236LL) |= 0x20u;
    else
      *(_DWORD *)(gpsi + 2236LL) &= ~0x20u;
    v5 = 4096;
    FastWriteProfileValue(a1, 4LL, L"DpiScalingVer", 4LL, &v5, 4);
    if ( v8 || v6 )
      return 1;
    return v1;
  }
}
