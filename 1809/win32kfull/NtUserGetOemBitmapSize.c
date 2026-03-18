/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C0106520
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 */

_BOOL8 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int DpiForSystem; // eax
  __int64 OemBitmapInfoForDpi; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  BOOL v13; // ebx
  __int64 v15; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 1LL);
  if ( a1 >= 0x5D )
  {
    v13 = 0;
    UserSetLastError(87LL, v4, v5, v6);
  }
  else
  {
    DpiForSystem = GetDpiForSystem();
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v10 = (unsigned int)*(__int16 *)(OemBitmapInfoForDpi + 4);
    v11 = (unsigned int)*(__int16 *)(OemBitmapInfoForDpi + 6);
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v15) = *(__int16 *)(OemBitmapInfoForDpi + 6);
    LODWORD(v15) = *(__int16 *)(OemBitmapInfoForDpi + 4);
    *a2 = v15;
    v13 = 0;
    if ( (_DWORD)v10 )
      v13 = v11 != 0;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v10, v9);
  return v13;
}
