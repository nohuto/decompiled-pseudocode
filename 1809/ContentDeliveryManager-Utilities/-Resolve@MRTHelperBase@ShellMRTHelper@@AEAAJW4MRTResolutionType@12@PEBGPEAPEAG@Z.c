/*
 * XREFs of ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x18009B818
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x18009BC64 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023C88 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005354C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x18009B370 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 *     ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x18009B4A8 (-InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ShellMRTHelper::MRTHelperBase::Resolve(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  LPVOID v10; // rax
  __int64 v11; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v13; // rbx
  int v14; // esi
  unsigned __int16 **v15; // r8
  int v16; // eax
  void *v17; // rbx
  __int64 v18; // rsi
  LPVOID v19; // rax
  LPVOID pv; // [rsp+38h] [rbp-39h] BYREF
  __int64 v22; // [rsp+40h] [rbp-31h]
  __int64 v23; // [rsp+48h] [rbp-29h]
  UINT32 length[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp-9h]
  PWSTR ppszPathOut; // [rsp+70h] [rbp-1h] BYREF
  __int64 v27; // [rsp+78h] [rbp+7h]
  __int64 v28; // [rsp+80h] [rbp+Fh]
  HSTRING string; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v25 = -2LL;
  *(_QWORD *)length = L"ms-resource:ActionCenterGroupName";
  *(_QWORD *)a4 = 0LL;
  pv = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = ShellMRTHelper::MRTHelperBase::InitializeMRTObjects((ShellMRTHelper::MRTHelperBase *)a1, a2, a3, a4);
  v7 = v6;
  if ( *(_BYTE *)(a1 + 38) && (unsigned int)(v6 + 2147024894) <= 1 )
  {
    ppszPathOut = 0LL;
    v27 = -1LL;
    v28 = -1LL;
    v8 = PathAllocCombine(*(PCWSTR *)(a1 + 64), L"ms-resource:ActionCenterGroupName", 0, &ppszPathOut);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 169LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
        (const char *)(unsigned int)v8);
      if ( ppszPathOut )
      {
        LocalFree(ppszPathOut);
        ppszPathOut = 0LL;
      }
      v27 = 0LL;
      v28 = 0LL;
      goto LABEL_10;
    }
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           &pv,
           (__int64)ppszPathOut,
           0xFFFFFFFFFFFFFFFFuLL);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 170LL;
      goto LABEL_7;
    }
    v10 = pv;
    pv = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    *(_QWORD *)a4 = v10;
    if ( ppszPathOut )
    {
      LocalFree(ppszPathOut);
      ppszPathOut = 0LL;
    }
    v27 = 0LL;
    v28 = 0LL;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    return 0;
  }
  if ( v6 == -2147024891 )
    return (unsigned int)-2147024891;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&ppszPathOut, (const WCHAR **)length);
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 0xC && CompareStringOrdinal(StringRawBuffer, 12, L"ms-resource:", 12, 1) == 2 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v22 = -1LL;
      v23 = -1LL;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR *, LPVOID *))(*(_QWORD *)v13 + 48LL))(
              v13,
              *(_QWORD *)(a1 + 16),
              L"ms-resource:ActionCenterGroupName",
              &pv);
      if ( v14 < 0 )
      {
        *(_QWORD *)length = 0LL;
        v16 = ShellMRTHelper::Common::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(
                (ShellMRTHelper::Common *)string,
                length,
                v15);
        v17 = *(void **)length;
        if ( v16 >= 0 )
        {
          if ( *(_QWORD *)length && **(_WORD **)length )
          {
            v18 = *(_QWORD *)(a1 + 8);
            if ( pv )
            {
              CoTaskMemFree(pv);
              pv = 0LL;
            }
            v22 = -1LL;
            v23 = -1LL;
            v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, LPVOID *))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    *(_QWORD *)(a1 + 16),
                    v17,
                    &pv);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF4,
            (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
            (const char *)(unsigned int)v16);
        }
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFB,
            (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
            (const char *)(unsigned int)v14);
        if ( v17 )
          CoTaskMemFree(v17);
      }
    }
    else
    {
      v14 = -2147024809;
    }
    string = 0LL;
    if ( v14 >= 0 )
      goto LABEL_42;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v22 = -1LL;
    v23 = -1LL;
    v6 = SHStrDupW(L"ms-resource:ActionCenterGroupName", (LPWSTR *)&pv);
    v7 = v6;
    if ( v6 >= 0 )
    {
LABEL_42:
      v19 = pv;
      pv = 0LL;
      v23 = 0LL;
      v22 = 0LL;
      *(_QWORD *)a4 = v19;
      return 0;
    }
    v11 = 296LL;
  }
  else
  {
    v11 = 175LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
    (const char *)(unsigned int)v6);
LABEL_10:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  return v7;
}
