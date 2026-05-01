/*
 * XREFs of ?IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x1800C7868
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x1800D2D8C (-SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18012DC8C (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

bool __fastcall ShellFeedsAvailabilityHelpers::IsCTAEnabled(ShellFeedsAvailabilityHelpers *this)
{
  void **v1; // rax
  HKEY v2; // rcx
  int v3; // r9d
  bool v4; // bl
  unsigned int *v6; // [rsp+28h] [rbp-71h]
  LPCWCH lpString1; // [rsp+30h] [rbp-69h] BYREF
  WCHAR String2[4]; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int16 v9[8]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v10; // [rsp+50h] [rbp-49h]
  wchar_t v11; // [rsp+60h] [rbp-39h]
  unsigned __int16 v12[8]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v13; // [rsp+80h] [rbp-19h]
  __int128 v14; // [rsp+90h] [rbp-9h]
  __int128 v15; // [rsp+A0h] [rbp+7h]
  __int128 v16; // [rsp+B0h] [rbp+17h]
  __int128 v17; // [rsp+C0h] [rbp+27h]
  __int64 v18; // [rsp+D0h] [rbp+37h]
  int v19; // [rsp+D8h] [rbp+3Fh]
  wchar_t v20; // [rsp+DCh] [rbp+43h]

  lpString1 = 0LL;
  *(_OWORD *)v12 = *(_OWORD *)L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess";
  v14 = *(_OWORD *)L"ft\\Windows\\CurrentVersion\\DeviceAccess";
  v13 = *(_OWORD *)L"\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess";
  v16 = *(_OWORD *)L"ntVersion\\DeviceAccess";
  v15 = *(_OWORD *)L"ws\\CurrentVersion\\DeviceAccess";
  v19 = *(_DWORD *)L"ss";
  v18 = *(_QWORD *)L"Access";
  v20 = aSoftwareMicros_16[54];
  v17 = *(_OWORD *)L"n\\DeviceAccess";
  v11 = aActivepolicyco[16];
  *(_OWORD *)v9 = *(_OWORD *)L"ActivePolicyCode";
  v10 = *(_OWORD *)L"licyCode";
  v1 = (void **)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&lpString1);
  if ( SHRegAllocData(v2, v12, v9, v3, v1, v6) < 0 )
  {
    v4 = 0;
  }
  else
  {
    wcscpy(String2, L"zh");
    v4 = CompareStringOrdinal(lpString1, -1, String2, -1, 1) == 2;
  }
  if ( lpString1 )
    CoTaskMemFree((LPVOID)lpString1);
  return v4;
}
