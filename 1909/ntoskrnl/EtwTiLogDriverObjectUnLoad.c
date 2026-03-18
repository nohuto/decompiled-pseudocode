/*
 * XREFs of EtwTiLogDriverObjectUnLoad @ 0x140768FD4
 * Callers:
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     IoDeleteDriver @ 0x140855B80 (IoDeleteDriver.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400E5560 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTiLogDriverObjectUnLoad(__int16 *a1)
{
  REGHANDLE v1; // rdi
  BOOLEAN result; // al
  unsigned __int16 v4; // ax
  const wchar_t *v5; // rdx
  int v6; // ecx
  __int16 v7; // ax
  __int16 v8; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  const wchar_t *v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]

  v1 = EtwThreatIntProvRegHandle;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_UNLOAD);
  if ( result )
  {
    result = EtwProviderEnabled(v1, 0, 0x40000000uLL);
    if ( result )
    {
      if ( a1 && (v4 = *a1) != 0 )
      {
        v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
        v6 = v4;
        v7 = v4 >> 1;
      }
      else
      {
        v6 = 12;
        v5 = L"(null)";
        v7 = 6;
      }
      v8 = v7;
      v10 = v5;
      UserData.Ptr = (ULONGLONG)&v8;
      v11 = v6;
      *(_QWORD *)&UserData.Size = 2LL;
      v12 = 0;
      return EtwWrite(v1, &THREATINT_DRIVER_OBJECT_UNLOAD, 0LL, 2u, &UserData);
    }
  }
  return result;
}
