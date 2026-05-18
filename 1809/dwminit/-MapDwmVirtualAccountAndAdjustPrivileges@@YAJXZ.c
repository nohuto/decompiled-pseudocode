/*
 * XREFs of ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001A78
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B10 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001180 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x1800018C4 (-LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001988 (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800038A8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800050C0 (__security_check_cookie.c)
 */

__int64 MapDwmVirtualAccountAndAdjustPrivileges(void)
{
  int v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // ebx
  int v3; // r9d
  ULONG SubAuthority2; // [rsp+28h] [rbp-49h]
  int v6; // [rsp+68h] [rbp-9h] BYREF
  PSID v7; // [rsp+70h] [rbp-1h] BYREF
  PSID v8; // [rsp+78h] [rbp+7h] BYREF
  PSID Sid; // [rsp+80h] [rbp+Fh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+17h] BYREF
  struct _UNICODE_STRING v11; // [rsp+98h] [rbp+27h] BYREF
  struct _UNICODE_STRING v12; // [rsp+A8h] [rbp+37h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B8h] [rbp+47h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Sid = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = StringCchPrintfW(&gwszDwmAccountName, 30LL, L"DWM-%d", NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 < 0 )
  {
    SubAuthority2 = 531;
    goto LABEL_17;
  }
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v11, L"Window Manager Group");
  RtlInitUnicodeString(&v12, &gwszDwmAccountName);
  v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v2 >= 0 )
  {
    v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &v8);
    if ( v2 < 0 )
    {
      SubAuthority2 = 561;
      goto LABEL_4;
    }
    v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 3u, 0x5Au, 0, NtCurrentPeb()->SessionId, 0, 0, 0, 0, 0, &v7);
    if ( v2 < 0 )
    {
      SubAuthority2 = 574;
      goto LABEL_4;
    }
    v0 = AddSidMappingToLsa(&DestinationString, 0LL, Sid, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v6);
    v1 = v0;
    if ( v0 < 0 )
    {
      SubAuthority2 = 576;
    }
    else if ( LsaCollisionResult(v6)
           || (v0 = AddSidMappingToLsa(&DestinationString, &v11, v8, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v6),
               v1 = v0,
               v0 >= 0) )
    {
      v0 = AddSidMappingToLsa(&DestinationString, &v12, v7, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v6);
      v1 = v0;
      if ( v0 >= 0 )
        goto LABEL_19;
      SubAuthority2 = 592;
    }
    else
    {
      SubAuthority2 = 588;
    }
LABEL_17:
    v3 = v0;
    goto LABEL_18;
  }
  SubAuthority2 = 548;
LABEL_4:
  v1 = v2 | 0x10000000;
  v3 = v1;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180007FC0, 1u, v3, SubAuthority2);
LABEL_19:
  if ( v7 )
    RtlFreeSid(v7);
  if ( v8 )
    RtlFreeSid(v8);
  if ( Sid )
    RtlFreeSid(Sid);
  return v1;
}
