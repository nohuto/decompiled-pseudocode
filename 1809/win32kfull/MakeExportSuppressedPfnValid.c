/*
 * XREFs of MakeExportSuppressedPfnValid @ 0x1C001B660
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B544 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MakeExportSuppressedPfnValid(__int64 a1)
{
  NTSTATUS result; // eax
  int ProcessInformation; // [rsp+30h] [rbp-9h] BYREF
  char v4; // [rsp+34h] [rbp-5h]
  char v5; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp+7h] BYREF
  _DWORD v7[2]; // [rsp+50h] [rbp+17h] BYREF
  char *v8; // [rsp+58h] [rbp+1Fh]
  _QWORD *v9; // [rsp+60h] [rbp+27h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+70h] [rbp+37h]
  _QWORD v12[2]; // [rsp+78h] [rbp+3Fh] BYREF

  ProcessInformation = 7;
  result = ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessCookie|ProcessUserModeIOPL,
             &ProcessInformation,
             8u,
             0LL);
  if ( result >= 0 && (v4 & 2) != 0 )
  {
    v7[1] = 0;
    v10 = 0LL;
    v11 = 0LL;
    v6[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = &v5;
    v6[1] = 4096LL;
    v9 = v12;
    v12[1] = 4LL;
    v12[0] = a1 & 0xFFF;
    v7[0] = 1;
    return ZwSetInformationVirtualMemory(-1LL, 2LL, 1LL, v6, v7, 40);
  }
  return result;
}
