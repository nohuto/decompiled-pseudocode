/*
 * XREFs of _CmMatchLastKnownParentCallback @ 0x1408F95F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 */

bool __fastcall CmMatchLastKnownParentCallback(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  char v4; // bl
  int v7; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE v8[12]; // [rsp+64h] [rbp-1B4h] BYREF
  wchar_t Str2[200]; // [rsp+70h] [rbp-1A8h] BYREF

  v4 = 0;
  v7 = 0;
  if ( (int)PnpGetObjectProperty(
              a1,
              a2,
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastKnownParent,
              (__int64)&v7,
              (__int64)Str2,
              400,
              (__int64)v8,
              0) >= 0
    && v7 == 18 )
  {
    return wcsicmp(a4, Str2) == 0;
  }
  return v4;
}
