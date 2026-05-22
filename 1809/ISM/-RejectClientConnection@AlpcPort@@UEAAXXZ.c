/*
 * XREFs of ?RejectClientConnection@AlpcPort@@UEAAXXZ @ 0x1800A07D0
 * Callers:
 *     ?GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800A0E60 (-GetNextEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

void __fastcall AlpcPort::RejectClientConnection(AlpcPort *this)
{
  char *v1; // rbx
  __int64 v2; // rdx
  char *v3; // rcx
  char v4; // [rsp+40h] [rbp-18h]
  HANDLE hObject; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 72;
  v4 = 0;
  *((_DWORD *)this + 18) = 2621440;
  v2 = *((_QWORD *)this + 1);
  hObject = 0LL;
  NtAlpcAcceptConnectPort(&hObject, v2, 0LL, 0LL, 0LL, 0LL, (char *)this + 72, 0LL, v4);
  memset_0(v1, 0, 0x28uLL);
  v3 = (char *)hObject;
  *((_QWORD *)v1 + 40) = 0LL;
  *((_WORD *)v1 + 1) = 40;
  *((_DWORD *)v1 + 80) = 1610612736;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
}
