/*
 * XREFs of ?_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IReference@H@Foundation@5@IAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800383AC
 * Callers:
 *     ?put_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x1800386C0 (-put_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 *     ?put_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038700 (-put_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming.c)
 *     ?put_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038740 (-put_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Pr.c)
 *     ?put_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038780 (-put_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037B80 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_ValidateAndSetNumericValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned int v5; // edi
  int NullableInt; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  v16[1] = -2LL;
  v5 = a3;
  v16[0] = 0LL;
  if ( a2 )
  {
    NullableInt = (*(__int64 (__fastcall **)(__int64, signed int *, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
                    a2,
                    &v18,
                    a3,
                    a2);
    v9 = NullableInt;
    if ( NullableInt < 0 )
    {
      v10 = 452LL;
LABEL_10:
      v11 = (unsigned int)NullableInt;
      goto LABEL_11;
    }
    if ( v18 < 0 )
    {
      v9 = -2147024809;
      v11 = 2147942487LL;
      v10 = 453LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)v11);
      v12 = v16[0];
      goto LABEL_20;
    }
    if ( v18 > v5 )
    {
      v9 = -2147024809;
      v11 = 2147942487LL;
      v10 = 454LL;
      goto LABEL_11;
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v8,
                    v16,
                    v18);
    v9 = NullableInt;
    if ( NullableInt < 0 )
    {
      v10 = 455LL;
      goto LABEL_10;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v13 = *a4;
  v12 = v16[0];
  if ( *a4 != v16[0] )
  {
    v14 = v16[0];
    if ( v16[0] )
    {
      (*(void (**)(void))(*(_QWORD *)v16[0] + 8LL))();
      v13 = *a4;
      v12 = v16[0];
    }
    *a4 = v14;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v12 = v16[0];
    }
  }
  if ( a1 != -168 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
    v12 = v16[0];
  }
  v9 = 0;
LABEL_20:
  if ( v12 )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v9;
}
