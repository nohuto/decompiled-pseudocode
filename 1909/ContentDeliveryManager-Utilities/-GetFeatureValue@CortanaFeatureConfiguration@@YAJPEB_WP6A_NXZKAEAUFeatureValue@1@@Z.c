/*
 * XREFs of ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEB_WP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180095BB8
 * Callers:
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x180095F04 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEB_WAEAUFeatureValue@1@AEAE@Z @ 0x1800959A0 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEB_WAEAUFeatureValue@1@AEAE@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetFeatureValue(
        WCHAR *this,
        const wchar_t *a2,
        bool (*a3)(void),
        __int64 a4)
{
  int v5; // r14d
  char v7; // bl
  unsigned __int8 *v8; // r9
  __int64 v9; // rdx
  HRESULT String; // eax
  int FlightedValue; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  _BYTE v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  int pvData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v19; // [rsp+4Ch] [rbp-B4h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v5 = (int)a3;
  v7 = 0;
  if ( *(int *)a4 >= 0 )
  {
    if ( *(int *)a4 <= 1 )
    {
      pvData = 0;
      v19 = 4;
      if ( RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
             this,
             0x10u,
             0LL,
             &pvData,
             &v19) )
      {
        goto LABEL_12;
      }
      *(_DWORD *)(a4 + 4) = pvData;
LABEL_11:
      v7 = 1;
LABEL_12:
      if ( v7 )
        return 0LL;
      goto LABEL_13;
    }
    if ( *(_DWORD *)a4 == 2 )
    {
      memset_0(sourceString, 0, 0x208uLL);
      pcbData = 520;
      if ( RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
             this,
             2u,
             0LL,
             sourceString,
             &pcbData) )
      {
        goto LABEL_12;
      }
      v9 = -1LL;
      do
        ++v9;
      while ( sourceString[v9] );
      String = WindowsCreateString(sourceString, v9, (HSTRING *)(a4 + 8));
      FlightedValue = String;
      if ( String < 0 )
      {
        v12 = (unsigned int)String;
        v13 = 291LL;
        goto LABEL_16;
      }
      goto LABEL_11;
    }
  }
  FlightedValue = -2147024809;
  v13 = 298LL;
  v12 = 2147942487LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
    (const char *)v12);
  if ( FlightedValue < 0 )
  {
    v14 = 369LL;
    goto LABEL_18;
  }
LABEL_13:
  v16[0] = 0;
  FlightedValue = CortanaFeatureConfiguration::GetFlightedValue(
                    (CortanaFeatureConfiguration *)this,
                    (HSTRING *)a4,
                    (struct CortanaFeatureConfiguration::FeatureValue *)v16,
                    v8);
  if ( FlightedValue < 0 )
  {
    v14 = 377LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)(unsigned int)FlightedValue);
    return (unsigned int)FlightedValue;
  }
  if ( !v16[0] )
    *(_DWORD *)(a4 + 4) = v5;
  return 0LL;
}
