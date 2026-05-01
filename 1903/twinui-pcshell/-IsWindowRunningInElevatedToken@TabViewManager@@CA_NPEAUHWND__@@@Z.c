/*
 * XREFs of ?IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z @ 0x180231F94
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18023F180 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801206F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SHIsAppElevated@@YAJPEAXPEAH@Z @ 0x1802377F4 (-SHIsAppElevated@@YAJPEAXPEAH@Z.c)
 */

bool __fastcall TabViewManager::IsWindowRunningInElevatedToken(HWND a1)
{
  bool v1; // di
  char *v2; // rbx
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp+20h] BYREF

  v1 = 0;
  if ( !GetWindowThreadProcessId(a1, &dwProcessId) )
    return 0;
  v2 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( (unsigned __int64)(v2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_11:
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v2);
    return 0;
  }
  TokenHandle = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &TokenHandle,
    0LL);
  if ( !OpenProcessToken(v2, 8u, &TokenHandle) )
  {
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    goto LABEL_11;
  }
  if ( (int)SHIsAppElevated(TokenHandle, &v5) >= 0 )
    v1 = v5 != 0;
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  CloseHandle(v2);
  return v1;
}
