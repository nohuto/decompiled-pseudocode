/*
 * XREFs of EtwTiLogDriverObjectLoad @ 0x14070AE88
 * Callers:
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400E5560 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 */

BOOLEAN __fastcall EtwTiLogDriverObjectLoad(__int16 *a1)
{
  REGHANDLE v1; // rdi
  BOOLEAN result; // al
  unsigned __int16 v4; // ax
  const wchar_t *v5; // rdx
  int v6; // ecx
  __int16 v7; // ax
  NTSTATUS v8; // eax
  int v9; // ecx
  __int16 v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 SystemInformation; // [rsp+38h] [rbp-48h] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  int *v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]

  v1 = EtwThreatIntProvRegHandle;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_LOAD);
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
      v10 = v7;
      v15 = v5;
      v16 = v6;
      UserData.Ptr = (ULONGLONG)&v10;
      *(_QWORD *)&UserData.Size = 2LL;
      v17 = 0;
      SystemInformation = 8LL;
      v8 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
      v9 = v11;
      v19 = 4LL;
      if ( v8 >= 0 )
        v9 = HIDWORD(SystemInformation);
      v18 = &v11;
      if ( v8 < 0 )
        v9 = -1;
      v11 = v9;
      return EtwWrite(EtwThreatIntProvRegHandle, &THREATINT_DRIVER_OBJECT_LOAD, 0LL, 3u, &UserData);
    }
  }
  return result;
}
