/*
 * XREFs of UsbhCheckDeviceErrata @ 0x1C00249F4
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0024EA4 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C0024E10 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     UsbhApplyDeviceFix @ 0x1C0056F2C (UsbhApplyDeviceFix.c)
 */

NTSTATUS __fastcall UsbhCheckDeviceErrata(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r9
  NTSTATUS result; // eax
  int v7; // ebx
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-D8h]
  __int64 v10; // [rsp+20h] [rbp-D8h]
  int v11; // [rsp+28h] [rbp-D0h]
  int v12; // [rsp+48h] [rbp-B0h]
  __int128 v13; // [rsp+50h] [rbp-A8h] BYREF
  wchar_t pszDest[40]; // [rsp+60h] [rbp-98h] BYREF

  v4 = PdoExt(a2);
  if ( ((*((_WORD *)v4 + 701) - 256) & 0xFFEF) == 0 )
    v4[358] &= ~0x200u;
  v5 = *((unsigned __int16 *)v4 + 704);
  v11 = *((unsigned __int16 *)v4 + 706);
  v9 = *((unsigned __int16 *)v4 + 705);
  v13 = 0uLL;
  result = RtlStringCbPrintfW(pszDest, 0x50uLL, L"USB:USB\\VID_%04X&PID_%04X&REV_%04X", v5, v9, v11);
  if ( result < 0
    || (KseQueryDeviceFlags(pszDest, L"USB", &v13),
        LODWORD(v10) = *((unsigned __int16 *)v4 + 705),
        result = RtlStringCbPrintfW(
                   pszDest,
                   0x50uLL,
                   L"USB:USB\\VID_%04X&PID_%04X",
                   *((unsigned __int16 *)v4 + 704),
                   v10),
        result < 0) )
  {
    v7 = 0;
  }
  else
  {
    result = KseQueryDeviceFlags(pszDest, L"USB", (char *)&v13 + 8);
    v7 = DWORD2(v13) | v13;
  }
  if ( (v7 & 1) != 0 )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 1, usbfile_dq_c, 2571, v12);
    v8 = 1LL;
  }
  else
  {
    if ( (v7 & 2) == 0 )
      goto LABEL_8;
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 2, usbfile_dq_c, 2578, v12);
    v8 = 2LL;
  }
  result = UsbhApplyDeviceFix(a1, a2, v8);
LABEL_8:
  if ( (v7 & 0x40) != 0 )
    v4[358] |= 0x800u;
  if ( (v7 & 4) != 0 )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 3, usbfile_dq_c, 2596, v12);
    result = UsbhApplyDeviceFix(a1, a2, 3LL);
  }
  if ( (v7 & 8) != 0 )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 10, usbfile_dq_c, 2607, v12);
    result = UsbhApplyDeviceFix(a1, a2, 10LL);
  }
  if ( (v7 & 0x10) != 0 )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 5, usbfile_dq_c, 2618, v12);
    result = UsbhApplyDeviceFix(a1, a2, 5LL);
  }
  if ( (v7 & 0x20) != 0 )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 7, usbfile_dq_c, 2629, v12);
    result = UsbhApplyDeviceFix(a1, a2, 7LL);
  }
  if ( (*(_QWORD *)&v7 & 0x200000LL) != 0 )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 11, usbfile_dq_c, 2639, v12);
    result = UsbhApplyDeviceFix(a1, a2, 11LL);
  }
  if ( (v7 & 0x8000000) != 0 )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 714), 120, (_DWORD)v4 + 1400, 18, 0, 12, usbfile_dq_c, 2649, v12);
    return UsbhApplyDeviceFix(a1, a2, 12LL);
  }
  return result;
}
