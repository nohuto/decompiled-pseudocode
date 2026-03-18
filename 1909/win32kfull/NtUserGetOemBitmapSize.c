/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C00EA930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  unsigned int DpiForSystem; // eax
  __int64 OemBitmapInfoForDpi; // rax
  int v11; // r8d
  int v12; // edx
  ULONG64 v13; // rcx
  __int64 v15; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 1LL);
  v8 = 0;
  if ( a1 >= 0x5D )
  {
    UserSetLastError(87LL, v4, v6, v7);
  }
  else
  {
    DpiForSystem = GetDpiForSystem(v5, v4, v6);
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v11 = *(__int16 *)(OemBitmapInfoForDpi + 4);
    v12 = *(__int16 *)(OemBitmapInfoForDpi + 6);
    v13 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v15) = *(__int16 *)(OemBitmapInfoForDpi + 6);
    LODWORD(v15) = *(__int16 *)(OemBitmapInfoForDpi + 4);
    *a2 = v15;
    if ( v11 && v12 )
      v8 = 1;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v8;
}
