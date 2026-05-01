/*
 * XREFs of ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x1801F5B80
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003AAB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008F8E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1801F5CBC (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     SHRegSubKeyExistsW @ 0x180428CF4 (SHRegSubKeyExistsW.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ShouldCreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        unsigned int *a3,
        struct _GUID *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  bool v13; // zf
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 (__fastcall *v16)(__int64); // rax
  OLECHAR sz[40]; // [rsp+30h] [rbp-188h] BYREF
  wchar_t Buffer[128]; // [rsp+80h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  *a3 = 0;
  v6 = a2;
  *a4 = 0u;
  v9 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v9 < 0 )
  {
    v11 = 668LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( (unsigned int)v6 >= 0x86 )
  {
    v9 = -2147483637;
    v11 = 669LL;
    goto LABEL_3;
  }
  *a4 = *(struct _GUID *)*(&off_1805B7430 + 3 * v6);
  v13 = (*((_DWORD *)&off_1805B7430 + 6 * v6 + 3) & 1) == 0;
  v14 = *((_DWORD *)&off_1805B7430 + 6 * v6 + 3) & 1;
  *a3 = v14;
  if ( !v13 )
  {
    if ( (*(_BYTE *)(&off_1805B7430 + 3 * v6 + 1) & 1) != 0 )
    {
      StringFromGUID2((const GUID *const)*(&off_1805B7430 + 3 * v6), sz, 39);
      StringCchPrintfW(Buffer, 128LL, L"SOFTWARE\\Classes\\CLSID\\%s", sz, 0LL, 0LL);
      v14 = SHRegSubKeyExistsW(v15, Buffer);
      *a3 = v14;
    }
    v8 = v14;
    if ( v14 )
    {
      wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService(v14, v7, v10);
      v14 = *a3;
    }
  }
  if ( v14 )
  {
    v16 = (unsigned __int8 (__fastcall *)(__int64))*(&off_1805B7430 + 3 * v6 + 2);
    if ( v16 )
      *a3 = v16(v8);
  }
  return 0LL;
}
