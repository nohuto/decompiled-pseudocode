/*
 * XREFs of ReadPowerCurve @ 0x1C00365C0
 * Callers:
 *     PopulateEnergyEstimationParameters @ 0x1C00360F0 (PopulateEnergyEstimationParameters.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C000C5F8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001C614 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadPowerCurve(unsigned __int8 a1, __int64 a2)
{
  signed int RegistryDwordValueNoDefault; // ebx
  unsigned int v4; // ecx
  __int64 v6; // r8
  _WORD *v7; // rdx
  __int16 v8; // ax
  _WORD *v9; // rax
  _BYTE *v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // [rsp+20h] [rbp-E0h]
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[384]; // [rsp+1C0h] [rbp+C0h] BYREF

  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\PowerCurve",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
                                  a1);
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"PointCount",
                                    (__int64)&v13);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      v4 = v13;
      if ( v13 )
      {
        if ( v13 > 8 )
          RegistryDwordValueNoDefault = -2147483643;
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          v6 = 192LL;
          v7 = v17;
          do
          {
            if ( v6 == -2147483454 )
              break;
            v8 = *(_WORD *)((char *)v7 + (char *)pszDest - v17);
            if ( !v8 )
              break;
            *v7++ = v8;
            --v6;
          }
          while ( v6 );
          v9 = v7 - 1;
          if ( v6 )
            v9 = v7;
          *v9 = 0;
          RegistryDwordValueNoDefault = v6 == 0 ? 0x80000005 : 0;
          if ( v6 )
          {
            v10 = (_BYTE *)(a2 + 8);
            v11 = 0;
            if ( !v4 )
            {
LABEL_22:
              *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ (2 * v4)) & 0xFE;
              return (unsigned int)RegistryDwordValueNoDefault;
            }
            while ( 1 )
            {
              LODWORD(v12) = v11;
              RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v17, v12);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              (__int64)pszDest,
                                              (__int64)L"FrequencyPercent",
                                              (__int64)v14);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              *v10 = v14[0];
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              (__int64)pszDest,
                                              (__int64)L"PowerEnvelope",
                                              (__int64)&v15);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              ++v11;
              *(_DWORD *)v10 = (v15 << 8) | (unsigned __int8)*(_DWORD *)v10;
              v10 += 4;
              v4 = v13;
              if ( v11 >= v13 )
                goto LABEL_22;
            }
          }
        }
      }
      else
      {
        RegistryDwordValueNoDefault = -1073741807;
      }
    }
  }
  *(_DWORD *)(a2 + 4) &= 0xFFFFFF01;
  memset((void *)(a2 + 8), 0, 0x20uLL);
  return (unsigned int)RegistryDwordValueNoDefault;
}
