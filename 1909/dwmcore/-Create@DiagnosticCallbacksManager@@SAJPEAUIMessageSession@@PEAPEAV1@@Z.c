/*
 * XREFs of ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E1B90
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800E1C6C (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180154D5C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::Create(
        struct IMessageSession *a1,
        struct DiagnosticCallbacksManager **a2)
{
  const char *v4; // r9
  __int64 v5; // rax
  int v6; // eax
  int v7; // r9d
  unsigned int LastError; // ebx
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
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
                  (void *)0x29,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
                  v4);
    goto LABEL_7;
  }
  v5 = *(_QWORD *)a1;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, PSECURITY_DESCRIPTOR, __int64 *))(v5 + 56))(
         a1,
         SecurityDescriptor,
         &v16);
  LastError = v6;
  if ( v6 < 0 )
  {
    v11 = 46LL;
  }
  else
  {
    v13 = 0LL;
    v14 = 1;
    v6 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>(
           (_DWORD)a1,
           v16,
           (unsigned int)&v13,
           v7,
           (__int64)a2);
    LastError = v6;
    if ( v6 >= 0 )
    {
      LastError = 0;
      goto LABEL_5;
    }
    v11 = 53LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
    (const char *)(unsigned int)v6,
    v12);
LABEL_5:
  v9 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_7:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
