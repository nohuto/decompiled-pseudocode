/*
 * XREFs of ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180020094
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001E254 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x18002003C (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x180020238 (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180059E20 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180243778 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::_InitializeHelper(HSTRING *this, const unsigned __int16 *a2)
{
  HSTRING v3; // r8
  unsigned __int64 v4; // rax
  UINT32 v6; // edx
  signed int v7; // ebx
  HRESULT v8; // eax
  HSTRING v9; // rcx
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  string = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v6 = -1;
  if ( v4 <= 0xFFFFFFFF )
    v6 = v4;
  v7 = v4 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v4 <= 0xFFFFFFFF )
  {
    v8 = WindowsCreateString(a2, v6, &string);
    v3 = string;
    v7 = v8;
  }
  if ( v7 >= 0 )
  {
    v9 = *this;
    *this = v3;
    WindowsDeleteString(v9);
  }
  return (unsigned int)v7;
}
