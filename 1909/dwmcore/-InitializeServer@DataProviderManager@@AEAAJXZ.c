/*
 * XREFs of ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800E1DC4
 * Callers:
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1800E1A5C (-Initialize@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800E20E0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180154D5C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DataProviderManager::InitializeServer(DataProviderManager *this)
{
  const char *v2; // r9
  __int64 v3; // rcx
  int v4; // eax
  int v5; // r9d
  unsigned int LastError; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v15; // [rsp+58h] [rbp+18h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-"
           "3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x30,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldataprovidermanager.cpp",
                  v2);
    goto LABEL_7;
  }
  v3 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)v3 + 56LL))(
         v3,
         SecurityDescriptor,
         &v15);
  LastError = v4;
  if ( v4 < 0 )
  {
    v10 = 53LL;
  }
  else
  {
    v12 = 0LL;
    v7 = *((_QWORD *)this + 2);
    v13 = 1;
    v4 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(
           v7,
           v15,
           (unsigned int)&v12,
           v5,
           (__int64)this + 24);
    LastError = v4;
    if ( v4 >= 0 )
    {
      LastError = 0;
      goto LABEL_5;
    }
    v10 = 65LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldataprovidermanager.cpp",
    (const char *)(unsigned int)v4,
    v11);
LABEL_5:
  v8 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_7:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
