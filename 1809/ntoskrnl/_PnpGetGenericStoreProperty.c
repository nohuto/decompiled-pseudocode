/*
 * XREFs of _PnpGetGenericStoreProperty @ 0x14059B7F8
 * Callers:
 *     PiDqPnPGetObjectProperty @ 0x1405982F0 (PiDqPnPGetObjectProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x14059B194 (_PnpGetObjectPropertyWorker.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FB6E4 (PiDevCfgCopyObjectProperties.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140015DA0 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14059BA2C (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405C7E94 (_PnpCtxRegQueryValueIndirect.c)
 */

__int64 __fastcall PnpGetGenericStoreProperty(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  int v9; // r12d
  NTSTATUS v10; // ebx
  int v11; // eax
  NTSTATUS ValueIndirect; // eax
  NTSTATUS v14; // ecx
  int v15; // eax
  int dwFlags; // [rsp+20h] [rbp-F0h]
  __int64 v17; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int16 v18; // [rsp+98h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-70h]
  __int64 v20; // [rsp+A8h] [rbp-68h]
  __int64 v21; // [rsp+B0h] [rbp-60h]
  __int64 v22; // [rsp+B8h] [rbp-58h]
  _DWORD *v23; // [rsp+C0h] [rbp-50h]
  size_t pcchLength; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t pszDest[48]; // [rsp+D0h] [rbp-40h] BYREF

  v21 = a1;
  v9 = (int)a3;
  *a5 = 0;
  *a8 = 0;
  v20 = a2;
  v23 = a5;
  v22 = a6;
  Handle = 0LL;
  LOBYTE(v17) = 0;
  if ( a3 )
  {
    v10 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength);
    if ( v10 < 0 )
      return (unsigned int)v10;
  }
  v10 = RtlStringCchPrintfExW(
          pszDest,
          0x30uLL,
          0LL,
          0LL,
          0x800u,
          L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
          *(_DWORD *)a4,
          *(unsigned __int16 *)(a4 + 4),
          *(unsigned __int16 *)(a4 + 6),
          *(unsigned __int8 *)(a4 + 8),
          *(unsigned __int8 *)(a4 + 9),
          *(unsigned __int8 *)(a4 + 10),
          *(unsigned __int8 *)(a4 + 11),
          *(unsigned __int8 *)(a4 + 12),
          *(unsigned __int8 *)(a4 + 13),
          *(unsigned __int8 *)(a4 + 14),
          *(unsigned __int8 *)(a4 + 15),
          *(_DWORD *)(a4 + 16),
          v17);
  if ( v10 >= 0 )
  {
    LOBYTE(dwFlags) = 0;
    v11 = PnpOpenPropertiesKey(v21, v20, pszDest, 1LL, dwFlags);
    v10 = v11;
    if ( v11 == -1073741772 )
    {
LABEL_4:
      v10 = -1073741275;
      goto LABEL_5;
    }
    if ( v11 >= 0 )
    {
      HIDWORD(v17) = a7;
      ValueIndirect = PnpCtxRegQueryValueIndirect(
                        v21,
                        (_DWORD)Handle,
                        v9,
                        (unsigned int)&v18,
                        v22,
                        (__int64)&v17 + 4,
                        (__int64)&v17);
      v14 = ValueIndirect;
      if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
      {
        if ( !ValueIndirect || ValueIndirect == -1073741789 )
        {
          v15 = v18;
          *v23 = v18;
          if ( v15 != 1 )
          {
            *a8 = HIDWORD(v17);
            if ( v14 || !a7 )
              v10 = -1073741789;
          }
        }
        else
        {
          v10 = ValueIndirect;
        }
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
LABEL_5:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v10;
}
