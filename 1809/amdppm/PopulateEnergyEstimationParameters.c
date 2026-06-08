/*
 * XREFs of PopulateEnergyEstimationParameters @ 0x1C0032F2C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003241C (ProcLibGlobalInit.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001008 (_TlgWrite.c)
 *     RtlStringCchPrintfW @ 0x1C000C768 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     memmove @ 0x1C000CB80 (memmove.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00220FC (GetRegistryDwordValueNoDefault.c)
 *     ReadEnergyEquation @ 0x1C003319C (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00333FC (ReadPowerCurve.c)
 */

int PopulateEnergyEstimationParameters()
{
  unsigned __int8 v0; // si
  unsigned int *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  const GUID *v5; // r9
  unsigned int v6; // edx
  unsigned int *v7; // r11
  unsigned int v8; // edi
  unsigned int v9; // edi
  int result; // eax
  int v12; // ecx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  char *v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  char *v21; // [rsp+78h] [rbp-90h]
  int v22; // [rsp+80h] [rbp-88h]
  int v23; // [rsp+84h] [rbp-84h]
  __int16 *v24; // [rsp+88h] [rbp-80h]
  int v25; // [rsp+90h] [rbp-78h]
  int v26; // [rsp+94h] [rbp-74h]
  struct _TlgProvider_t *p_hProvider; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A4h] [rbp-64h]
  struct _TlgProvider_t hProvider; // [rsp+A8h] [rbp-60h] BYREF

  v0 = 0;
  v1 = (unsigned int *)&unk_1C0011988;
  do
  {
    memset(v1, 0, 0x100uLL);
    LOBYTE(v2) = v0;
    ReadEnergyEquation(v2, v1);
    LOBYTE(v3) = v0;
    if ( (int)ReadPowerCurve(v3, v1) >= 0 )
    {
      LOBYTE(v4) = 0;
      v6 = (v1[1] >> 1) & 0x7F;
      if ( v6 < 2 || (unsigned __int8)v1[v6 + 1] > 0x64u || (v1[2] & 0xFFFFFF00) > 0x3E8000 )
      {
LABEL_13:
        if ( (_BYTE)v4 )
        {
          v1[1] |= 1u;
          goto LABEL_24;
        }
      }
      else
      {
        v4 = 1LL;
        v7 = v1 + 3;
        while ( 1 )
        {
          v5 = (const GUID *)*v7;
          v8 = v1[(unsigned int)(v4 - 1) + 2];
          if ( (unsigned __int8)v5 <= (unsigned int)(unsigned __int8)v8 )
            break;
          v5 = (const GUID *)((unsigned int)v5 >> 8);
          if ( (unsigned int)v5 < v8 >> 8 || (unsigned int)v5 > 0x3E80 )
            break;
          v4 = (unsigned int)(v4 + 1);
          ++v7;
          if ( (unsigned int)v4 >= v6 )
          {
            LOBYTE(v4) = 1;
            goto LABEL_13;
          }
        }
      }
      v9 = (v1[1] >> 1) & 0x7F;
      if ( v9 )
        memmove(&hProvider, v1 + 2, 4LL * v9);
      if ( (unsigned int)dword_1C0011060 > 5
        && (qword_1C0011070 & 0x400000000000LL) != 0
        && (qword_1C0011078 & 0x400000000000LL) == qword_1C0011078 )
      {
        v23 = 0;
        v26 = 0;
        v19 = (char *)&v14;
        v21 = &v15;
        v24 = &v16;
        v16 = v9;
        v29 = 0;
        p_hProvider = &hProvider;
        v14 = v0;
        v15 = v9;
        v20 = 1LL;
        v22 = 1;
        v25 = 2;
        v28 = 4 * v9;
        TlgWrite(&hProvider, &unk_1C000E859, (LPCGUID)v4, v5, 6u, &pData);
      }
    }
LABEL_24:
    cData[0] = v0;
    result = RtlStringCchPrintfW(
               (NTSTRSAFE_PWSTR)&hProvider.RegHandle,
               0xC0uLL,
               L"%s\\EfficiencyClass\\%d",
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
               *(_QWORD *)cData);
    if ( result < 0
      || (result = GetRegistryDwordValueNoDefault(
                     (__int64)&hProvider.RegHandle,
                     (__int64)L"PowerEnvelope",
                     (__int64)&v17),
          result < 0)
      || (v12 = v17, result = v17 - 1, (unsigned int)(v17 - 1) > 0x3E7F) )
    {
      v12 = 750;
      v17 = 750;
    }
    *v1 = v12;
    ++v0;
    v1 += 64;
  }
  while ( v0 < 2u );
  return result;
}
