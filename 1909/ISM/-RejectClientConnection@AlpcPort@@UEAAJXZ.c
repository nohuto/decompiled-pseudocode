/*
 * XREFs of ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800D6700
 * Callers:
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800D5230 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D59E0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002235C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 */

__int64 __fastcall AlpcPort::RejectClientConnection(AlpcPort *this)
{
  char *v1; // rdi
  __int64 v2; // rbx
  char *v3; // rcx
  char v5; // [rsp+40h] [rbp-18h]
  HANDLE hObject; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 88;
  *((_DWORD *)this + 22) = 2621440;
  v2 = *((_QWORD *)this + 7);
  hObject = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v5 = 0;
  NtAlpcAcceptConnectPort(&hObject, v2, 0LL, 0LL, 0LL, 0LL, v1, 0LL, v5);
  memset_0(v1, 0, 0x28uLL);
  v3 = (char *)hObject;
  *((_QWORD *)v1 + 42) = 0LL;
  *((_WORD *)v1 + 1) = 40;
  *((_DWORD *)v1 + 84) = 1610612736;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  return 0LL;
}
