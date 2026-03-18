/*
 * XREFs of InitScancodeMap @ 0x1C0045640
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     FastGetProfileValue @ 0x1C0046540 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C0046CF0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

void InitScancodeMap()
{
  const WCHAR *v0; // rbx
  void *v1; // rdi
  NTSTATUS v2; // eax
  ULONG v3; // ebx
  const WCHAR *v4; // rbx
  const WCHAR *v5; // r14
  void *v6; // rdi
  NTSTATUS v7; // eax
  ULONG v8; // edi
  void *v9; // rdi
  void *v10; // r15
  void *v11; // r14
  ULONG *v12; // rsi
  NTSTATUS v13; // eax
  ULONG Length; // [rsp+40h] [rbp-49h] BYREF
  int v15; // [rsp+44h] [rbp-45h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+58h] [rbp-31h] BYREF
  ULONG Size; // [rsp+60h] [rbp-29h]
  _BYTE Size_4[12]; // [rsp+64h] [rbp-25h] BYREF
  _WORD v20[40]; // [rsp+70h] [rbp-19h] BYREF

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  v15 = gdwPolicyFlags;
  v0 = L"Scancode Map";
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v20[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v20);
    v0 = v20;
  }
  v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
  if ( v1 )
  {
    while ( 1 )
    {
      Length = 16;
      RtlInitUnicodeString(&DestinationString, v0);
      v2 = ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
      if ( v2 >= 0 )
      {
        Length = Size;
        memmove(0LL, Size_4, Size);
        ZwClose(v1);
        v3 = Length;
        goto LABEL_11;
      }
      if ( v2 == -2147483643 )
        break;
      if ( !v15 )
      {
        ZwClose(v1);
        goto LABEL_12;
      }
      ZwClose(v1);
      v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
      if ( !v1 )
        goto LABEL_12;
    }
    ZwClose(v1);
    v3 = Size;
LABEL_11:
    if ( v3 - 13 <= 0xFFF1 )
    {
      v9 = Win32AllocPoolZInit(v3 + 8LL, 0x6D637355u);
      if ( v9 )
      {
        FastGetProfileValue(0LL, 8LL, L"Scancode Map");
        gpScancodeMap = (__int64)v9;
      }
    }
  }
LABEL_12:
  if ( gpFlexMap )
  {
    Win32FreePool((__int64)gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  v4 = L"Scancode Map Ex";
  v15 = gdwPolicyFlags;
  v5 = L"Scancode Map Ex";
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v20[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v20);
    v5 = v20;
  }
  v6 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
  if ( v6 )
  {
    while ( 1 )
    {
      Length = 16;
      RtlInitUnicodeString(&DestinationString, v5);
      v7 = ZwQueryValueKey(v6, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
      if ( v7 >= 0 )
      {
        Length = Size;
        memmove(0LL, Size_4, Size);
        ZwClose(v6);
        v8 = Length;
        goto LABEL_22;
      }
      if ( v7 == -2147483643 )
        break;
      if ( !v15 )
      {
        ZwClose(v6);
        return;
      }
      ZwClose(v6);
      v6 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
      if ( !v6 )
        return;
    }
    ZwClose(v6);
    v8 = Size;
LABEL_22:
    if ( v8 >= 0x10 && (v8 & 0xF) == 0 )
    {
      v10 = Win32AllocPoolZInit(v8, 0x6D637355u);
      if ( v10 )
      {
        v15 = gdwPolicyFlags;
        if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          v20[0] = 0;
          RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v20);
          v4 = v20;
        }
        v11 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
        if ( v11 )
        {
          while ( 1 )
          {
            Length = v8 + 12;
            v12 = (ULONG *)Win32AllocPoolWithQuota(v8 + 12, 0x72707355u);
            if ( !v12 )
              break;
            RtlInitUnicodeString(&DestinationString, v4);
            v13 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, v12, Length, &Length);
            if ( v13 >= 0 )
            {
              Length = v12[2];
              memmove(v10, v12 + 3, Length);
              Win32FreePool((__int64)v12);
              break;
            }
            if ( !v15 )
            {
              Win32FreePool((__int64)v12);
              break;
            }
            Win32FreePool((__int64)v12);
            ZwClose(v11);
            v11 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
            if ( !v11 )
              goto LABEL_44;
          }
          ZwClose(v11);
        }
LABEL_44:
        gdwFlexMapSize = v8 >> 4;
        gpFlexMap = (struct tagSCANCODEFLEXIBLEMAP *)v10;
      }
    }
  }
}
