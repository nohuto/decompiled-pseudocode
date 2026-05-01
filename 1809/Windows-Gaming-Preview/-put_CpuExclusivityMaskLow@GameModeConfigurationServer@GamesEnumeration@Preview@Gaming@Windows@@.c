/*
 * XREFs of ?put_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037B80 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_CpuExclusivityMaskLow(
        __int64 a1,
        __int64 a2)
{
  DWORD ActiveProcessorCount; // edi
  signed int LastError; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int NullableInt; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  signed int v16; // [rsp+40h] [rbp+18h] BYREF
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v17 = 0LL;
  ActiveProcessorCount = GetActiveProcessorCount(0);
  if ( !ActiveProcessorCount )
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( (v6 & 0x80000000) == 0 )
      goto LABEL_16;
    v7 = v6;
    v8 = 585LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)v7);
LABEL_16:
    v11 = v17;
    goto LABEL_25;
  }
  if ( a2 )
  {
    NullableInt = (*(__int64 (__fastcall **)(__int64, signed int *))(*(_QWORD *)a2 + 48LL))(a2, &v16);
    v6 = NullableInt;
    if ( NullableInt < 0 )
    {
      v8 = 592LL;
LABEL_14:
      v7 = (unsigned int)NullableInt;
      goto LABEL_15;
    }
    if ( ActiveProcessorCount < 0x20 )
    {
      v10 = ActiveProcessorCount;
      if ( v16 >> ActiveProcessorCount )
      {
        v6 = -2147024809;
        v8 = 596LL;
        v7 = 2147942487LL;
        goto LABEL_15;
      }
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v10,
                    &v17,
                    v16);
    v6 = NullableInt;
    if ( NullableInt < 0 )
    {
      v8 = 599LL;
      goto LABEL_14;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v12 = *(_QWORD *)(a1 + 144);
  v11 = v17;
  if ( v12 != v17 )
  {
    v13 = v17;
    if ( v17 )
    {
      (*(void (**)(void))(*(_QWORD *)v17 + 8LL))();
      v12 = *(_QWORD *)(a1 + 144);
      v11 = v17;
    }
    *(_QWORD *)(a1 + 144) = v13;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = v17;
    }
  }
  if ( a1 != -168 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
    v11 = v17;
  }
  v6 = 0;
LABEL_25:
  if ( v11 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v6;
}
