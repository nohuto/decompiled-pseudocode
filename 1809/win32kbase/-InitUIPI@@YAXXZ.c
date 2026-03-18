/*
 * XREFs of ?InitUIPI@@YAXXZ @ 0x1C006B5B0
 * Callers:
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void InitUIPI(void)
{
  void *v0; // rbx
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[4]; // [rsp+34h] [rbp-44h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( (int)RtlQueryElevationFlags(v5) < 0 || (v5[0] & 1) != 0 )
  {
    v4 = gdwPolicyFlags;
    while ( 1 )
    {
      v0 = OpenCacheKeyEx(0LL, 0x31u, 0x20019u, &v4);
      if ( !v0 )
        break;
      RtlInitUnicodeString(&DestinationString, L"EnableUIPI");
      if ( ZwQueryValueKey(
             v0,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v1 = 0;
        v4 = 0;
        gbEnforceUIPI = v9;
      }
      else
      {
        v1 = v4;
        if ( !v4 )
          gbEnforceUIPI = 1;
      }
      ZwClose(v0);
      if ( !v1 )
        goto LABEL_12;
    }
    gbEnforceUIPI = 1;
LABEL_12:
    if ( (int)IsUIPISQMStatusSupported() >= 0 )
    {
      v2 = (unsigned int)gbEnforceUIPI;
      v3 = 1LL;
LABEL_14:
      UIPISQMStatus(v3, v2);
    }
  }
  else if ( (int)IsUIPISQMStatusSupported() >= 0 )
  {
    v2 = 0LL;
    v3 = 0LL;
    goto LABEL_14;
  }
}
