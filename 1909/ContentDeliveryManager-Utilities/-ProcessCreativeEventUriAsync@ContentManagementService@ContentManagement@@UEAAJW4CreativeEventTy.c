/*
 * XREFs of ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180015A00 (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029700 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180054604 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CADAC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CAFD8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventUriAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        __int64 a5,
        __int64 a6)
{
  const unsigned __int16 *StringRawBuffer; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  const WCHAR *v14; // rbx
  const char *v15; // rax
  const WCHAR *v16; // rax
  HSTRING v17; // rsi
  HSTRING v18; // rdi
  HSTRING *v19; // rbx
  HSTRING *v20; // rax
  const WCHAR *v22; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[32]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v26[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v27[40]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v28[6]; // [rsp+F0h] [rbp-10h] BYREF
  const WCHAR *v29; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v23[1] = (const WCHAR *)-2LL;
  `eh vector constructor iterator'(
    v28,
    0x18uLL,
    0x11uLL,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v11 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
          (CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *)v28,
          StringRawBuffer);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = v29;
    v22 = v29;
    v15 = (const char *)&unk_1801097C0;
    while ( *(_DWORD *)v15 != a2 )
    {
      v15 += 8;
      if ( v15 == "onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp" )
        goto LABEL_6;
    }
    if ( *((_DWORD *)v15 + 1) == -1 )
    {
LABEL_6:
      v23[0] = 0LL;
      v16 = 0LL;
      goto LABEL_7;
    }
    v16 = (const WCHAR *)v28[3 * *((int *)v15 + 1)];
    v23[0] = v16;
LABEL_7:
    if ( v16 )
      v17 = *(HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v24, v23);
    else
      v17 = 0LL;
    if ( v14 )
      v18 = *(HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v25, &v22);
    else
      v18 = 0LL;
    v22 = (const WCHAR *)v28[3];
    v19 = (HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v26, &v22);
    v22 = (const WCHAR *)v28[0];
    v20 = (HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v27, &v22);
    v11 = ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
            a1,
            a2,
            *v20,
            *v19,
            v18,
            v17,
            a4,
            a5,
            a6);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v12 = 0;
      goto LABEL_19;
    }
    v13 = 395LL;
  }
  else
  {
    v13 = 384LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v11);
LABEL_19:
  `eh vector destructor iterator'(
    v28,
    0x18uLL,
    0x11uLL,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
  return v12;
}
