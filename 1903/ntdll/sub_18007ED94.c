/*
 * XREFs of sub_18007ED94 @ 0x18007ED94
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180069B28 @ 0x180069B28 (sub_180069B28.c)
 *     LdrSetDefaultDllDirectories @ 0x18007EF00 (LdrSetDefaultDllDirectories.c)
 */

int sub_18007ED94()
{
  struct _PEB *v0; // rax
  _UNICODE_STRING *p_DllPath; // rcx
  BOOLEAN BitField; // dl
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _PS_PKG_CLAIM v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  _PS_PKG_CLAIM v10; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  _PS_PKG_CLAIM v12; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+20h] BYREF
  _PS_PKG_CLAIM v15; // [rsp+90h] [rbp+28h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+30h] BYREF

  v0 = NtCurrentPeb();
  p_DllPath = &v0->ProcessParameters->DllPath;
  xmmword_180164390 = 0uLL;
  xmmword_180164380 = 0uLL;
  BitField = v0->BitField;
  if ( (BitField & 0x10) != 0 && p_DllPath->Length )
  {
    v3 = (__int128)*p_DllPath;
    dword_180162714 = 41;
    xmmword_180164390 = v3;
    xmmword_180164380 = v3;
    if ( (int)sub_180069B28((__int64)p_DllPath, 4, &v13, &v15, &v14) < 0 || v13 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      dword_180162714 &= ~1u;
    if ( (int)sub_180069B28(v4, 7, &v13, &v8, &v16) >= 0 && v13 == 458753 )
      dword_180162714 |= 2u;
    if ( (int)sub_180069B28(v5, 19, &v13, &v10, &v9) >= 0 && v13 == 1245185 )
      dword_180162714 |= 0x40u;
    LODWORD(v0) = sub_180069B28(v6, 32, &v13, &v12, &v11) | 0x10000000;
    if ( (int)v0 >= 0 && v13 == 2097153 )
      dword_180162714 |= 4u;
  }
  else if ( (BitField & 2) != 0 )
  {
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LODWORD(v0) = LdrSetDllDirectory(p_DllPath);
  }
  return (int)v0;
}
