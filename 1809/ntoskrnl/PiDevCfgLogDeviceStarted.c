/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x1406F4938
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140007294 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     McTemplateK0zzjzzzdd @ 0x14015D354 (McTemplateK0zzjzzzdd.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
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
  _QWORD v32[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v33[26]; // [rsp+B8h] [rbp-50h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v31.Length = 0;
  v31.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v29.Length = 0;
  v29.Buffer = 0LL;
  if ( (byte_140406846 & 0x18) == 0x18 )
  {
    memset(v33, 0, 0xC8uLL);
    HIDWORD(v33[8]) = 6;
    LODWORD(v33[6]) = 18;
    v33[0] = &DEVPKEY_Device_ClassGuid;
    LODWORD(v33[11]) = 18;
    v33[2] = v32;
    HIDWORD(v33[13]) = 6;
    v33[5] = &DEVPKEY_Device_DriverInfPath;
    HIDWORD(v33[18]) = 6;
    v33[7] = &UnicodeString;
    v33[10] = &DEVPKEY_Device_Service;
    v33[12] = &v31;
    v33[15] = &DEVPKEY_Device_LowerFilters;
    v33[17] = &DestinationString;
    v33[20] = &DEVPKEY_Device_UpperFilters;
    v33[22] = &v29;
    HIDWORD(v33[23]) = 6;
    v2 = *(_QWORD *)(a1 + 48);
    LODWORD(v33[1]) = 13;
    LODWORD(v33[3]) = 16;
    LODWORD(v33[16]) = 8210;
    LODWORD(v33[21]) = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210, v2, 1, 0, (__int64)v33, 5) >= 0 )
    {
      if ( SLODWORD(v33[4]) < 0 )
      {
        v32[0] = 0LL;
        v32[1] = 0LL;
      }
      if ( SLODWORD(v33[9]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v33[14]) < 0 )
        RtlInitUnicodeString(&v31, 0LL);
      if ( SLODWORD(v33[19]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v33[24]) < 0 )
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
          if ( (byte_140406846 & 0x20) == 0 )
            goto LABEL_31;
          v9 = (wchar_t *)&dword_140912444;
          v27 = v8;
          v20 = &dword_140912444;
          LOBYTE(v26) = 14;
          v12 = (const wchar_t *)&dword_140912444;
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
        if ( (byte_140406846 & 0x10) != 0 )
        {
          v21 = (wchar_t *)&dword_140912444;
          v22 = (const wchar_t *)&dword_140912444;
          v23 = L"null";
          if ( UnicodeString.Buffer )
            v23 = UnicodeString.Buffer;
          v24 = (const wchar_t *)&dword_140912444;
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
            (__int64)v32,
            v21,
            v24,
            v22,
            *(_DWORD *)(a1 + 404),
            v8);
        }
      }
      else if ( (byte_140406846 & 8) != 0 )
      {
        v9 = (wchar_t *)&dword_140912444;
        v27 = v8;
        v10 = &dword_140912444;
        v11 = L"null";
        if ( UnicodeString.Buffer )
          v11 = UnicodeString.Buffer;
        v12 = (const wchar_t *)&dword_140912444;
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
          (__int64)v32,
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
