/*
 * XREFs of EtwTiLogDeviceObjectLoadUnload @ 0x140681798
 * Callers:
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x140681110 (IoCreateDevice.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400AF010 (EtwProviderEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTiLogDeviceObjectLoadUnload(char a1, __int16 *a2, __int16 *a3)
{
  REGHANDLE v3; // rsi
  const EVENT_DESCRIPTOR *v5; // r14
  BOOLEAN result; // al
  const wchar_t *v8; // rdx
  int v9; // ecx
  unsigned __int16 v10; // ax
  const wchar_t *v11; // r9
  int v12; // r8d
  __int16 v13; // ax
  unsigned __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // [rsp+38h] [rbp-19h] BYREF
  __int16 v17; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  const wchar_t *v19; // [rsp+58h] [rbp+7h]
  int v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+64h] [rbp+13h]
  __int16 *v22; // [rsp+68h] [rbp+17h]
  __int64 v23; // [rsp+70h] [rbp+1Fh]
  const wchar_t *v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+80h] [rbp+2Fh]
  int v26; // [rsp+84h] [rbp+33h]

  v3 = EtwThreatIntProvRegHandle;
  v5 = (const EVENT_DESCRIPTOR *)&THREATINT_DEVICE_OBJECT_LOAD;
  if ( !a1 )
    v5 = &THREATINT_DEVICE_OBJECT_UNLOAD;
  result = EtwEventEnabled(EtwThreatIntProvRegHandle, v5);
  if ( result )
  {
    result = EtwProviderEnabled(v3, 0, 0x80000000uLL);
    if ( result )
    {
      v8 = L"(null)";
      v9 = 12;
      if ( a2 && (v10 = *a2) != 0 )
      {
        v11 = (const wchar_t *)*((_QWORD *)a2 + 1);
        v12 = v10;
        v13 = v10 >> 1;
      }
      else
      {
        v12 = 12;
        v11 = L"(null)";
        v13 = 6;
      }
      v16 = v13;
      UserData.Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData.Size = 2LL;
      v19 = v11;
      v20 = v12;
      v21 = 0;
      if ( a3 && (v14 = *a3) != 0 )
      {
        v8 = (const wchar_t *)*((_QWORD *)a3 + 1);
        v9 = v14;
        v15 = v14 >> 1;
      }
      else
      {
        v15 = 6;
      }
      v17 = v15;
      v24 = v8;
      v22 = &v17;
      v25 = v9;
      v23 = 2LL;
      v26 = 0;
      return EtwWrite(v3, v5, 0LL, 4u, &UserData);
    }
  }
  return result;
}
