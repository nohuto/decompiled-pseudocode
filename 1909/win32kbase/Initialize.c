/*
 * XREFs of Initialize @ 0x1C0061B30
 * Callers:
 *     Win32UserInitialize @ 0x1C0264310 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0015390 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 Initialize()
{
  unsigned int v0; // ebx
  int v1; // edi
  void *v2; // r14
  int v3; // esi
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-40h] BYREF
  int v6; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-20h] BYREF
  int v10; // [rsp+5Ch] [rbp-14h]

  v6 = 0;
  UIPrivelegeIsolation::fEnforce = 0;
  RtlQueryElevationFlags(&v6);
  v0 = 1;
  if ( (v6 & 1) != 0 )
  {
    v1 = v6;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v5 = gdwPolicyFlags;
    while ( 1 )
    {
      v2 = OpenCacheKeyEx(0LL, 0x31u, 0x20019u, &v5);
      if ( !v2 )
        break;
      RtlInitUnicodeString(&DestinationString, L"EnableUIPI");
      if ( ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) < 0 )
      {
        v3 = v5;
        if ( !v5 )
          v1 = 1;
      }
      else
      {
        v1 = v10;
        v3 = 0;
        v5 = 0;
      }
      ZwClose(v2);
      if ( !v3 )
      {
        UIPrivelegeIsolation::fEnforce = 0;
        if ( !v1 )
          goto LABEL_9;
        break;
      }
    }
    UIPrivelegeIsolation::fEnforce = 1;
  }
  else
  {
    v0 = 0;
  }
LABEL_9:
  result = IsUIPISQMStatusSupported();
  if ( (int)result >= 0 )
    return UIPISQMStatus(v0, UIPrivelegeIsolation::fEnforce);
  return result;
}
