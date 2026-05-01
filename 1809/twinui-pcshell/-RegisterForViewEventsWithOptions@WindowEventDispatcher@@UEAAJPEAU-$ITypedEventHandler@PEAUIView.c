/*
 * XREFs of ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18022AA50
 * Callers:
 *     ?RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x18022A9C0 (-RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@Vie.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180062184 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x180198094 (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x180222D9C (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 */

// Hidden C++ exception states: #wind=2
__int64 WindowEventDispatcher::RegisterForViewEventsWithOptions(__int64 a1, __int64 a2, ...)
{
  char *v4; // r12
  char *v5; // r15
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  __int64 *v9; // rdi
  int AgileReference; // ebx
  __int64 v11; // rdx
  RTL_SRWLOCK *v12; // rbx
  const WCHAR *v13; // rdi
  const WCHAR *v14; // rax
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v17; // edi
  const WCHAR *v18; // rax
  int v19; // eax
  LPCWSTR v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  const char *v23; // r9
  __int64 v24; // rax
  INT32 result; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h] BYREF
  LPCWSTR v27; // [rsp+40h] [rbp-58h] BYREF
  LPCWSTR i; // [rsp+48h] [rbp-50h] BYREF
  RTL_SRWLOCK *v29; // [rsp+50h] [rbp-48h]
  __int64 v30; // [rsp+58h] [rbp-40h]
  char *v31; // [rsp+60h] [rbp-38h] BYREF
  char *v32; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  HSTRING v34; // [rsp+B0h] [rbp+18h] BYREF
  va_list va; // [rsp+B0h] [rbp+18h]
  HSTRING string; // [rsp+B8h] [rbp+20h] BYREF
  va_list stringa; // [rsp+B8h] [rbp+20h]
  __int64 v38; // [rsp+C0h] [rbp+28h]
  _QWORD *v39; // [rsp+C8h] [rbp+30h]
  va_list va2; // [rsp+D0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(stringa, a2);
  va_start(va, a2);
  v34 = va_arg(stringa, HSTRING);
  va_copy(va2, stringa);
  string = va_arg(va2, HSTRING);
  v38 = va_arg(va2, _QWORD);
  v39 = va_arg(va2, _QWORD *);
  v30 = -2LL;
  try
  {
    v4 = (char *)operator new(0x38uLL);
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<ViewEventRegistration>::`vftable';
    v5 = v4 + 16;
    memset_0(v4 + 16, 0, 0x28uLL);
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    v31 = v4 + 16;
    v32 = v4;
    if ( v4 == (char *)-16LL )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        1687LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v6);
    v7 = Windows::Internal::String::Initialize((HSTRING *)v4 + 2, (HSTRING *)va);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1688LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
    v8 = Windows::Internal::String::Initialize((HSTRING *)v4 + 3, (HSTRING *)stringa);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1689LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
    *((_DWORD *)v4 + 8) = v38;
    v9 = (__int64 *)(v4 + 40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v4 + 5);
    AgileReference = 0;
    if ( a2 )
    {
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      AgileReference = RoGetAgileReference(0LL, &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e, a2, &v26);
      if ( AgileReference >= 0 )
      {
        v11 = *v9;
        *v9 = v26;
        v26 = v11;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    }
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1691LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 440));
    v12 = (RTL_SRWLOCK *)(a1 + 440);
    v29 = (RTL_SRWLOCK *)(a1 + 440);
    v13 = *(const WCHAR **)(a1 + 392);
    v14 = *(const WCHAR **)(a1 + 400);
    for ( i = v14; ; v14 = i )
    {
      v27 = v13;
      if ( v13 == v14 )
        break;
      StringLen = WindowsGetStringLen(*(HSTRING *)v5);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v5, 0LL);
      v17 = WindowsGetStringLen(**(HSTRING **)v13);
      v18 = WindowsGetStringRawBuffer(**(HSTRING **)v27, 0LL);
      v19 = CompareStringOrdinal(v18, v17, StringRawBuffer, StringLen, 1);
      v20 = v27;
      if ( v19 == 2 )
      {
        if ( WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)v27 + 8LL))
          || WindowsIsStringEmpty(*((HSTRING *)v4 + 3))
          || (v21 = *(_QWORD *)v20,
              result = 0,
              WindowsCompareStringOrdinal(*(HSTRING *)(v21 + 8), *((HSTRING *)v4 + 3), &result),
              !result) )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1720LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)0x80070057LL);
        }
      }
      v13 = v20 + 8;
    }
    *((_QWORD *)v4 + 6) = (*(_QWORD *)(a1 + 384))++;
    v22 = *(_QWORD *)(a1 + 400);
    if ( *(_QWORD *)(a1 + 408) == v22 )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        (char **)(a1 + 392),
        (char *)v22,
        &v31);
      v4 = v32;
      v5 = v31;
    }
    else
    {
      *(_QWORD *)v22 = 0LL;
      *(_QWORD *)(v22 + 8) = 0LL;
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
        v4 = v32;
        v5 = v31;
        v12 = v29;
      }
      *(_QWORD *)v22 = v5;
      *(_QWORD *)(v22 + 8) = v4;
      *(_QWORD *)(a1 + 400) += 16LL;
    }
    *v39 = *((_QWORD *)v5 + 4);
    i = WindowsGetStringRawBuffer(string, 0LL);
    v27 = WindowsGetStringRawBuffer(v34, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
      &v27,
      &i);
    if ( a1 != -440 )
      ReleaseSRWLockExclusive(v12);
    if ( v4 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    v24 = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6C6,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v23);
  }
  return v24;
}
