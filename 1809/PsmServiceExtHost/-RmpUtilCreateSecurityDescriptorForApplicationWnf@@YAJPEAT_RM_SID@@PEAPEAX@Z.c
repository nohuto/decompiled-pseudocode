/*
 * XREFs of ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x1800317CC
 * Callers:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180031734 (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     RmpWnfGetPublisherSid @ 0x180013B88 (RmpWnfGetPublisherSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpUtilCreateSecurityDescriptorForApplicationWnf(PSID pSid, void **a2)
{
  NTSTATUS PublisherSid; // ebx
  PVOID Heap; // rax
  void *v6; // rdi
  DWORD LastError; // eax
  DWORD v9; // eax
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v12; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v13; // [rsp+3Ch] [rbp-C4h] BYREF
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Owner[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v17[80]; // [rsp+C0h] [rbp-40h] BYREF
  struct _ACL Acl; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+250h] [rbp+150h] BYREF
  DWORD *v20; // [rsp+270h] [rbp+170h]
  int v21; // [rsp+278h] [rbp+178h]
  int v22; // [rsp+27Ch] [rbp+17Ch]
  EVENT_DATA_DESCRIPTOR v23; // [rsp+280h] [rbp+180h] BYREF
  DWORD *v24; // [rsp+2A0h] [rbp+1A0h]
  int v25; // [rsp+2A8h] [rbp+1A8h]
  int v26; // [rsp+2ACh] [rbp+1ACh]

  Sid = 0LL;
  PublisherSid = RmpWnfGetPublisherSid(Owner);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlCreateAcl(&Acl, 0x138u, 2u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, Owner);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  cbSid = 68;
  if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v17, &cbSid) )
  {
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
    {
      LastError = GetLastError();
      v22 = 0;
      v12 = LastError;
      v20 = &v12;
      v21 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084A31, 0LL, 0LL, 3u, &pData);
    }
    goto LABEL_24;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v17);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  if ( !ConvertStringSidToSidW(
          L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
          &Sid) )
  {
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
    {
      v9 = GetLastError();
      v26 = 0;
      v13 = v9;
      v24 = &v13;
      v25 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800849FA, 0LL, 0LL, 3u, &v23);
    }
LABEL_24:
    PublisherSid = -1073741823;
    goto LABEL_17;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
  if ( PublisherSid >= 0 )
  {
    PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, pSid);
    if ( PublisherSid >= 0 )
    {
      PublisherSid = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      if ( PublisherSid >= 0 )
      {
        BufferLength = 0;
        RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferLength);
        v6 = Heap;
        if ( Heap )
        {
          PublisherSid = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Heap, &BufferLength);
          if ( PublisherSid >= 0 )
          {
            *a2 = v6;
            v6 = 0LL;
            PublisherSid = 0;
          }
          if ( v6 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
        }
        else
        {
          PublisherSid = -1073741801;
        }
      }
    }
  }
LABEL_17:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)PublisherSid;
}
