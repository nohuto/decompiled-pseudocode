/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C000C060
 * Callers:
 *     <none>
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 */

_BOOL8 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  unsigned int DpiForSystem; // eax
  __int64 OemBitmapInfoForDpi; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  BOOL v10; // ebx
  __int64 v12; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 1LL);
  if ( a1 >= 0x5D )
  {
    v10 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    DpiForSystem = GetDpiForSystem();
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v7 = (unsigned int)*(__int16 *)(OemBitmapInfoForDpi + 4);
    v8 = (unsigned int)*(__int16 *)(OemBitmapInfoForDpi + 6);
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v12) = *(__int16 *)(OemBitmapInfoForDpi + 6);
    LODWORD(v12) = *(__int16 *)(OemBitmapInfoForDpi + 4);
    *a2 = v12;
    v10 = 0;
    if ( (_DWORD)v7 )
      v10 = v8 != 0;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v7, v6);
  return v10;
}
