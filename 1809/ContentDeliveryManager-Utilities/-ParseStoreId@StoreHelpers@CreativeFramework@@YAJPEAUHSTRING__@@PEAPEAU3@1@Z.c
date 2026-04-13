/*
 * XREFs of ?ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z @ 0x1800803E0
 * Callers:
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x180080DD0 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CreativeFramework::StoreHelpers::ParseStoreId(
        HSTRING string,
        HSTRING *newString,
        HSTRING *a3,
        HSTRING *a4)
{
  __int64 v7; // rdi
  const WCHAR *StringRawBuffer; // r14
  int StringOrdinal; // eax
  UINT32 v10; // r8d
  int v11; // esi
  HRESULT v12; // ebx
  __int64 v13; // rdx
  UINT32 v15; // esi
  signed int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  UINT32 length; // [rsp+68h] [rbp+10h] BYREF

  *newString = 0LL;
  *a3 = 0LL;
  v7 = -1LL;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  StringOrdinal = FindStringOrdinal(0x400000u, StringRawBuffer, -1, L"/", 1, 1);
  v10 = length;
  v11 = StringOrdinal;
  if ( StringOrdinal > 0 )
    v10 = StringOrdinal;
  v12 = WindowsSubstringWithSpecifiedLength(string, 0, v10, newString);
  if ( v12 < 0 )
  {
    v13 = 45LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\storehelpers.h",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  if ( v11 > 0 )
  {
    v15 = v11 + 1;
    v16 = FindStringOrdinal(0x400000u, &StringRawBuffer[v15], -1, L"/", 1, 1);
    if ( v16 <= 0 )
    {
      do
        ++v7;
      while ( StringRawBuffer[v15 + v7] );
      v16 = v7;
    }
    v12 = WindowsSubstringWithSpecifiedLength(string, v15, v16, a3);
    if ( v12 < 0 )
    {
      v13 = 52LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
