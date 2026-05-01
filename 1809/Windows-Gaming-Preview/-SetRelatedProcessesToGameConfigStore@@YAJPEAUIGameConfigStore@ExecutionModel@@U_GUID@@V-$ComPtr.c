/*
 * XREFs of ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18001696C
 * Callers:
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038CA8 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18001618C (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SetRelatedProcessesToGameConfigStore(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v10; // rbx
  PCWSTR StringRawBuffer; // r9
  int v12; // eax
  unsigned int v13; // esi
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING string[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  UINT32 length; // [rsp+88h] [rbp+20h] BYREF

  string[1] = (HSTRING)-2LL;
  string[0] = 0LL;
  v6 = SerializeRelatedProcessArray((__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3, string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = string[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string[0], &length);
    v17 = *a2;
    v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, PCWSTR, UINT32))(*(_QWORD *)a1 + 72LL))(
            a1,
            &v17,
            22LL,
            StringRawBuffer,
            2 * length);
    v13 = v12;
    if ( v12 >= 0 )
    {
      WindowsDeleteString(v10);
      v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x215,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v12);
      WindowsDeleteString(v10);
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
      }
      return v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v6);
    WindowsDeleteString(string[0]);
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
    }
    return v7;
  }
}
