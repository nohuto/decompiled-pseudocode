/*
 * XREFs of WinSqmEndSession @ 0x1C00BDFB8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WinSqmEventEnabled @ 0x1C0068910 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0068960 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C00BD944 (-UnregisterWinSqmProvider@@YAKXZ.c)
 *     WinSqmEventWrite @ 0x1C00BE09C (WinSqmEventWrite.c)
 */

unsigned __int8 *WinSqmEndSession()
{
  struct _GUID *v0; // rbx
  unsigned __int8 *result; // rax
  int v2; // esi
  void *Data4; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+20h] [rbp-38h] BYREF

  v0 = gSqmSession;
  memset(UserData, 0, sizeof(UserData));
  result = &gSqmSession[-1].Data4[7];
  v2 = 0;
  if ( (unsigned __int64)&gSqmSession[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(gSqmSession) )
    {
      Data4 = v0[1].Data4;
      v2 = 1;
    }
    else
    {
      Data4 = v0;
    }
    result = (unsigned __int8 *)WinSqmEventEnabled(&SQM_END_SESSION, Data4);
    if ( (_DWORD)result )
    {
      UserData[0].Reserved = 0;
      UserData[1].Reserved = 0;
      UserData[1].Ptr = (ULONGLONG)&unk_1C01A62B4;
      UserData[0].Ptr = (ULONGLONG)Data4;
      UserData[0].Size = 16;
      UserData[1].Size = 4;
      result = (unsigned __int8 *)WinSqmEventWrite(&SQM_END_SESSION, 2u, UserData);
    }
    if ( v2 )
    {
      Win32FreePool((__int64)v0);
      return (unsigned __int8 *)UnregisterWinSqmProvider(v5, v4);
    }
  }
  return result;
}
