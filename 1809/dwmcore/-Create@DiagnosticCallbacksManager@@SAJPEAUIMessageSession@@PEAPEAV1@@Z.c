/*
 * XREFs of ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180061AD4
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x180061DC4 (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801448CC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  SecurityDescriptor = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v5 = *(_QWORD *)a1;
    v15 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, PSECURITY_DESCRIPTOR, __int64 *))(v5 + 56))(
           a1,
           SecurityDescriptor,
           &v15);
    LastError = v6;
    if ( v6 < 0 )
    {
      v10 = 49LL;
    }
    else
    {
      v12 = 0LL;
      v13 = 1;
      v6 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>(
             (_DWORD)a1,
             v15,
             (unsigned int)&v12,
             v7,
             (__int64)a2);
      LastError = v6;
      if ( v6 >= 0 )
      {
        LastError = 0;
LABEL_5:
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
        goto LABEL_6;
      }
      v10 = 56LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
      (const char *)(unsigned int)v6,
      v11);
    goto LABEL_5;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x2C,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
                v4);
LABEL_6:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return LastError;
}
