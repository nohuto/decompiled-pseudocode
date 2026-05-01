/*
 * XREFs of _lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_::operator() @ 0x1801BB70C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___::Run @ 0x1801BED30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___--Run.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003AD54 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003DBCC (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18006CC60 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ @ 0x1801BCFC8 (-GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_::operator()(WCHAR *a1)
{
  const unsigned __int16 *StoreCortanaAumId; // rax
  const unsigned __int16 *v3; // r14
  int v4; // eax
  unsigned int v5; // ebx
  const WCHAR *v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  const WCHAR *v11; // rdx
  const WCHAR *v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16[1] = -2LL;
  StoreCortanaAumId = CortanaUndockingHelpers::GetStoreCortanaAumId((CortanaUndockingHelpers *)a1);
  v3 = StoreCortanaAumId;
  if ( *(_BYTE *)a1 )
  {
    v15 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&string,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           *(__int64 *)&hstringHeader.Reserved.Reserved2[16],
           &v15);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return v5;
    }
    v16[0] = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
    v6 = CortanaStoreAppExperienceManager::s_PreLaunchActivationKey;
    v7 = -1LL;
    do
      ++v7;
    while ( CortanaStoreAppExperienceManager::s_PreLaunchActivationKey[v7] );
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(v6, v7, &hstringHeader, &string);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v16,
           string,
           v8,
           1);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v11 = a1 + 4;
      if ( *((_QWORD *)a1 + 4) >= 8uLL )
        v11 = *(const WCHAR **)v11;
      v9 = ActivateApplicationForExperienceWithPropertySet(v3, v11, 0LL, v15, 1u, 0LL);
      v5 = v9;
      if ( v9 >= 0 )
        goto LABEL_15;
      v10 = 614LL;
    }
    else
    {
      v10 = 606LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    goto LABEL_16;
  }
  v12 = a1 + 4;
  if ( *((_QWORD *)a1 + 4) >= 8uLL )
    v12 = *(const WCHAR **)v12;
  v13 = ActivateApplicationForExperienceWithPropertySet(StoreCortanaAumId, v12, 0LL, 0LL, 1u, 0LL);
  v5 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  return v5;
}
