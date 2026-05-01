/*
 * XREFs of ?GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1801F3028
 * Callers:
 *     ?GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1801F33DC (-GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGrouping@ViewM.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002785C (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002C954 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x18009DF9C (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetSourceAppIdViewGroupingPreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1)
{
  HSTRING_HEADER *v2; // rbx
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  char v7; // al
  const WCHAR *StringRawBuffer; // rbx
  int StringOrdinal; // eax
  const unsigned __int16 *v10; // r8
  unsigned int v11; // ebx
  struct Windows::Foundation::IPropertyValue *pvData; // [rsp+48h] [rbp-C0h] BYREF
  UINT32 length[2]; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+58h] [rbp-B0h]
  DWORD pcbData[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h]
  HSTRING_HEADER v18; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SubKey[256]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  v17 = -2LL;
  length[0] = 0;
  string = 0LL;
  if ( !*(_QWORD *)a1 )
    goto LABEL_11;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, (const WCHAR **)off_180400298);
  length[0] = 1;
  WindowsDeleteString(string);
  string = 0LL;
  Reserved1 = (HSTRING)v2[1].Reserved.Reserved1;
  string = 0LL;
  pvData = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(a1, Reserved1, &pvData);
  if ( PropVal < 0 )
    goto LABEL_3;
  v5 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}((__int64)pvData);
  PropVal = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v5);
LABEL_3:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pvData);
    goto LABEL_9;
  }
  v6 = pvData;
  if ( pvData )
  {
    pvData = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  PropVal = 0;
LABEL_9:
  if ( PropVal < 0 )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v7 = 1;
LABEL_12:
  if ( !v7 )
    goto LABEL_17;
  StringRawBuffer = WindowsGetStringRawBuffer(string, length);
  StringOrdinal = FindStringOrdinal(0x800000u, StringRawBuffer, length[0], L".exe", -1, 1);
  v10 = L"Applications\\%s";
  if ( StringOrdinal == -1 )
    v10 = L"AppUserModelId\\%s";
  StringCchPrintfW(SubKey, 256LL, v10, StringRawBuffer);
  pcbData[0] = 4;
  if ( RegGetValueW(HKEY_CLASSES_ROOT, SubKey, L"TabGroupingPreference", 0x18u, 0LL, &pvData, pcbData)
    || (v11 = (unsigned int)pvData, (unsigned int)((_DWORD)pvData - 1) > 1) )
  {
LABEL_17:
    v11 = 0;
  }
  WindowsDeleteString(string);
  return v11;
}
