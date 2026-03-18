/*
 * XREFs of MakeExportSuppressedPfnValid @ 0x1C001B554
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B448 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MakeExportSuppressedPfnValid(__int64 a1)
{
  NTSTATUS result; // eax
  int ProcessInformation; // [rsp+30h] [rbp-50h] BYREF
  char v4; // [rsp+34h] [rbp-4Ch]
  char v5; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v6[2]; // [rsp+40h] [rbp-40h] BYREF
  char *v7; // [rsp+48h] [rbp-38h]
  _QWORD *v8; // [rsp+50h] [rbp-30h]
  _QWORD v9[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+68h] [rbp-18h] BYREF

  ProcessInformation = 7;
  result = ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessCookie|ProcessUserModeIOPL,
             &ProcessInformation,
             8u,
             0LL);
  if ( result >= 0 && (v4 & 2) != 0 )
  {
    v6[1] = 0;
    v9[1] = 4096LL;
    v9[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
    v10[1] = 4LL;
    v7 = &v5;
    v10[0] = a1 & 0xFFF;
    v8 = v10;
    v6[0] = 1;
    return ZwSetInformationVirtualMemory(-1LL, 2LL, 1LL, v9, v6, 24);
  }
  return result;
}
