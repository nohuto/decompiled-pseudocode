/*
 * XREFs of ReadEnergyEquation @ 0x1C003319C
 * Callers:
 *     PopulateEnergyEstimationParameters @ 0x1C0032F2C (PopulateEnergyEstimationParameters.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1C000C6C8 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x1C000C768 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00220FC (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadEnergyEquation(unsigned __int8 a1, __int64 a2)
{
  signed int RegistryDwordValueNoDefault; // ebx
  size_t v4; // rdx
  size_t v5; // rdx
  __int64 v7; // rdx
  _WORD *v8; // rcx
  __int16 v9; // ax
  _WORD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // [rsp+20h] [rbp-E0h]
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[20]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[384]; // [rsp+1E0h] [rbp+E0h] BYREF

  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\EnergyEquation",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
                                  a1);
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"EquationIndex",
                                    (__int64)&v16);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v16);
      if ( RegistryDwordValueNoDefault >= 0 )
      {
        RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v4, pszSrc);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)pszDest,
                                          (__int64)L"NumberOfCounters",
                                          (__int64)&v15);
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            if ( v15 )
            {
              if ( v15 > 0x10 )
                RegistryDwordValueNoDefault = -2147483643;
              if ( RegistryDwordValueNoDefault >= 0 )
              {
                RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v5, L"\\EnergyCounter");
                if ( RegistryDwordValueNoDefault >= 0 )
                {
                  v7 = 192LL;
                  v8 = v19;
                  do
                  {
                    if ( v7 == -2147483454 )
                      break;
                    v9 = *(_WORD *)((char *)v8 + (char *)pszDest - v19);
                    if ( !v9 )
                      break;
                    *v8++ = v9;
                    --v7;
                  }
                  while ( v7 );
                  v10 = v8 - 1;
                  if ( v7 )
                    v10 = v8;
                  *v10 = 0;
                  RegistryDwordValueNoDefault = v7 == 0 ? 0x80000005 : 0;
                  if ( v7 )
                  {
                    v11 = v15;
                    v12 = a2 + 44;
                    v13 = 0;
                    if ( !v15 )
                    {
LABEL_27:
                      *(_DWORD *)(a2 + 40) = v11;
                      return (unsigned int)RegistryDwordValueNoDefault;
                    }
                    while ( 1 )
                    {
                      LODWORD(v14) = v13;
                      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v19, v14);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterId",
                                                      v12);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterType",
                                                      v12 + 4);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"Factor",
                                                      v12 + 8);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      v11 = v15;
                      ++v13;
                      v12 += 12LL;
                      if ( v13 >= v15 )
                        goto LABEL_27;
                    }
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
      }
    }
  }
  *(_DWORD *)(a2 + 40) = 0;
  memset((void *)(a2 + 44), 0, 0xC0uLL);
  return (unsigned int)RegistryDwordValueNoDefault;
}
