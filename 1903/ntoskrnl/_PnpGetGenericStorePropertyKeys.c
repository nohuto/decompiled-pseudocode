/*
 * XREFs of _PnpGetGenericStorePropertyKeys @ 0x140715D4C
 * Callers:
 *     PiDevCfgCopyObjectProperties @ 0x140715C44 (PiDevCfgCopyObjectProperties.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140865790 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140937F30 (_PnpGetObjectPropertyKeysWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140002B5C (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x1405C1154 (_PnpOpenPropertiesKey.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     _RegRtlQueryValue @ 0x1405C32E4 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     RtlUnicodeStringToInteger @ 0x1406B2980 (RtlUnicodeStringToInteger.c)
 *     _PnpCtxRegEnumValue @ 0x1406F9340 (_PnpCtxRegEnumValue.c)
 *     _RegRtlEnumKey @ 0x140714FB0 (_RegRtlEnumKey.c)
 */

signed int __fastcall PnpGetGenericStorePropertyKeys(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  const WCHAR *v7; // rdi
  int v8; // r11d
  signed int result; // eax
  ULONG i; // r13d
  int v12; // eax
  __int64 v13; // rcx
  ULONG v14; // r15d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // bl
  ULONG v19; // edi
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // [rsp+28h] [rbp-D8h]
  unsigned int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v31; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v34; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h]
  GUID Guid; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v38[8]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int SourceString[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[176]; // [rsp+110h] [rbp+10h] BYREF

  v7 = a3;
  v8 = a2;
  v36 = a5;
  v34 = a3;
  *a7 = 0;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !a3 || (result = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength), result >= 0) )
  {
    result = PnpOpenPropertiesKey(a1, v8, 0LL, 9, 0, v25, &KeyHandle);
    if ( result == -1073741772 )
      return 0;
    if ( result >= 0 )
    {
      for ( i = 0; ; i = pcchLength )
      {
        do
        {
LABEL_9:
          v27 = 39;
          v12 = RegRtlEnumKey(KeyHandle, i++, SourceString, &v27);
          LODWORD(pcchLength) = i;
        }
        while ( v12 == -1073741789 );
        if ( v12 )
        {
          ZwClose(KeyHandle);
          return a6 < *a7 ? 0xC0000023 : 0;
        }
        if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString) < 0
          || RtlGUIDFromString(&DestinationString, &Guid) < 0 )
        {
          goto LABEL_9;
        }
        v13 = a1 ? *(_QWORD *)(a1 + 224) : 0LL;
        if ( (int)SysCtxRegOpenKey(v13, (__int64)KeyHandle, (__int64)SourceString, 0, 9u, (__int64)&v31) < 0 )
          goto LABEL_9;
        v14 = 0;
        while ( 1 )
        {
          do
          {
            v27 = 9;
            v15 = RegRtlEnumKey(v31, v14++, v38, &v27);
          }
          while ( v15 == -1073741789 );
          if ( v15 )
            break;
          if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v38) >= 0
            && RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) >= 0 )
          {
            v16 = a1 ? *(_QWORD *)(a1 + 224) : 0LL;
            if ( (int)SysCtxRegOpenKey(v16, (__int64)v31, (__int64)v38, 0, 1u, (__int64)&Handle) >= 0 )
            {
              v18 = 0;
              if ( a4 )
              {
                v19 = 0;
                do
                {
                  v27 = 85;
                  v20 = PnpCtxRegEnumValue(v17, Handle, v19++, v40, (__int64)&v27, (__int64)&v28, 0LL, 0);
                }
                while ( v20 == -1073741789 );
                v7 = v34;
                v21 = v20 == 0;
              }
              else
              {
                v27 = 0;
                v22 = RegRtlQueryValue(Handle, v7, &v28, 0LL, &v27);
                if ( !v22 )
                  goto LABEL_33;
                v21 = v22 == -1073741789;
              }
              if ( v21 )
LABEL_33:
                v18 = 1;
              ZwClose(Handle);
              if ( v18 )
              {
                v23 = *a7;
                if ( (unsigned int)v23 < a6 )
                {
                  v24 = v36;
                  *(GUID *)(v36 + 20 * v23) = Guid;
                  *(_DWORD *)(v24 + 20LL * *a7 + 16) = Value;
                  LODWORD(v23) = *a7;
                }
                *a7 = v23 + 1;
              }
            }
          }
        }
        ZwClose(v31);
      }
    }
  }
  return result;
}
