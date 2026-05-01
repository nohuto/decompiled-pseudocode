/*
 * XREFs of ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18027F8B0
 * Callers:
 *     ?RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x18027F820 (-RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@Vie.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18006C414 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1801DF04C (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x1802785B4 (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 */

// Hidden C++ exception states: #wind=2
__int64 WindowEventDispatcher::RegisterForViewEventsWithOptions(RTL_SRWLOCK *a1, __int64 a2, ...)
{
  const char *v4; // r9
  std::_Ref_count_base *v5; // r12
  char *v6; // r13
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int AgileReference; // ebx
  RTL_SRWLOCK *v11; // rbx
  HSTRING **Ptr; // rdi
  const WCHAR *v13; // rax
  HSTRING *v14; // r14
  UINT32 StringLen; // r15d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v17; // edi
  const WCHAR *v18; // rax
  int v19; // eax
  HSTRING **v20; // rdi
  HSTRING *v21; // rcx
  char *v22; // rcx
  _QWORD *v23; // rdx
  HSTRING v24; // r14
  HSTRING v25; // r15
  const char *v26; // r9
  __int64 v27; // rax
  INT32 result; // [rsp+30h] [rbp-98h] BYREF
  __int64 v29; // [rsp+38h] [rbp-90h] BYREF
  HSTRING v30; // [rsp+40h] [rbp-88h] BYREF
  HSTRING **v31; // [rsp+48h] [rbp-80h]
  LPCWSTR i; // [rsp+50h] [rbp-78h] BYREF
  char *v33; // [rsp+58h] [rbp-70h] BYREF
  std::_Ref_count_base *v34; // [rsp+60h] [rbp-68h]
  HSTRING v35; // [rsp+68h] [rbp-60h]
  RTL_SRWLOCK *v36; // [rsp+70h] [rbp-58h]
  __int64 v37; // [rsp+78h] [rbp-50h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-48h]
  __int64 v39; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  HSTRING v42; // [rsp+E0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+18h]
  HSTRING string; // [rsp+E8h] [rbp+20h] BYREF
  va_list stringa; // [rsp+E8h] [rbp+20h]
  __int64 v46; // [rsp+F0h] [rbp+28h]
  _QWORD *v47; // [rsp+F8h] [rbp+30h]
  va_list va2; // [rsp+100h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(stringa, a2);
  va_start(va, a2);
  v42 = va_arg(stringa, HSTRING);
  va_copy(va2, stringa);
  string = va_arg(va2, HSTRING);
  v46 = va_arg(va2, _QWORD);
  v47 = va_arg(va2, _QWORD *);
  v39 = -2LL;
  v35 = string;
  v30 = v42;
  try
  {
    v5 = (std::_Ref_count_base *)operator new(0x38uLL);
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<ViewEventRegistration>::`vftable';
    v6 = (char *)v5 + 16;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    v33 = (char *)v5 + 16;
    v34 = v5;
    if ( v5 == (std::_Ref_count_base *)-16LL )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        1839LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v4);
    v7 = Windows::Internal::String::Initialize((HSTRING *)v5 + 2, (HSTRING *)va);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1840LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
    v8 = Windows::Internal::String::Initialize((HSTRING *)v5 + 3, (HSTRING *)stringa);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1841LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
    *((_DWORD *)v5 + 8) = v46;
    v9 = 0LL;
    v29 = 0LL;
    AgileReference = 0;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      AgileReference = RoGetAgileReference(0LL, &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9, a2, &v29);
      v9 = v29;
    }
    v29 = 0LL;
    v37 = *((_QWORD *)v5 + 5);
    *((_QWORD *)v5 + 5) = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1843LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference);
    v11 = a1 + 54;
    v36 = a1 + 54;
    AcquireSRWLockExclusive(a1 + 54);
    SRWLock = a1 + 54;
    Ptr = (HSTRING **)a1[48].Ptr;
    v13 = (const WCHAR *)a1[49].Ptr;
    for ( i = v13; ; v13 = i )
    {
      v31 = Ptr;
      if ( Ptr == (HSTRING **)v13 )
        break;
      v14 = *Ptr;
      StringLen = WindowsGetStringLen(*(HSTRING *)v6);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v6, 0LL);
      v17 = WindowsGetStringLen(*v14);
      v18 = WindowsGetStringRawBuffer(*v14, 0LL);
      v19 = CompareStringOrdinal(v18, v17, StringRawBuffer, StringLen, 1);
      v20 = v31;
      if ( v19 == 2 )
      {
        if ( WindowsIsStringEmpty((*v31)[1])
          || WindowsIsStringEmpty(*((HSTRING *)v5 + 3))
          || (v21 = *v20, result = 0, WindowsCompareStringOrdinal(v21[1], *((HSTRING *)v5 + 3), &result), !result) )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1872LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)0x80070057LL);
        }
      }
      Ptr = v20 + 2;
    }
    v22 = (char *)a1[47].Ptr;
    a1[47].Ptr = v22 + 1;
    *((_QWORD *)v5 + 6) = v22;
    v23 = a1[49].Ptr;
    if ( a1[50].Ptr == v23 )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        &a1[48].Ptr,
        v23,
        &v33);
      v5 = v34;
      v6 = v33;
      v24 = v35;
      v25 = v30;
    }
    else
    {
      *v23 = 0LL;
      v23[1] = 0LL;
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
        v24 = string;
        v25 = v42;
        v5 = v34;
        v6 = v33;
        v11 = SRWLock;
      }
      else
      {
        v24 = v35;
        v25 = v30;
      }
      *v23 = v6;
      v23[1] = v5;
      a1[49].Ptr = (char *)a1[49].Ptr + 16;
    }
    *v47 = *((_QWORD *)v6 + 4);
    i = WindowsGetStringRawBuffer(v24, 0LL);
    v30 = (HSTRING)WindowsGetStringRawBuffer(v25, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
      (LPCWSTR *)&v30,
      &i);
    if ( v36 )
      ReleaseSRWLockExclusive(v11);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    v27 = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x75E,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v26);
  }
  return v27;
}
