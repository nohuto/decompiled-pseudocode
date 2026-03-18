/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C000B7D0
 * Callers:
 *     <none>
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int DpiForSystem; // eax
  __int64 OemBitmapInfoForDpi; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v12; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 1LL);
  v6 = 0;
  if ( a1 >= 0x5D )
  {
    UserSetLastError(87LL);
  }
  else
  {
    DpiForSystem = GetDpiForSystem(v5, v4);
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v9 = *(__int16 *)(OemBitmapInfoForDpi + 4);
    v10 = *(__int16 *)(OemBitmapInfoForDpi + 6);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v12) = *(__int16 *)(OemBitmapInfoForDpi + 6);
    LODWORD(v12) = *(__int16 *)(OemBitmapInfoForDpi + 4);
    *a2 = v12;
    if ( v9 && v10 )
      v6 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
