/*
 * XREFs of ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009610
 * Callers:
 *     _lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator() @ 0x18001B7D4 (_lambda_363ecfaa426a2d345ca41bd67db72fc0_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800099D4 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x18000B4A4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800117A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180042850 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *a2,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *a3,
        HSTRING a4)
{
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *v5; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v9; // rcx
  HRESULT v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  PCWSTR StringRawBuffer; // rax
  _WORD *v14; // rax
  PCWSTR v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  INT32 result; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-38h] BYREF
  HSTRING v21; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *)*((_QWORD *)this + 14);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *)*((_QWORD *)this + 14);
    }
    *((_QWORD *)this + 14) = a2;
    if ( v5 )
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v9 = (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)*((_QWORD *)this + 26);
  if ( v9 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)a3 + 8LL))(a3);
      v9 = (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)*((_QWORD *)this + 26);
    }
    *((_QWORD *)this + 26) = a3;
    if ( v9 )
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( !WindowsIsStringEmpty(a4) )
  {
    newString = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"processexe:", 0xBu, &hstringHeader, &string);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10, v11, v12);
      JUMPOUT(0x180009801LL);
    }
    WindowsDeleteString(newString);
    newString = 0LL;
    if ( WindowsSubstringWithSpecifiedLength(a4, 0, 0xBu, &newString) >= 0 )
    {
      result = 0;
      if ( WindowsCompareStringOrdinal(newString, string, &result) >= 0 && !result )
      {
        v21 = 0LL;
        WindowsDeleteString(0LL);
        v21 = 0LL;
        if ( WindowsSubstring(a4, 0xCu, &v21) >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(v21, 0LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
            (char *)this + 88,
            StringRawBuffer);
        }
        WindowsDeleteString(v21);
      }
    }
    v14 = (_WORD *)*((_QWORD *)this + 11);
    if ( !v14 || !*v14 )
    {
      v15 = WindowsGetStringRawBuffer(a4, 0LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        (char *)this + 64,
        v15);
    }
    string = 0LL;
    WindowsDeleteString(newString);
  }
  v16 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(this);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v16);
  return v17;
}
