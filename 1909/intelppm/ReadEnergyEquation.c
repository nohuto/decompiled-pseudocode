/*
 * XREFs of ReadEnergyEquation @ 0x1C0039628
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C003953C (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0001F64 (RtlStringCchPrintfW.c)
 *     RtlStringCopyWorkerW @ 0x1C0001FE4 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     RtlStringCchCatW @ 0x1C000F4B8 (RtlStringCchCatW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadEnergyEquation(unsigned __int8 a1, __int64 a2)
{
  signed int RegistryDwordValueNoDefault; // ebx
  size_t v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  wchar_t *v8; // rax
  __int64 v9; // rax
  wchar_t *v10; // rdx
  __int64 v11; // rcx
  char *v12; // r9
  wchar_t v13; // ax
  wchar_t *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdi
  unsigned int v17; // esi
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[20]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v24[192]; // [rsp+1E0h] [rbp+E0h] BYREF

  LODWORD(cchToCopy) = a1;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\EnergyEquation",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU");
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"EquationIndex",
                                    (__int64)&v21);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v21);
      if ( RegistryDwordValueNoDefault >= 0 )
      {
        RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v5, pszSrc);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)pszDest,
                                          (__int64)L"NumberOfCounters",
                                          (__int64)&v20);
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            if ( v20 )
            {
              if ( v20 > 0x10 )
                RegistryDwordValueNoDefault = -2147483643;
              if ( RegistryDwordValueNoDefault >= 0 )
              {
                v7 = 192LL;
                v8 = pszDest;
                do
                {
                  if ( !*v8 )
                    break;
                  ++v8;
                  --v7;
                }
                while ( v7 );
                RegistryDwordValueNoDefault = v7 == 0 ? 0xC000000D : 0;
                if ( v7 )
                  v9 = 192 - v7;
                else
                  v9 = 0LL;
                if ( v7 )
                {
                  v10 = &pszDest[v9];
                  v11 = 192 - v9;
                  if ( v9 != 192 )
                  {
                    v6 = 2147483646LL;
                    v12 = (char *)((char *)L"\\EnergyCounter" - (char *)v10);
                    do
                    {
                      if ( !v6 )
                        break;
                      v13 = *(wchar_t *)((char *)v10 + (_QWORD)v12);
                      if ( !v13 )
                        break;
                      *v10 = v13;
                      --v6;
                      ++v10;
                      --v11;
                    }
                    while ( v11 );
                  }
                  v14 = v10 - 1;
                  if ( v11 )
                    v14 = v10;
                  RegistryDwordValueNoDefault = v11 == 0 ? 0x80000005 : 0;
                  *v14 = 0;
                }
                if ( RegistryDwordValueNoDefault >= 0 )
                {
                  RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v24, 0xC0uLL, (size_t *)v6, pszDest, cchToCopy);
                  if ( RegistryDwordValueNoDefault >= 0 )
                  {
                    v15 = v20;
                    v16 = a2 + 44;
                    v17 = 0;
                    if ( !v20 )
                    {
LABEL_36:
                      *(_DWORD *)(a2 + 40) = v15;
                      return (unsigned int)RegistryDwordValueNoDefault;
                    }
                    while ( 1 )
                    {
                      LODWORD(cchToCopya) = v17;
                      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v24, cchToCopya);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterId",
                                                      v16);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterType",
                                                      v16 + 4);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"Factor",
                                                      v16 + 8);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      v15 = v20;
                      ++v17;
                      v16 += 12LL;
                      if ( v17 >= v20 )
                        goto LABEL_36;
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
