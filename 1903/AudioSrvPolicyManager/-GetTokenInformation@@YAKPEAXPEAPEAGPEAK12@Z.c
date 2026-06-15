/*
 * XREFs of ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001862C
 * Callers:
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x180005BE0 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180019494 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180023290 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTokenInformation(
        HANDLE TokenHandle,
        unsigned __int16 **a2,
        unsigned int *a3,
        unsigned __int16 **a4,
        unsigned int *TokenInformation)
{
  PSID *v5; // r12
  _QWORD *v6; // r14
  DWORD LastError; // ebx
  void *v12; // rcx
  BOOL v13; // ebx
  bool v14; // zf
  LPWSTR v16; // [rsp+30h] [rbp-20h] BYREF
  LPWSTR StringSid; // [rsp+38h] [rbp-18h] BYREF
  PSID Sid[2]; // [rsp+40h] [rbp-10h] BYREF
  DWORD TokenInformationLength; // [rsp+98h] [rbp+48h] BYREF
  int v20; // [rsp+A8h] [rbp+58h] BYREF

  StringSid = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v6 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 )
  {
    TokenInformationLength = 0;
    if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) )
    {
LABEL_7:
      LastError = 1337;
      goto LABEL_34;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      goto LABEL_34;
    v5 = (PSID *)LocalAlloc(0x40u, TokenInformationLength);
    if ( !v5 )
    {
LABEL_10:
      LastError = 14;
      goto LABEL_34;
    }
    if ( !GetTokenInformation(TokenHandle, TokenUser, v5, TokenInformationLength, &TokenInformationLength)
      || !ConvertSidToStringSidW(*v5, &StringSid) )
    {
      goto LABEL_12;
    }
  }
  if ( a3 )
  {
    TokenInformationLength = 4;
    if ( !GetTokenInformation(TokenHandle, TokenIsAppContainer, a3, 4u, &TokenInformationLength) )
      goto LABEL_12;
  }
  if ( TokenInformation )
  {
    TokenInformationLength = 4;
    if ( !GetTokenInformation(TokenHandle, TokenSessionId, TokenInformation, 4u, &TokenInformationLength) )
      goto LABEL_12;
  }
  if ( a4 )
  {
    TokenInformationLength = 0;
    if ( GetTokenInformation(TokenHandle, TokenAppContainerSid, 0LL, 0, &TokenInformationLength) )
      goto LABEL_7;
    LastError = GetLastError();
    if ( LastError != 122 )
      goto LABEL_34;
    v6 = LocalAlloc(0x40u, TokenInformationLength);
    if ( !v6 )
      goto LABEL_10;
    if ( !GetTokenInformation(TokenHandle, TokenAppContainerSid, v6, TokenInformationLength, &TokenInformationLength) )
      goto LABEL_12;
    if ( *v6 )
    {
      if ( (int)RtlGetAppContainerSidType(*v6, &v20) >= 0 )
      {
        v12 = (void *)*v6;
        if ( v20 == 1 )
        {
          Sid[0] = 0LL;
          if ( (int)RtlGetAppContainerParent(v12, Sid) < 0 )
            goto LABEL_12;
          v13 = ConvertSidToStringSidW(Sid[0], &v16);
          RtlFreeSid(Sid[0]);
          v14 = !v13;
        }
        else
        {
          v14 = !ConvertSidToStringSidW(v12, &v16);
        }
        if ( !v14 )
          goto LABEL_29;
      }
LABEL_12:
      LastError = GetLastError();
      goto LABEL_34;
    }
  }
LABEL_29:
  LastError = 0;
  if ( a2 )
    *a2 = StringSid;
  if ( a4 )
    *a4 = v16;
  StringSid = 0LL;
  v16 = 0LL;
LABEL_34:
  LocalFree(StringSid);
  LocalFree(v16);
  LocalFree(v5);
  LocalFree(v6);
  return LastError;
}
