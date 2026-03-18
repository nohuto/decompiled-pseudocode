/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x1406FD6CC
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1400D4DF4 (PipIsDevNodeDNStarted.c)
 *     McTemplateK0zzjzzzdd @ 0x140144C64 (McTemplateK0zzjzzzdd.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  __int64 v2; // rdx
  wchar_t *Buffer; // r8
  wchar_t *v4; // r10
  int v5; // r9d
  int v6; // edx
  BOOL IsDevNodeDNStarted; // eax
  int v8; // r11d
  wchar_t *v9; // r9
  int *v10; // rdx
  wchar_t *v11; // rdi
  const wchar_t *v12; // rcx
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int16 Length; // cx
  unsigned int v15; // r9d
  __int64 v16; // rdx
  unsigned __int16 v17; // cx
  unsigned int v18; // r9d
  __int64 v19; // rdx
  int *v20; // rdx
  wchar_t *v21; // r9
  const wchar_t *v22; // rdx
  wchar_t *v23; // rdi
  const wchar_t *v24; // rcx
  const wchar_t *v25; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+50h] [rbp-B8h]
  char v27; // [rsp+58h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING v29; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v31; // [rsp+98h] [rbp-70h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-58h]
  _QWORD v34[26]; // [rsp+B8h] [rbp-50h] BYREF

  v32 = 0LL;
  v33 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v31.Length = 0LL;
  v31.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v29.Length = 0LL;
  v29.Buffer = 0LL;
  if ( (byte_14042BDBA & 0x18) == 0x18 )
  {
    memset(v34, 0, 0xC8uLL);
    HIDWORD(v34[8]) = 6;
    LODWORD(v34[6]) = 18;
    v34[0] = &DEVPKEY_Device_ClassGuid;
    LODWORD(v34[11]) = 18;
    v34[2] = &v32;
    HIDWORD(v34[13]) = 6;
    v34[5] = &DEVPKEY_Device_DriverInfPath;
    HIDWORD(v34[18]) = 6;
    v34[7] = &UnicodeString;
    v34[10] = &DEVPKEY_Device_Service;
    v34[12] = &v31;
    v34[15] = &DEVPKEY_Device_LowerFilters;
    v34[17] = &DestinationString;
    v34[20] = &DEVPKEY_Device_UpperFilters;
    v34[22] = &v29;
    HIDWORD(v34[23]) = 6;
    v2 = *(_QWORD *)(a1 + 48);
    LODWORD(v34[1]) = 13;
    LODWORD(v34[3]) = 16;
    LODWORD(v34[16]) = 8210;
    LODWORD(v34[21]) = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210, v2, 1, 0, (__int64)v34, 5) >= 0 )
    {
      if ( SLODWORD(v34[4]) < 0 )
      {
        v32 = 0LL;
        v33 = 0LL;
      }
      if ( SLODWORD(v34[9]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v34[14]) < 0 )
        RtlInitUnicodeString(&v31, 0LL);
      if ( SLODWORD(v34[19]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v34[24]) < 0 )
        RtlInitUnicodeString(&v29, 0LL);
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Buffer )
      {
        Length = DestinationString.Length;
        if ( DestinationString.Length > 4u )
        {
          v15 = 0;
          if ( (unsigned __int64)DestinationString.Length >> 1 != 2 )
          {
            v16 = 0LL;
            do
            {
              if ( !Buffer[v16] )
              {
                Buffer[v16] = 32;
                Buffer = DestinationString.Buffer;
                Length = DestinationString.Length;
              }
              v16 = ++v15;
            }
            while ( v15 < ((unsigned __int64)Length >> 1) - 2 );
          }
          DestinationString.Length = Length - 2;
        }
      }
      v4 = v29.Buffer;
      if ( v29.Buffer )
      {
        v17 = v29.Length;
        if ( v29.Length > 4u )
        {
          v18 = 0;
          if ( (unsigned __int64)v29.Length >> 1 != 2 )
          {
            v19 = 0LL;
            do
            {
              if ( !v4[v19] )
              {
                v4[v19] = 32;
                v4 = v29.Buffer;
                v17 = v29.Length;
              }
              v19 = ++v18;
            }
            while ( v18 < ((unsigned __int64)v17 >> 1) - 2 );
            Buffer = DestinationString.Buffer;
          }
          v29.Length = v17 - 2;
        }
      }
      v5 = *(_DWORD *)(a1 + 396);
      v6 = v5 & 0x6000;
      if ( (v5 & 0x6000) != 0 )
      {
        v8 = *(_DWORD *)(a1 + 408);
      }
      else
      {
        IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
        LOBYTE(v8) = 0;
        if ( !IsDevNodeDNStarted )
          LOBYTE(v8) = -27;
      }
      if ( v6 || !PipIsDevNodeDNStarted(a1) )
      {
        if ( (v5 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( (byte_14042BDBA & 0x20) == 0 )
            goto LABEL_31;
          v9 = (wchar_t *)&dword_14094F2E4;
          v27 = v8;
          v20 = &dword_14094F2E4;
          LOBYTE(v26) = 14;
          v12 = (const wchar_t *)&dword_14094F2E4;
          v11 = L"null";
          if ( UnicodeString.Buffer )
            v11 = UnicodeString.Buffer;
          if ( v4 )
            v20 = (int *)v4;
          v25 = (const wchar_t *)v20;
          v13 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceStart_RebootRequired;
          if ( Buffer )
            v12 = Buffer;
          if ( v31.Buffer )
            v9 = v31.Buffer;
          goto LABEL_30;
        }
        if ( (byte_14042BDBA & 0x10) != 0 )
        {
          v21 = (wchar_t *)&dword_14094F2E4;
          v22 = (const wchar_t *)&dword_14094F2E4;
          v23 = L"null";
          if ( UnicodeString.Buffer )
            v23 = UnicodeString.Buffer;
          v24 = (const wchar_t *)&dword_14094F2E4;
          if ( v4 )
            v22 = v4;
          if ( Buffer )
            v24 = Buffer;
          if ( v31.Buffer )
            v21 = v31.Buffer;
          McTemplateK0zzjzzzdd(
            (__int64)v24,
            &KMPnPEvt_DeviceStart_Failure,
            (__int64)Buffer,
            *(const wchar_t **)(a1 + 48),
            v23,
            (__int64)&v32,
            v21,
            v24,
            v22,
            *(_DWORD *)(a1 + 404),
            v8);
        }
      }
      else if ( (byte_14042BDBA & 8) != 0 )
      {
        v9 = (wchar_t *)&dword_14094F2E4;
        v27 = v8;
        v10 = &dword_14094F2E4;
        v11 = L"null";
        if ( UnicodeString.Buffer )
          v11 = UnicodeString.Buffer;
        v12 = (const wchar_t *)&dword_14094F2E4;
        if ( v4 )
          v10 = (int *)v4;
        if ( Buffer )
          v12 = Buffer;
        if ( v31.Buffer )
          v9 = v31.Buffer;
        v26 = *(_DWORD *)(a1 + 404);
        v25 = (const wchar_t *)v10;
        v13 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceStart_Success;
LABEL_30:
        McTemplateK0zzjzzzdd(
          (__int64)v12,
          v13,
          (__int64)Buffer,
          *(const wchar_t **)(a1 + 48),
          v11,
          (__int64)&v32,
          v9,
          v12,
          v25,
          v26,
          v27);
      }
    }
  }
LABEL_31:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v31);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v29);
}
